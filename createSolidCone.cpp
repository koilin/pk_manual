		PK_VECTOR_t location{ 0, 0, 0 };
		PK_VECTOR1_t axis{ 0, 0, 1 };
		PK_VECTOR1_t ref{ 1, 0, 0 };
		PK_AXIS2_sf_s axis2{ location, axis, ref };

		constexpr double PI_VALUE = 3.14159265358979323846;
		double radius = 1;
		double height = 1;
		double semi_angle = PI_VALUE / 4;
		PK_BODY_t coneBody;
		auto coneErr = PK_BODY_create_solid_cone(radius, height, semi_angle, &axis2, &coneBody);

用上面的参数创建出来的cone是一个圆台
