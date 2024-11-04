from vllm import LLM, SamplingParams
prompts = [
    "Briefly analyse the provided code and determine if the code is vulnerable or safe, if vulnerable identify the most obvious CWE.\nstatic int cirrus_bitblt_videotovideo_copy(CirrusVGAState * s)\n{\n    if (s->ds->dpy_copy) {\n\tcirrus_do_copy(s, s->cirrus_blt_dstaddr - s->start_addr,\n\t\t       s->cirrus_blt_srcaddr - s->start_addr,\n\t\t       s->cirrus_blt_width, s->cirrus_blt_height);\n    } else {\n\n    if (BLTUNSAFE(s))\n        return 0;\n\n\t(*s->cirrus_rop) (s, s->vram_ptr +\n                (s->cirrus_blt_dstaddr & s->cirrus_addr_mask),\n\t\t\t  s->vram_ptr +\n                (s->cirrus_blt_srcaddr & s->cirrus_addr_mask),\n\t\t\t  s->cirrus_blt_dstpitch, s->cirrus_blt_srcpitch,\n\t\t\t  s->cirrus_blt_width, s->cirrus_blt_height);\n\n\tcirrus_invalidate_region(s, s->cirrus_blt_dstaddr,\n\t\t\t\t s->cirrus_blt_dstpitch, s->cirrus_blt_width,\n\t\t\t\t s->cirrus_blt_height);\n    }\n\n    return 1;\n}\nLet's work this out in a step by step way to be sure we have the right answer.\nAnalysis Result:",
]
sampling_params = SamplingParams(temperature=0.4, top_p=0.4,min_tokens=128,max_tokens=256)
llm = LLM(model="codellama/CodeLlama-7b-hf",trust_remote_code=True,gpu_memory_utilization=0.5)
outputs = llm.generate(prompts, sampling_params,use_tqdm=True)
for output in outputs:
    prompt = output.prompt
    generated_text = output.outputs[0].text
    print(f"Generated text: {generated_text!r}")