
//------------------------------------------------------------------------------
// (c) Copyright 2014 Xilinx, Inc. All rights reserved.
//
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
//
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
//
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
//
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
//------------------------------------------------------------------------------ 
//
// C Model configuration for the "fir_compiler_0" instance.
//
//------------------------------------------------------------------------------
//
// coefficients: -6,-2,-3,-3,-4,-4,-5,-6,-6,-7,-8,-8,-9,-10,-10,-11,-11,-12,-12,-12,-12,-12,-12,-12,-11,-10,-9,-7,-5,-3,-1,2,6,9,14,18,23,29,36,42,50,58,66,76,85,96,107,118,130,143,156,170,184,199,214,230,245,262,278,295,312,329,346,364,381,398,415,432,448,464,480,496,511,525,538,551,564,575,586,596,605,612,619,625,630,634,637,638,639,638,637,634,630,625,619,612,605,596,586,575,564,551,538,525,511,496,480,464,448,432,415,398,381,364,346,329,312,295,278,262,245,230,214,199,184,170,156,143,130,118,107,96,85,76,66,58,50,42,36,29,23,18,14,9,6,2,-1,-3,-5,-7,-9,-10,-11,-12,-12,-12,-12,-12,-12,-12,-11,-11,-10,-10,-9,-8,-8,-7,-6,-6,-5,-4,-4,-3,-3,-2,-6
// chanpats: 173
// name: fir_compiler_0
// filter_type: 2
// rate_change: 0
// interp_rate: 1
// decim_rate: 40
// zero_pack_factor: 1
// coeff_padding: 31
// num_coeffs: 177
// coeff_sets: 1
// reloadable: 0
// is_halfband: 0
// quantization: 0
// coeff_width: 16
// coeff_fract_width: 0
// chan_seq: 0
// num_channels: 1
// num_paths: 2
// data_width: 16
// data_fract_width: 0
// output_rounding_mode: 0
// output_width: 32
// output_fract_width: 0
// config_method: 0

const double fir_compiler_0_coefficients[177] = {-6,-2,-3,-3,-4,-4,-5,-6,-6,-7,-8,-8,-9,-10,-10,-11,-11,-12,-12,-12,-12,-12,-12,-12,-11,-10,-9,-7,-5,-3,-1,2,6,9,14,18,23,29,36,42,50,58,66,76,85,96,107,118,130,143,156,170,184,199,214,230,245,262,278,295,312,329,346,364,381,398,415,432,448,464,480,496,511,525,538,551,564,575,586,596,605,612,619,625,630,634,637,638,639,638,637,634,630,625,619,612,605,596,586,575,564,551,538,525,511,496,480,464,448,432,415,398,381,364,346,329,312,295,278,262,245,230,214,199,184,170,156,143,130,118,107,96,85,76,66,58,50,42,36,29,23,18,14,9,6,2,-1,-3,-5,-7,-9,-10,-11,-12,-12,-12,-12,-12,-12,-12,-11,-11,-10,-10,-9,-8,-8,-7,-6,-6,-5,-4,-4,-3,-3,-2,-6};

const xip_fir_v7_2_pattern fir_compiler_0_chanpats[1] = {P_BASIC};

static xip_fir_v7_2_config gen_fir_compiler_0_config() {
  xip_fir_v7_2_config config;
  config.name                = "fir_compiler_0";
  config.filter_type         = 2;
  config.rate_change         = XIP_FIR_INTEGER_RATE;
  config.interp_rate         = 1;
  config.decim_rate          = 40;
  config.zero_pack_factor    = 1;
  config.coeff               = &fir_compiler_0_coefficients[0];
  config.coeff_padding       = 31;
  config.num_coeffs          = 177;
  config.coeff_sets          = 1;
  config.reloadable          = 0;
  config.is_halfband         = 0;
  config.quantization        = XIP_FIR_INTEGER_COEFF;
  config.coeff_width         = 16;
  config.coeff_fract_width   = 0;
  config.chan_seq            = XIP_FIR_BASIC_CHAN_SEQ;
  config.num_channels        = 1;
  config.init_pattern        = fir_compiler_0_chanpats[0];
  config.num_paths           = 2;
  config.data_width          = 16;
  config.data_fract_width    = 0;
  config.output_rounding_mode= XIP_FIR_FULL_PRECISION;
  config.output_width        = 32;
  config.output_fract_width  = 0,
  config.config_method       = XIP_FIR_CONFIG_SINGLE;
  return config;
}

const xip_fir_v7_2_config fir_compiler_0_config = gen_fir_compiler_0_config();
