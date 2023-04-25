		PK_LINE_sf_t line_sf;
		PK_LINE_t line;

		PK_AXIS1_sf_t first_basis_set;
 		first_basis_set.location.coord[0] = 0.;
		first_basis_set.location.coord[1] = 0.;
		first_basis_set.location.coord[2] = 0.;
		first_basis_set.axis.coord[0] = 1;
		first_basis_set.axis.coord[1] = 0;
		first_basis_set.axis.coord[2] = 0;
		line_sf.basis_set = first_basis_set;
		PK_LINE_create( &line_sf, &line );