// vfncvt.xu.f.w vd, vs2, vm
VI_VFP_CVT_SCALE
({
  auto vs2 = P.VU.elt<float16_t>(rs2_num, i);
  P.VU.elt<uint8_t>(rd_num, i, true) = f16_to_ui8(vs2, STATE.frm, true);
},
{
  auto vs2 = P.VU.elt<float32_t>(rs2_num, i);
  P.VU.elt<uint16_t>(rd_num, i, true) = f32_to_ui16(vs2, STATE.frm, true);
},
{
  auto vs2 = P.VU.elt<float64_t>(rs2_num, i);
  P.VU.elt<uint32_t>(rd_num, i, true) = f64_to_ui32(vs2, STATE.frm, true);
}, false, (P.VU.vsew <= 32))
