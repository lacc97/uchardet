const std = @import("std");

const Build = std.Build;

pub fn build(b: *Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const lib = b.addStaticLibrary(.{
        .name = "uchardet",
        .target = target,
        .optimize = optimize,
    });
    lib.defineCMacro("BUILDING_UCHARDET", null);
    lib.addCSourceFiles(&uchardet_sources, &.{"-std=c++11"});
    lib.linkLibCpp();
    lib.installHeader("src/uchardet.h", "uchardet.h");
    b.installArtifact(lib);
}

const uchardet_sources = [_][]const u8{
    "src/CharDistribution.cpp",
    "src/JpCntx.cpp",
    "src/LangModels/LangArabicModel.cpp",
    "src/LangModels/LangBelarusianModel.cpp",
    "src/LangModels/LangBulgarianModel.cpp",
    "src/LangModels/LangCatalanModel.cpp",
    "src/LangModels/LangCroatianModel.cpp",
    "src/LangModels/LangCzechModel.cpp",
    "src/LangModels/LangEnglishModel.cpp",
    "src/LangModels/LangEsperantoModel.cpp",
    "src/LangModels/LangEstonianModel.cpp",
    "src/LangModels/LangFinnishModel.cpp",
    "src/LangModels/LangFrenchModel.cpp",
    "src/LangModels/LangDanishModel.cpp",
    "src/LangModels/LangGermanModel.cpp",
    "src/LangModels/LangGeorgianModel.cpp",
    "src/LangModels/LangGreekModel.cpp",
    "src/LangModels/LangHungarianModel.cpp",
    "src/LangModels/LangHebrewModel.cpp",
    "src/LangModels/LangHindiModel.cpp",
    "src/LangModels/LangIrishModel.cpp",
    "src/LangModels/LangItalianModel.cpp",
    "src/LangModels/LangLithuanianModel.cpp",
    "src/LangModels/LangLatvianModel.cpp",
    "src/LangModels/LangMacedonianModel.cpp",
    "src/LangModels/LangMalteseModel.cpp",
    "src/LangModels/LangPolishModel.cpp",
    "src/LangModels/LangPortugueseModel.cpp",
    "src/LangModels/LangRomanianModel.cpp",
    "src/LangModels/LangRussianModel.cpp",
    "src/LangModels/LangSerbianModel.cpp",
    "src/LangModels/LangSlovakModel.cpp",
    "src/LangModels/LangSloveneModel.cpp",
    "src/LangModels/LangSwedishModel.cpp",
    "src/LangModels/LangSpanishModel.cpp",
    "src/LangModels/LangThaiModel.cpp",
    "src/LangModels/LangTurkishModel.cpp",
    "src/LangModels/LangUkrainianModel.cpp",
    "src/LangModels/LangVietnameseModel.cpp",
    "src/LangModels/LangNorwegianModel.cpp",
    "src/nsHebrewProber.cpp",
    "src/nsCharSetProber.cpp",
    "src/nsBig5Prober.cpp",
    "src/nsEUCJPProber.cpp",
    "src/nsEUCKRProber.cpp",
    "src/nsEUCTWProber.cpp",
    "src/nsEscCharsetProber.cpp",
    "src/nsEscSM.cpp",
    "src/nsGB2312Prober.cpp",
    "src/nsJohabProber.cpp",
    "src/nsMBCSGroupProber.cpp",
    "src/nsMBCSSM.cpp",
    "src/nsSBCSGroupProber.cpp",
    "src/nsSBCharSetProber.cpp",
    "src/nsSJISProber.cpp",
    "src/nsUTF8Prober.cpp",
    "src/nsLanguageDetector.cpp",
    "src/nsCJKDetector.cpp",
    "src/nsLatin1Prober.cpp",
    "src/nsUniversalDetector.cpp",
    "src/uchardet.cpp",
};
