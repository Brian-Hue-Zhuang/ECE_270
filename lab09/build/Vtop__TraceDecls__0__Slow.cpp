// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vtop___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"LS0", "LS1", "LS2", "LS3", "LS4", "LS5", 
                                "LS6", "LS7", "INIT", 
                                "OPEN", "ALARM"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010"};
        tracep->declDTypeEnum(1, "$unit::state_t", 11, 4, __VenumItemNames, __VenumItemValues);
    }
}

void Vtop___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtop___024root__traceDeclTypesSub0(tracep);
}
