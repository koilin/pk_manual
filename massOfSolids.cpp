		PK_VECTOR_t location{ 0, 0, 0 };
		PK_VECTOR1_t axis{ 0, 0, 1 };
		PK_VECTOR1_t ref{ 1, 0, 0 };
		PK_AXIS2_sf_s axis2{ location, axis, ref };
		//PK_BODY_t blkTag;
		//auto errCode = PK_BODY_create_solid_block(x, y, z, &axis2, &blkTag);

		PK_BODY_t cylTag;
		auto errCode = PK_BODY_create_solid_cyl(1, 4, &axis2, &cylTag);

		PK_VECTOR_t sphLocation{ 3, 4, 5 };
		PK_VECTOR1_t sphAxis{ 0, 0, 1 };
		PK_VECTOR1_t sphRef{ 1, 0, 0 };
		PK_AXIS2_sf_t sphAxis2{ sphLocation, sphAxis, sphRef };

		PK_BODY_t sphTag;
		errCode = PK_BODY_create_solid_sphere(2, &sphAxis2, &sphTag);

		double amount[3], mass[3], c_of_g[9], m_of_i[27], periphery[3];
		PK_TOPOL_eval_mass_props_o_t mass_opts;
		PK_TOPOL_eval_mass_props_o_m(mass_opts);

		std::vector<PK_TOPOL_t> vecTopols;
		vecTopols.emplace_back(cylTag);
		vecTopols.emplace_back(sphTag);

		auto massFacesErr = PK_TOPOL_eval_mass_props(vecTopols.size(), &vecTopols[0], 1, &mass_opts, amount, mass, c_of_g, m_of_i, periphery);