		PK_VECTOR_t location{ 1, 2, 0 };
		PK_VECTOR1_t axis{ 0, 0, 1 };
		PK_VECTOR1_t ref{ 1, 0, 0 };
		PK_AXIS2_sf_s axis2{ location, axis, ref };

		PK_CIRCLE_sf_t circleData;
		circleData.basis_set = axis2;
		circleData.radius = 10000000000;
		PK_CIRCLE_t circle;
		auto circleErr = PK_CIRCLE_create(&circleData, &circle);
