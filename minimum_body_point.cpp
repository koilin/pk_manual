		PK_POINT_sf_t point_sf;
		point_sf.position.coord[0] = 0.;
		point_sf.position.coord[1] = 0.;
		point_sf.position.coord[2] = 0.;

		PK_BODY_t min_body;
		PK_POINT_t point;

		PK_POINT_create(&point_sf, &point);	
		PK_POINT_make_minimum_body(point, &min_body);