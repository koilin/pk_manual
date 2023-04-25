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

PK_BODY_t primitive;
int n_new_edges = 0;
PK_EDGE_t* new_edges = NULL;
int* edge_index = NULL;

PK_INTERVAL_t interval;
interval.value[0] = -5.;
interval.value[1] = 5;

PK_CURVE_make_wire_body_o_t   options;
PK_CURVE_make_wire_body_o_m( options );
PK_CURVE_make_wire_body_2(1, &line, &interval, &options, &primitive, &n_new_edges, &new_edges, &edge_index);
if(n_new_edges)
{
    PK_MEMORY_free(new_edges);
    PK_MEMORY_free(edge_index);
}