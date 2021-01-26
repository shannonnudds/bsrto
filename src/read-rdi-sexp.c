
#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>
#include "read-rdi-sexp.h"

// end generated by data-raw/read-rdi-tools.R

SEXP rdi_fixed_leader_data_list(rdi_fixed_leader_data_t* fixed) {
    const char* fixed_df_names[] = { "magic_number", "firmware_version", "system_config", "real_sim_flag", "lag_length", "n_beams", "n_cells", "pings_per_ensemble", "cell_size", "blank_after_transmit", "profiling_mode", "low_corr_thresh", "n_code_reps", "pct_gd_min", "error_velocity_maximum", "tpp_minutes", "tpp_seconds", "tpp_hundredths", "coord_transform", "heading_alignment", "heading_bias", "sensor_source", "sensors_available", "bin1_distance", "transmit_pulse_length", "wp_ref_layer_average", "false_target_threshold", "padding", "transmit_lag_distance", "cpu_board_serial_number", "system_bandwidth", "system_power", "padding2", "serial_number", "beam_angle"  , ""};
    SEXP fixed_df = PROTECT(Rf_mkNamed(VECSXP, fixed_df_names));
    SET_VECTOR_ELT(fixed_df, 0, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 1, Rf_allocVector(VECSXP, 1));
    SET_VECTOR_ELT(fixed_df, 2, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 3, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 4, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 5, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 6, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 7, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 8, Rf_allocVector(REALSXP, 1));
    SET_VECTOR_ELT(fixed_df, 9, Rf_allocVector(REALSXP, 1));
    SET_VECTOR_ELT(fixed_df, 10, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 11, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 12, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 13, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 14, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 15, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 16, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 17, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 18, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 19, Rf_allocVector(REALSXP, 1));
    SET_VECTOR_ELT(fixed_df, 20, Rf_allocVector(REALSXP, 1));
    SET_VECTOR_ELT(fixed_df, 21, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 22, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 23, Rf_allocVector(REALSXP, 1));
    SET_VECTOR_ELT(fixed_df, 24, Rf_allocVector(REALSXP, 1));
    SET_VECTOR_ELT(fixed_df, 25, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 26, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 27, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 28, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 29, Rf_allocVector(VECSXP, 1));
    SET_VECTOR_ELT(fixed_df, 30, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 31, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 32, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(fixed_df, 33, Rf_allocVector(VECSXP, 1));
    SET_VECTOR_ELT(fixed_df, 34, Rf_allocVector(INTSXP, 1));

    INTEGER(VECTOR_ELT(fixed_df, 0))[0] = fixed->magic_number;
    SEXP r_firmware_version = PROTECT(Rf_allocVector(INTSXP, 2));
for (int j = 0; j < 2; j++) {
    INTEGER(r_firmware_version)[j] = fixed->firmware_version[j];
}
SET_VECTOR_ELT(VECTOR_ELT(fixed_df, 1),  0, r_firmware_version);
UNPROTECT(1);
    INTEGER(VECTOR_ELT(fixed_df, 2))[0] = fixed->system_config;
    INTEGER(VECTOR_ELT(fixed_df, 3))[0] = fixed->real_sim_flag;
    INTEGER(VECTOR_ELT(fixed_df, 4))[0] = fixed->lag_length;
    INTEGER(VECTOR_ELT(fixed_df, 5))[0] = fixed->n_beams;
    INTEGER(VECTOR_ELT(fixed_df, 6))[0] = fixed->n_cells;
    INTEGER(VECTOR_ELT(fixed_df, 7))[0] = fixed->pings_per_ensemble;
    REAL(VECTOR_ELT(fixed_df, 8))[0] = fixed->cell_size / 100.0;
    REAL(VECTOR_ELT(fixed_df, 9))[0] = fixed->blank_after_transmit / 100.0;
    INTEGER(VECTOR_ELT(fixed_df, 10))[0] = fixed->profiling_mode;
    INTEGER(VECTOR_ELT(fixed_df, 11))[0] = fixed->low_corr_thresh;
    INTEGER(VECTOR_ELT(fixed_df, 12))[0] = fixed->n_code_reps;
    INTEGER(VECTOR_ELT(fixed_df, 13))[0] = fixed->pct_gd_min;
    INTEGER(VECTOR_ELT(fixed_df, 14))[0] = fixed->error_velocity_maximum;
    INTEGER(VECTOR_ELT(fixed_df, 15))[0] = fixed->tpp_minutes;
    INTEGER(VECTOR_ELT(fixed_df, 16))[0] = fixed->tpp_seconds;
    INTEGER(VECTOR_ELT(fixed_df, 17))[0] = fixed->tpp_hundredths;
    INTEGER(VECTOR_ELT(fixed_df, 18))[0] = fixed->coord_transform;
    REAL(VECTOR_ELT(fixed_df, 19))[0] = fixed->heading_alignment / 100.0;
    REAL(VECTOR_ELT(fixed_df, 20))[0] = fixed->heading_bias / 100.0;
    INTEGER(VECTOR_ELT(fixed_df, 21))[0] = fixed->sensor_source;
    INTEGER(VECTOR_ELT(fixed_df, 22))[0] = fixed->sensors_available;
    REAL(VECTOR_ELT(fixed_df, 23))[0] = fixed->bin1_distance / 100.0;
    REAL(VECTOR_ELT(fixed_df, 24))[0] = fixed->transmit_pulse_length / 100.0;
    INTEGER(VECTOR_ELT(fixed_df, 25))[0] = fixed->wp_ref_layer_average;
    INTEGER(VECTOR_ELT(fixed_df, 26))[0] = fixed->false_target_threshold;
    INTEGER(VECTOR_ELT(fixed_df, 27))[0] = fixed->padding;
    INTEGER(VECTOR_ELT(fixed_df, 28))[0] = fixed->transmit_lag_distance;
    SEXP r_cpu_board_serial_number = PROTECT(Rf_allocVector(INTSXP, 8));
for (int j = 0; j < 8; j++) {
    INTEGER(r_cpu_board_serial_number)[j] = fixed->cpu_board_serial_number[j];
}
SET_VECTOR_ELT(VECTOR_ELT(fixed_df, 29),  0, r_cpu_board_serial_number);
UNPROTECT(1);
    INTEGER(VECTOR_ELT(fixed_df, 30))[0] = fixed->system_bandwidth;
    INTEGER(VECTOR_ELT(fixed_df, 31))[0] = fixed->system_power;
    INTEGER(VECTOR_ELT(fixed_df, 32))[0] = fixed->padding2;
    SEXP r_serial_number = PROTECT(Rf_allocVector(INTSXP, 4));
for (int j = 0; j < 4; j++) {
    INTEGER(r_serial_number)[j] = fixed->serial_number[j];
}
SET_VECTOR_ELT(VECTOR_ELT(fixed_df, 33),  0, r_serial_number);
UNPROTECT(1);
    INTEGER(VECTOR_ELT(fixed_df, 34))[0] = fixed->beam_angle;

    UNPROTECT(1);
    return fixed_df;
}

SEXP rdi_variable_leader_data_list(rdi_variable_leader_data_t* variable) {
    const char* variable_df_names[] = { "magic_number", "ensemble_number", "real_time_clock", "ensemble_number_msb", "bit_result", "sound_speed", "tranducer_depth"  , ""};
    SEXP variable_df = PROTECT(Rf_mkNamed(VECSXP, variable_df_names));
    SET_VECTOR_ELT(variable_df, 0, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(variable_df, 1, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(variable_df, 2, Rf_allocVector(VECSXP, 1));
    SET_VECTOR_ELT(variable_df, 3, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(variable_df, 4, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(variable_df, 5, Rf_allocVector(INTSXP, 1));
    SET_VECTOR_ELT(variable_df, 6, Rf_allocVector(INTSXP, 1));

    INTEGER(VECTOR_ELT(variable_df, 0))[0] = variable->magic_number;
    INTEGER(VECTOR_ELT(variable_df, 1))[0] = variable->ensemble_number;
    SEXP r_real_time_clock = PROTECT(Rf_allocVector(INTSXP, 7));
for (int j = 0; j < 7; j++) {
    INTEGER(r_real_time_clock)[j] = variable->real_time_clock[j];
}
SET_VECTOR_ELT(VECTOR_ELT(variable_df, 2),  0, r_real_time_clock);
UNPROTECT(1);
    INTEGER(VECTOR_ELT(variable_df, 3))[0] = variable->ensemble_number_msb;
    INTEGER(VECTOR_ELT(variable_df, 4))[0] = variable->bit_result;
    INTEGER(VECTOR_ELT(variable_df, 5))[0] = variable->sound_speed;
    INTEGER(VECTOR_ELT(variable_df, 6))[0] = variable->tranducer_depth;

    UNPROTECT(1);
    return variable_df;
}

// end generated by data-raw/read-rdi-tools.R
