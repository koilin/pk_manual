		PK_VECTOR_t vector1 = { { 0.816497, 0.408248, 0.408248 } };
		PK_VECTOR_s vector2 = { {2.0, 0.0, 0.0} };
		PK_VECTOR1_t perpendicularVector;
		errCode = PK_VECTOR_perpendicular(vector1, vector2, &perpendicularVector);