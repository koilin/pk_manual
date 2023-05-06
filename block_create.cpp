		double x = 30;
		double y = 10;
		double z = 10;

		PK_VECTOR_t location{0, 0, 0};
		PK_VECTOR1_t axis{ 0, 0, 1 };
		PK_VECTOR1_t ref{1, 0, 0};
		PK_AXIS2_sf_s axis2{ location, axis, ref };
		PK_BODY_t block;
		auto errCode = PK_BODY_create_solid_block(x, y, z, &axis2, &block);
