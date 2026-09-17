#pragma once

namespace C3
{
	class Hooks
	{
	public:
		static inline constexpr size_t TrampolineSize = 1 << 4;
		static void Install();

	private:
		static void CompileAndRun(RE::Script* a_script, RE::ScriptCompiler* a_compiler, RE::COMPILER_NAME a_name, RE::TESObjectREFR* a_targetRef);
		inline static REL::Relocation<decltype(CompileAndRun)> _CompileAndRun;
	};
}	 // namespace C3
