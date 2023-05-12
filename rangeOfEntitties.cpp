PK_VECTOR_t location{ 0, 0, 0 };
PK_VECTOR1_t axis{ 0, 0, 1 };
PK_VECTOR1_t ref{ 1, 0, 0 };
PK_AXIS2_sf_s axis2{ location, axis, ref };

double x = 10;
double y = 10;
double z = 10;

PK_BODY_t block;
auto errCode = PK_BODY_create_solid_block(x, y, z, &axis2, &block);

PK_POINT_t ptTag1;
PK_POINT_sf_t point1{ 10, 3, 4 };
auto pointErr = PK_POINT_create(&point1, &ptTag1);

PK_POINT_t ptTag2;
PK_POINT_sf_t point2{ 20, 3, 4 };
auto pointErr2 = PK_POINT_create(&point2, &ptTag2);

PK_ENTITY_t entities1[2];
entities1[0] = ptTag1;
entities1[1] = ptTag2;

PK_ENTITY_t entities2[1];
entities2[0] = block;
PK_ENTITY_range_o_t rangeOption;
PK_ENTITY_range_o_m(rangeOption);
PK_ENTITY_range_r_t rangRes;
auto rangeErr = PK_ENTITY_range(2, entities1, NULL, 1, entities2, NULL, &rangeOption, &rangRes);

rangeOption.range_type = PK_range_type_maximum_c;
rangeErr = PK_ENTITY_range(2, entities1, NULL, 1, entities2, NULL, &rangeOption, &rangRes);

PK_VECTOR_t location{ 0, 0, 0 };
PK_VECTOR1_t axis{ 0, 0, 1 };
PK_VECTOR1_t ref{ 1, 0, 0 };
PK_AXIS2_sf_s axis2{ location, axis, ref };

double x = 10;
double y = 10;
double z = 10;

PK_BODY_t block;
auto errCode = PK_BODY_create_solid_block(x, y, z, &axis2, &block);

PK_VECTOR_t locationCyl{ 50, 0, 0 };
PK_VECTOR1_t axisCyl{ 0, 0, 1 };
PK_VECTOR1_t refCyl{ 1, 0, 0 };
PK_AXIS2_sf_s axis2Cyl{ locationCyl, axisCyl, refCyl };
PK_BODY_t cylTag;
auto cylErr = PK_BODY_create_solid_cyl(3, 9, &axis2Cyl, &cylTag);

int nEdge = 0;
PK_EDGE_t* cylEdges = nullptr;
auto edgeGetErr = PK_BODY_ask_edges(cylTag, &nEdge, &cylEdges);

PK_ENTITY_t entities2[1];
entities2[0] = block;
PK_ENTITY_range_o_t rangeOption;
PK_ENTITY_range_o_m(rangeOption);
PK_ENTITY_range_r_t rangRes;
auto rangeErr = PK_ENTITY_range(nEdge, cylEdges, NULL, 1, entities2, NULL, &rangeOption, &rangRes);

rangeOption.range_type = PK_range_type_maximum_c;
rangeErr = PK_ENTITY_range(nEdge, cylEdges, NULL, 1, entities2, NULL, &rangeOption, &rangRes);

if (cylEdges)
{
    PK_MEMORY_free(cylEdges);
}