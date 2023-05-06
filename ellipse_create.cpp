 		PK_ELLIPSE_sf_t ellipse_sf;
		PK_ELLIPSE_t ellipse;
 		basis_set.location.coord[0] = 8;
		basis_set.location.coord[1] = -10;
		basis_set.location.coord[2] = 0;
		basis_set.axis.coord[0] = 0;
		basis_set.axis.coord[1] = 0;
		basis_set.axis.coord[2] = 1;
		basis_set.ref_direction.coord[0] = 1;
		basis_set.ref_direction.coord[1] = 0;
		basis_set.ref_direction.coord[2] = 0;
  
		ellipse_sf.basis_set = basis_set;
		ellipse_sf.R1 = 6;
		ellipse_sf.R2 = 3;

		PK_ELLIPSE_create( &ellipse_sf, &ellipse );
