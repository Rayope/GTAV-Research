#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51[4] = { 0, 0, 0, 0 };
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<5> Local_66 = { 0, 0, 0, 0, 0 } ;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 21;
	var uLocal_70 = 6;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	struct<2> Local_81 = { 0, 0 } ;
	var uLocal_82 = -1;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 1000;
	var uLocal_90 = 1000;
	var uLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_93 = 0f;
	struct<3> Local_94 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_97 = { 0, 0, 0 } ;
	float fLocal_98 = 0f;
	struct<3> Local_99 = { 0, 0, 0 } ;
	float fLocal_100 = 0f;
	struct<3> Local_101 = { 0, 0, 0 } ;
	float fLocal_102 = 0f;
	struct<3> Local_103 = { 0, 0, 0 } ;
	float fLocal_104 = 0f;
	struct<3> Local_105 = { 0, 0, 0 } ;
	float fLocal_106 = 0f;
	struct<3> Local_107 = { 0, 0, 0 } ;
	float fLocal_108 = 0f;
	struct<3> Local_109 = { 0, 0, 0 } ;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_112 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	struct<3> Local_115 = { 0, 0, 0 } ;
	struct<3> Local_116 = { 0, 0, 0 } ;
	struct<3> Local_117 = { 0, 0, 0 } ;
	struct<3> Local_118[4];
	struct<3> Local_119[4];
	struct<3> Local_120 = { 0, 0, 0 } ;
	float fLocal_121 = 0f;
	struct<3> Local_122[3];
	int iLocal_123 = 0;
	struct<3> Local_124[6];
	bool bLocal_125 = 0;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132 = 0;
	bool bLocal_133 = 0;
	bool bLocal_134 = 0;
	bool bLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	float fLocal_145 = 0f;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	struct<3> Local_164 = { 0, 0, 0 } ;
	struct<3> Local_165 = { 0, 0, 0 } ;
	float fLocal_166 = 0f;
	char[] cLocal_167[8] = 0;
	char* sLocal_168 = NULL;
	char* sLocal_169 = NULL;
	struct<20> Local_170 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 4;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 4;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 4;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 4;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 4;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 4;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 4;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	struct<10> Local_232[16];
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	struct<2> Local_237 = { 0, 0 } ;
	struct<2> Local_238 = { 0, 0 } ;
	struct<2> Local_239 = { 0, 0 } ;
	struct<2> Local_240 = { 0, 0 } ;
	struct<2> Local_241 = { 0, 0 } ;
	struct<2> Local_242 = { 0, 0 } ;
	struct<2> Local_243 = { 0, 0 } ;
	struct<2> Local_244 = { 0, 0 } ;
	struct<2> Local_245 = { 0, 0 } ;
	struct<2> Local_246 = { 0, 0 } ;
	struct<2> Local_247 = { 0, 0 } ;
	struct<9> Local_248[4];
	struct<15> Local_249 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_250[9];
	float fLocal_251[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261[4] = { 0, 0, 0, 0 };
	int iLocal_262[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_263[2] = { 0, 0 };
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	bool bLocal_266 = 0;
	char cLocal_267[24] = "";
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	bool bLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	char* sLocal_284 = NULL;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	var uLocal_296[4] = { 0, 0, 0, 0 };
	float fLocal_297[4] = { 0f, 0f, 0f, 0f };
	struct<3> Local_298 = { 0, 0, 0 } ;
	float fLocal_299 = 0f;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	var uLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	struct<3> Local_308 = { 0, 0, 0 } ;
	int iLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 100;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 100;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	float fLocal_913 = 0f;
	float fLocal_914 = 0f;
	float fLocal_915 = 0f;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	char* sLocal_918[2] = { NULL, NULL };
	int iLocal_919[2] = { 0, 0 };
	int iLocal_920[2] = { 0, 0 };
	bool bLocal_921 = 0;
	struct<3> Local_922 = { 0, 0, 0 } ;
	struct<3> Local_923 = { 0, 0, 0 } ;
	float fLocal_924 = 0f;
	struct<3> Local_925 = { 0, 0, 0 } ;
	int iLocal_926 = 0;
	int iLocal_927 = 0;
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	bool bLocal_930 = 0;
	bool bLocal_931 = 0;
	bool bLocal_932 = 0;
	int iLocal_933 = 0;
	int iLocal_934 = 0;
	struct<6> Local_935 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_936 = 0;
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941 = 4;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	int iLocal_962 = 5;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	bool bLocal_1003 = 0;
	bool bLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	int iLocal_1007 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	float fVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_92 = { 1397.882f, 3594.626f, 33.9272f };
	fLocal_93 = 199.4271f;
	Local_94 = { -132.2826f, 6498.744f, 28.6281f };
	fLocal_95 = -102.1659f;
	Local_96 = { -124.71f, 6504.69f, 28.63f };
	Local_97 = { -88.9369f, 6418.164f, 30.4645f };
	fLocal_98 = 318.126f;
	Local_99 = { -348.9985f, 6194.592f, 30.7398f };
	fLocal_100 = 134.3799f;
	Local_101 = { 1393.052f, 3613.763f, 37.9419f };
	fLocal_102 = 88.1351f;
	Local_103 = { -131.6681f, 6500.699f, 28.628f };
	fLocal_104 = 214.1093f;
	Local_105 = { 1396.415f, 3610.146f, 37.9419f };
	fLocal_106 = 23.6499f;
	Local_107 = { -144.3017f, 6359.261f, 30.4905f };
	fLocal_108 = 29.4514f;
	Local_109 = { -113.86f, 6463.06f, 34.1f };
	Local_110 = { 0f, 0f, -45f };
	Local_111 = { -131.0836f, 6445.028f, 30.45136f };
	Local_112 = { -111.19f, 6462.28f, 32.08f };
	Local_113 = { -105.6964f, 6467.58f, 31.6343f };
	Local_114 = { -110.3759f, 6482.127f, (33.93835f - 0.23f) };
	Local_115 = { 0f, 0f, -135f };
	iLocal_146 = -1;
	iLocal_147 = -1;
	iLocal_148 = -1;
	iLocal_153 = 1;
	iLocal_162 = -1;
	Local_164 = { -66.02775f, 6432.555f, 29.62774f };
	Local_165 = { -101.9678f, 6396.955f, 52.85154f };
	fLocal_166 = 26.75f;
	cLocal_167 = "RBS1AUD";
	sLocal_168 = "RBsetup";
	iLocal_231 = -1;
	StringCopy(&cLocal_267, "", 24);
	sLocal_284 = "palsetupwalk";
	iLocal_287 = 5;
	fLocal_915 = 100f;
	Local_922 = { 1391.68f, 3582.978f, 33.74656f };
	Local_923 = { 1430.258f, 3597.642f, 40.45911f };
	fLocal_924 = 33f;
	Local_925 = { 1403.741f, 3593.747f, 33.8199f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_756(37, 0);
		func_756(38, 0);
		func_754();
		func_753();
	}
	MISC::SET_MISSION_FLAG(1);
	func_745();
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("premier"), 3);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_ThePaletoScoreSetup", 0);
		if (iLocal_259)
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar0]) && !PED::IS_PED_INJURED(iLocal_51[iVar0]))
				{
					fVar1 = (CAM::_REPLAY_FREE_CAM_GET_MAX_RANGE() + 5f);
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_51[iVar0], 0)) < (fVar1 * fVar1))
					{
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
					}
				}
				iVar0++;
			}
		}
		if (!iLocal_128)
		{
			if (iLocal_47 != 13)
			{
				func_691(iLocal_47);
			}
			iLocal_128 = 1;
		}
		switch (iLocal_47)
		{
			case 0:
				func_403();
				break;
			
			case 1:
				func_372();
				func_369();
				break;
			
			case 2:
				func_356();
				break;
			
			case 3:
				func_350();
				func_369();
				break;
			
			case 4:
				func_349();
				break;
			
			case 5:
				func_341();
				func_369();
				break;
			
			case 6:
				func_295();
				break;
			
			case 7:
				func_294();
				func_177();
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -986.0042f, 5367.315f, 50.05532f, -1003.946f, 5402.259f, 39.60506f, 24.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1511.873f, 6236.63f, -81.14642f, 1527.35f, 6704.018f, 71.62516f, 215.5f, 0, 1, 0))
				{
					if (func_176() == 0)
					{
						func_87("CBH_COPFAIL");
					}
					else
					{
						func_87("CBH_COPFAILT");
					}
				}
				break;
			
			case 8:
				func_82();
				break;
			
			case 11:
				func_76();
				break;
			
			case 9:
				func_27();
				break;
			
			case 13:
				break;
			
			case 10:
				if ((MISC::GET_GAME_TIMER() - iLocal_161) > 1000)
				{
					if (!Local_249.f_9)
					{
						Local_249.f_9 = 1;
					}
					func_25();
					HUD::CLEAR_PRINTS();
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_161) > 2000)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_161) > 500)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_51)
					{
						if (!PED::IS_PED_INJURED(iLocal_51[iVar2]) && !PED::IS_PED_FLEEING(iLocal_51[iVar2]))
						{
							if (MISC::GET_GAME_TIMER() - iLocal_161) > (500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 1500))
							{
								TASK::CLEAR_PED_TASKS(iLocal_51[iVar2]);
								TASK::TASK_SMART_FLEE_PED(iLocal_51[iVar2], PLAYER::PLAYER_PED_ID(), 200f, 200000, 0, 0);
							}
						}
						iVar2++;
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_161) > 3500)
				{
					func_87("CBH_BNKFAIL");
				}
				break;
		}
		if (func_24())
		{
			if (func_176() == 0)
			{
				func_87("CBH_BNKFAIL");
			}
			else
			{
				func_87("CBH_BNKFAILT");
			}
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_FOCUS_ON_BANK"))
			{
				AUDIO::START_AUDIO_SCENE("PS_1_FOCUS_ON_BANK");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_FOCUS_ON_BANK"))
		{
			AUDIO::STOP_AUDIO_SCENE("PS_1_FOCUS_ON_BANK");
		}
		func_22();
		func_21();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
		{
			if ((PED::IS_PED_INJURED(iLocal_50) || ENTITY::IS_ENTITY_DEAD(iLocal_50)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_50))
			{
				func_87("CBH_LESTDED");
			}
		}
		if (iLocal_47 < 7 || iLocal_47 == 8)
		{
			func_20();
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_185[2]))
			{
				if ((PED::IS_PED_INJURED(uLocal_185[2]) || ENTITY::IS_ENTITY_DEAD(uLocal_185[2])) || FIRE::IS_ENTITY_ON_FIRE(uLocal_185[2]))
				{
					func_87("CMN_TDIED");
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_1006) > 3000)
		{
			bVar3 = false;
			if (func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &bVar3))
			{
				if (bVar3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_185[2]) || ENTITY::DOES_ENTITY_EXIST(iLocal_50))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_185[2]))
						{
							iVar4 = uLocal_185[2];
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
						{
							iVar4 = iLocal_50;
						}
						if (!PED::IS_PED_INJURED(iVar4))
						{
							if (func_18(iVar4, PLAYER::PLAYER_PED_ID()) || ((!PED::IS_PED_IN_ANY_VEHICLE(iVar4, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar4, 1)) < 400f))
							{
								if (iLocal_1007 == 0)
								{
									StringCopy(&Var5, "RBS1_", 24);
									if (iVar4 == iLocal_50)
									{
										StringConCat(&Var5, "LCITY1", 24);
									}
									else
									{
										StringConCat(&Var5, "TCITY1", 24);
									}
									if (func_6(&Local_232, cLocal_167, &Var5, 8, 0, 0, 0))
									{
										iLocal_1007++;
									}
								}
								else if (iLocal_1007 == 1)
								{
									StringCopy(&Var5, "RBS1_", 24);
									if (iVar4 == iLocal_50)
									{
										StringConCat(&Var5, "LCITY2", 24);
									}
									else
									{
										StringConCat(&Var5, "TCITY2", 24);
									}
									if (func_6(&Local_232, cLocal_167, &Var5, 8, 0, 0, 0))
									{
										iLocal_1007++;
									}
								}
								else if (iLocal_1007 == 2)
								{
									func_87("CBH_CFAIL");
								}
							}
						}
					}
				}
			}
			iLocal_1006 = MISC::GET_GAME_TIMER();
		}
		func_5();
		if (!bLocal_132)
		{
			if (func_3())
			{
				iVar6 = 0;
				while (iVar6 < iLocal_51)
				{
					if (!PED::IS_PED_INJURED(iLocal_51[iVar6]))
					{
						TASK::TASK_REACT_AND_FLEE_PED(iLocal_51[iVar6], PLAYER::PLAYER_PED_ID());
					}
					iVar6++;
				}
				bLocal_132 = true;
				Local_249.f_9 = 1;
				func_1();
				iLocal_161 = MISC::GET_GAME_TIMER();
				iLocal_47 = 10;
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && !bLocal_132)
		{
			if (iLocal_47 > 0 && iLocal_47 < 6)
			{
				func_82();
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
		{
			if (iLocal_47 == 1)
			{
				if (!bLocal_135 && iLocal_149 > 1)
				{
					if (!PED::IS_PED_INJURED(uLocal_185[2]))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_62, 0) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[2], -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_185[2], iLocal_62, -1, 0, 2f, 1, 0);
						}
					}
				}
			}
			else if ((iLocal_47 == 3 || iLocal_47 == 5) || iLocal_47 == 6)
			{
				if (!PED::IS_PED_INJURED(uLocal_185[2]))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_62, 0) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[2], -1794415470) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(uLocal_185[2], iLocal_62, -1, 2, 2f, 1, 0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_50))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_62, 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_50, -1794415470) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_50, iLocal_62, -1, 0, 2f, 1, 0);
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_62, 0))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_50, 0);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_185[2]))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_62, 0))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uLocal_185[2], 0);
				}
			}
		}
		if (bLocal_129)
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("SKIP IS ACTIVE", 0.9f, 0.02f, 0f, 0, 0, 255, 255);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x978
{
	func_2(&uLocal_55);
	func_2(&uLocal_56);
	func_2(&uLocal_54);
	func_2(&uLocal_53);
	func_2(&uLocal_53);
	func_2(&uLocal_57);
	func_2(&uLocal_58);
}

void func_2(var uParam0)//Position - 0x9AA
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
	}
}

int func_3()//Position - 0x9C2
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	int iVar4;
	
	iVar0 = 0;
	if (iLocal_47 == 1)
	{
		if (Local_249.f_9)
		{
			iVar0 = 1;
		}
	}
	if (func_24())
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			iVar0 = 1;
		}
		if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()) && PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -109.2893f, 6468.679f, 30.54522f, -114.6985f, 6474.16f, 33.92928f, 1.5f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	if (iLocal_47 < 6)
	{
		iVar1 = 0;
		while (iVar1 < iLocal_51)
		{
			if (!PED::IS_PED_INJURED(iLocal_51[iVar1]))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_51[iVar1], 1) };
				if (MISC::IS_BULLET_IN_AREA(Var2, 2f, 1))
				{
					iVar0 = 1;
				}
				if (((((((FIRE::IS_EXPLOSION_IN_SPHERE(10, Var2, 20f) || FIRE::IS_EXPLOSION_IN_SPHERE(7, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(3, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(21, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(25, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(4, Var2, 20f))
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_INJURED(iLocal_51[iVar1]))
				{
					iVar0 = 1;
				}
				else if (PED::IS_PED_RAGDOLL(iLocal_51[iVar1]) || PED::IS_PED_FLEEING(iLocal_51[iVar1]))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
	}
	if (!func_4())
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar3, 1);
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
	else
	{
		iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar4, -107.3918f, 6466.308f, 30.63434f, -112.6943f, 6461.029f, 33.96836f, 4.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && Local_249.f_9) && iLocal_47 < 7)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_4()//Position - 0xC01
{
	return ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -120.7033f, 6486.524f, 35.46841f, -141.6632f, 6466.175f, 30.68864f, 9.25f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -98.36755f, 6455.173f, 42.13557f, -122.3198f, 6479.52f, 30.4585f, 45.75f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -112.9958f, 6484.136f, 35.46868f, -124.8357f, 6485.98f, 30.29035f, 8f, 0, 1, 0));
}

void func_5()//Position - 0xCA0
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1398.831f, 3609.659f, 37.9892f, 1387.375f, 3605.516f, 41.0859f, 15.75f, 0, 1, 0))
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_75))
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				uLocal_75 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("cs_rbhs_int_delap_dust", 1392.172f, 3604.299f, 39.19458f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_75))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_75, 0);
		STREAMING::REMOVE_PTFX_ASSET();
	}
}

bool func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD29
{
	func_17(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3D53 = 0;
	Global_3D55 = 0;
	Global_3D5A = 0;
	Global_412B = 0;
	Global_412D = 0;
	Global_4131 = 0;
	Global_280001 = 0;
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)//Position - 0xD77
{
	Global_3D4D = 0;
	if (Global_3D4C == 0 || Global_3D4E == 2)
	{
		if (Global_3D4C != 0)
		{
			if (iParam1 > Global_3D4E)
			{
				if (Global_3D53 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_3839.f_1 = 3;
					Global_3D4C = 0;
					Global_3D4D = 1;
					Global_3D81 = 0;
					Global_3D48 = 0;
					Global_3D49 = 0;
					Global_3D57 = 0;
					Global_3D56 = 0;
					Global_3838 = 0;
				}
				else
				{
					func_16();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_15(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_14();
		Global_3A85 = { Global_3B2A };
		Global_3D52 = Global_3D53;
		Global_3D59 = Global_3D5A;
		Global_280002 = Global_280001;
		Global_3D5B = { Global_3D6B };
		Global_3D54 = Global_3D55;
		Global_412A = Global_412B;
		Global_4132 = { Global_4138 };
		Global_412C = Global_412D;
		Global_412E = Global_412F;
		Global_4130 = Global_4131;
		Global_3BCF.f_172 = Global_4129;
		Global_3BCF.f_170 = Global_4127;
		Global_3BCF.f_171 = Global_4128;
		Global_3D48 = Global_3D49;
		if (Global_3D52)
		{
			MISC::CLEAR_BIT(&Global_8D7, 20);
			MISC::CLEAR_BIT(&Global_8D8, 17);
			MISC::CLEAR_BIT(&Global_8D9, 0);
			if (bParam2)
			{
				func_12();
				if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_3839.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_3817 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_11())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_10A95)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_10())
			{
				return 0;
			}
			else
			{
				switch (Global_3839.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_8D7, 9))
				{
					return 0;
				}
			}
			func_9();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_8();
		return 1;
	}
	if (Global_3D4C == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3D4E || iParam1 == Global_3D4E)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_16();
	}
	return 0;
}

void func_8()//Position - 0x1043
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_38E0[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_3D4C = 1;
}

void func_9()//Position - 0x1074
{
	Global_3D81 = Global_3D80;
	Global_3D7B = Global_3D7C;
	Global_3DAA = { Global_3D9E };
	Global_3DB0 = { Global_3DA4 };
	Global_3D83 = Global_3D82;
	Global_3DC8 = { Global_3DB6 };
	Global_3DCE = { Global_3DBC };
	Global_3DD4 = { Global_3DC2 };
	Global_3DDA = { Global_3DE0 };
	Global_62A = Global_62B;
	Global_62C = Global_62D;
	Global_3D57 = Global_3D58;
	Global_3D59 = Global_3D5A;
	Global_3D5B = { Global_3D6B };
	Global_3D50 = Global_3D51;
	Global_4144 = 0;
	Global_3D7D = 0;
	Global_3D7E = 0;
	MISC::CLEAR_BIT(&Global_8D8, 16);
}

int func_10()//Position - 0x1109
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_11()//Position - 0x1130
{
	int iVar0;
	int iVar1;
	
	if (Global_10A95)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_12()//Position - 0x11C9
{
	if (func_13(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[0 /*29*/])
			{
				Global_3839 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[1 /*29*/])
			{
				Global_3839 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[2 /*29*/])
			{
				Global_3839 = 2;
			}
			else
			{
				Global_3839 = 0;
			}
		}
	}
	else
	{
		Global_3839 = func_176();
		if (Global_3839 == 145)
		{
			Global_3839 = 3;
		}
		if (Global_10A95)
		{
			Global_3839 = 3;
		}
		if (Global_3839 > 3)
		{
			Global_3839 = 3;
		}
	}
}

bool func_13(int iParam0)//Position - 0x126A
{
	return Global_8861 == iParam0;
}

void func_14()//Position - 0x1278
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3A85[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3A85[iVar0 /*10*/].f_1), "", 24);
		Global_3A85[iVar0 /*10*/].f_7 = 0;
		Global_3A85[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3A85.f_A1 = -99;
	Global_3A85.f_A2 = { 0f, 0f, 0f };
}

bool func_15(int iParam0, int iParam1)//Position - 0x12CF
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1441E9.f_CB[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1441E9.f_3B5, iParam0);
}

void func_16()//Position - 0x130A
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_3839.f_1 == 9) || Global_3838 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
		Global_3839.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_3D4C = 6;
		return;
	}
}

void func_17(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1361
{
	Global_3B2A = { *uParam0 };
	Global_62B = iParam1;
	StringCopy(&Global_3D92, sParam2, 24);
	Global_4129 = iParam5;
	if (iParam3 == 0)
	{
		Global_4127 = 1;
		Global_4125 = 0;
	}
	else
	{
		Global_4127 = 0;
		Global_4125 = 1;
	}
	if (iParam4 == 0)
	{
		Global_4128 = 1;
		Global_4126 = 0;
	}
	else
	{
		Global_4128 = 0;
		Global_4126 = 1;
	}
}

int func_18(int iParam0, int iParam1)//Position - 0x13B7
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_IN_VEHICLE(iParam1, iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_19(struct<2> Param0, Vector3 vParam1, int iParam2)//Position - 0x1401
{
	if (!(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
	{
		return 0;
	}
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					*iParam2 = 1;
					return 1;
				}
			}
		}
	}
	if (Param0 < 1536.35f)
	{
		if (Param0.f_1 > 1016.18f)
		{
			if (Param0.f_1 < 1213.53f)
			{
				if (Param0 > 1278.08f)
				{
					*iParam2 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_20()//Position - 0x1490
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_62, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_62, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_62, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_62, 1, 40000))
			{
				func_87("CBH_VEHSTUCK");
			}
		}
		else
		{
			func_87("CMN_GENDEST");
		}
	}
}

void func_21()//Position - 0x14FA
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_256) || !ENTITY::DOES_ENTITY_EXIST(iLocal_255))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_113) < SYSTEM::POW(100f, 2f))
		{
			STREAMING::REQUEST_MODEL(joaat("v_ilev_cbankvauldoor01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_cbankvauldoor01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_256))
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-104.6f, 6473.44f, 31.8f, 2f, joaat("v_ilev_cbankvauldoor01"), 0))
					{
						iLocal_256 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-104.6f, 6473.44f, 31.8f, 2f, joaat("v_ilev_cbankvauldoor01"), 1, 0, 1);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_256, 0);
					}
				}
				else
				{
					iLocal_255 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_cbankvauldoor01"), -104.6f, 6473.44f, 31.8f, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_255, 0f, 0f, 45.72f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_255, 1);
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_113) > SYSTEM::POW(150f, 2f))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_256))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_256))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_256, 1);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_256);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_255))
		{
			OBJECT::DELETE_OBJECT(&iLocal_255);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_cbankvauldoor01"));
	}
}

void func_22()//Position - 0x1637
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_60) || !ENTITY::DOES_ENTITY_EXIST(Local_249))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_114) < SYSTEM::POW(100f, 2f))
		{
			STREAMING::REQUEST_MODEL(Local_249.f_7);
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_MODEL_LOADED(Local_249.f_7))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_60))
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_114, 1f, joaat("prop_ld_alarm_01"), 0))
					{
						iLocal_60 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_114, 1f, joaat("prop_ld_alarm_01"), 1, 0, 1);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_60, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_60, 0, 0);
					}
				}
				else
				{
					Local_249 = OBJECT::CREATE_OBJECT(Local_249.f_7, Local_114, 1, 1, 0);
					ENTITY::SET_ENTITY_HEALTH(Local_249, 50);
					Local_249.f_E = 50;
					ENTITY::SET_ENTITY_ROTATION(Local_249, Local_115, 2, 1);
				}
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_249))
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_249) != Local_249.f_7)
			{
				STREAMING::REQUEST_MODEL(Local_249.f_7);
				if (STREAMING::HAS_MODEL_LOADED(Local_249.f_7))
				{
					OBJECT::DELETE_OBJECT(&Local_249);
				}
			}
			if (!Local_249.f_9)
			{
				if (func_23())
				{
					Local_249.f_7 = joaat("prop_ld_alarm_01_dam");
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Shoot_box", Local_249, "Paleto_Score_Setup_Sounds", 0, 0);
					Local_249.f_9 = 1;
				}
			}
			else if (!iLocal_139 && Local_249.f_D > 0)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_alarm_damage_sparks", Local_114, Local_115, 1065353216, 0, 0, 0);
					iLocal_139 = 1;
				}
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_249.f_1) < SYSTEM::POW(150f, 2f))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_249))
				{
					if (ENTITY::GET_ENTITY_MODEL(Local_249) != Local_249.f_7)
					{
						STREAMING::REQUEST_MODEL(Local_249.f_7);
						AUDIO::PREPARE_ALARM("PALETO_BAY_SCORE_ALARM");
						if (STREAMING::HAS_MODEL_LOADED(Local_249.f_7))
						{
							OBJECT::DELETE_OBJECT(&Local_249);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_249))
				{
					STREAMING::REQUEST_MODEL(Local_249.f_7);
					if (STREAMING::HAS_MODEL_LOADED(Local_249.f_7))
					{
						Local_249 = OBJECT::CREATE_OBJECT(Local_249.f_7, Local_249.f_1, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(Local_249, Local_249.f_4, 2, 1);
					}
				}
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_114) > SYSTEM::POW(150f, 2f))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_60))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_60, 1);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_60);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_249))
			{
				OBJECT::DELETE_OBJECT(&Local_249);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_alarm_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_alarm_01_dam"));
			STREAMING::REMOVE_PTFX_ASSET();
		}
	}
	if (Local_249.f_9)
	{
		if (!AUDIO::IS_ALARM_PLAYING("PALETO_BAY_SCORE_ALARM"))
		{
			if (AUDIO::PREPARE_ALARM("PALETO_BAY_SCORE_ALARM"))
			{
				AUDIO::START_ALARM("PALETO_BAY_SCORE_ALARM", 0);
			}
		}
	}
	if (!Local_249.f_9)
	{
		if (AUDIO::IS_ALARM_PLAYING("PALETO_BAY_SCORE_ALARM"))
		{
			AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", 0);
		}
	}
}

bool func_23()//Position - 0x18F6
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_249))
	{
		if (ENTITY::GET_ENTITY_HEALTH(Local_249) < Local_249.f_E)
		{
			if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_249, PLAYER::PLAYER_PED_ID(), 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(3, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(25, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, 1.5f), 3f))
			{
				Local_249.f_D = (Local_249.f_D + (Local_249.f_E - ENTITY::GET_ENTITY_HEALTH(Local_249)));
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_249);
				Local_249.f_E = ENTITY::GET_ENTITY_HEALTH(Local_249);
			}
		}
		Local_249.f_E = ENTITY::GET_ENTITY_HEALTH(Local_249);
	}
	return Local_249.f_D > 0;
}

bool func_24()//Position - 0x1A55
{
	return ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -116.8022f, 6472.056f, 33.47937f, -111.1819f, 6466.363f, 30.63431f, 7.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -102.2175f, 6471.64f, 34.32764f, -110.6665f, 6463.194f, 30.63855f, 5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -99.39606f, 6461.184f, 33.66985f, -104.3902f, 6466.2f, 30.63431f, 2f, 0, 1, 0));
}

void func_25()//Position - 0x1AEB
{
	Global_38DE = 0;
	func_26();
}

void func_26()//Position - 0x1AFB
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_27()//Position - 0x1B1C
{
	if (func_75(0) < 500 && !func_74())
	{
		func_48(0, 1, 500, 0, 0);
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && !PED::IS_PED_INJURED(iLocal_50)) && !PED::IS_PED_INJURED(uLocal_185[2]))
	{
		switch (iLocal_291)
		{
			case 0:
				iLocal_292 = 0;
				iLocal_293 = 0;
				iLocal_294 = 0;
				iLocal_295 = 0;
				if (HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					HUD::REMOVE_BLIP(&uLocal_57);
				}
				HUD::CLEAR_PRINTS();
				func_46();
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_45("CMN_GENGETIN", 7500, 1);
				}
				iLocal_291++;
				break;
			
			case 1:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
				{
					if (!iLocal_295)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 10f && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (func_6(&Local_232, cLocal_167, "RBS1_NOGUN", 8, 0, 0, 0))
							{
								iLocal_295 = 1;
							}
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_53))
					{
						uLocal_53 = func_44(-316.8679f, 6071.798f, 30.1981f, 1);
						if (!iLocal_295 || (iLocal_295 && !func_43()))
						{
							HUD::CLEAR_PRINTS();
						}
					}
					if ((!iLocal_292 && iLocal_295) && !func_43())
					{
						func_45("CBH_GOTOSHOP", 7500, 1);
						iLocal_292 = 1;
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_54))
					{
						HUD::REMOVE_BLIP(&uLocal_54);
					}
				}
				else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_62, 1), -326.3011f, 6077.182f, 30.4548f) > 20f)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_54))
					{
						uLocal_54 = func_40(iLocal_62, 0, 0);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_53))
					{
						HUD::REMOVE_BLIP(&uLocal_53);
					}
				}
				else if (!func_39(HUD::GET_BLIP_COORDS(uLocal_53), -326.3011f, 6077.182f, 30.4548f, 15f))
				{
					if (!iLocal_293)
					{
						func_45("CBH_BUYGUN", 7500, 1);
						iLocal_293 = 1;
					}
					HUD::SET_BLIP_COORDS(uLocal_53, -326.3011f, 6077.182f, 30.4548f);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -316.8679f, 6071.798f, 30.1981f, Global_12, 1, 1, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_53))
					{
						HUD::REMOVE_BLIP(&uLocal_53);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_54))
					{
						HUD::REMOVE_BLIP(&uLocal_54);
					}
					iLocal_291++;
				}
				if (((func_32(32) && HUD::DOES_BLIP_EXIST(uLocal_53)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && func_31(HUD::GET_BLIP_COORDS(uLocal_53), -326.3011f, 6077.182f, 30.4548f))
				{
					iLocal_291 = 5;
				}
				break;
			
			case 2:
				if (func_30(iLocal_62, 1093140480, 1, 1056964608, 0, 1))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0);
					iLocal_291++;
				}
				break;
			
			case 3:
				if (!HUD::DOES_BLIP_EXIST(uLocal_53))
				{
					if (!iLocal_293)
					{
						func_45("CBH_BUYGUN", 7500, 1);
						iLocal_293 = 1;
					}
					uLocal_53 = func_44(-326.3011f, 6077.182f, 30.4548f, 0);
				}
				if (func_32(32))
				{
					iLocal_291++;
				}
				break;
			
			case 4:
				if (func_32(32))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_53))
					{
						HUD::REMOVE_BLIP(&uLocal_53);
					}
					if (!func_29())
					{
						if (func_74())
						{
							uLocal_54 = func_40(iLocal_62, 0, 0);
							func_45("CMN_GENGETBCK", 7500, 1);
							iLocal_295 = 0;
							iLocal_291++;
						}
						else if (!iLocal_295)
						{
							func_45("CBH_GUNREM", 7500, 1);
							iLocal_295 = 1;
						}
					}
					else if (iLocal_295)
					{
						iLocal_295 = 0;
					}
				}
				else
				{
					iLocal_291 = (iLocal_291 - 1);
				}
				break;
			
			case 5:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
				{
					if (!iLocal_295)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 10f && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (func_6(&Local_232, cLocal_167, "RBS1_GUNBACK", 8, 0, 0, 0))
							{
								iLocal_295 = 1;
							}
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_53))
					{
						uLocal_53 = func_44(Local_94, 1);
					}
					if ((!iLocal_294 && iLocal_295) && !func_43())
					{
						func_45("CBH_GOBKBNK", 7500, 1);
						iLocal_294 = 1;
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_54))
					{
						HUD::REMOVE_BLIP(&uLocal_54);
					}
				}
				else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_62, 1), Local_94) > 30f)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_54))
					{
						uLocal_54 = func_40(iLocal_62, 0, 0);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_53))
					{
						HUD::REMOVE_BLIP(&uLocal_53);
					}
				}
				else
				{
					func_28(5);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_94, Global_12, 1, 1, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62))
				{
					iLocal_291++;
				}
				break;
			
			case 6:
				if (func_30(iLocal_62, 1093140480, 1, 1056964608, 0, 1))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0);
					iLocal_291 = 0;
					func_28(5);
				}
				break;
			}
	}
	if (Local_249.f_9)
	{
		func_28(5);
	}
	if (iLocal_291 < 5)
	{
		if (func_74())
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_53))
			{
				HUD::REMOVE_BLIP(&uLocal_53);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_54))
			{
				HUD::REMOVE_BLIP(&uLocal_54);
			}
			iLocal_291 = 5;
		}
	}
	else if (!func_74())
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_53))
		{
			HUD::REMOVE_BLIP(&uLocal_53);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_54))
		{
			HUD::REMOVE_BLIP(&uLocal_54);
		}
		iLocal_291 = 0;
	}
}

void func_28(int iParam0)//Position - 0x2093
{
	if (iParam0 != 13 && iParam0 != 0)
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(0);
			CUTSCENE::REMOVE_CUTSCENE();
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		iLocal_130 = 0;
		if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	iLocal_149 = 0;
	iLocal_47 = iParam0;
	iLocal_128 = 0;
}

bool func_29()//Position - 0x2113
{
	return Global_15F9E.f_123 > 0;
}

int func_30(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x2124
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	if ((MISC::GET_GAME_TIMER() - Global_1C) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1C = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_31(struct<3> Param0, struct<3> Param1)//Position - 0x22A6
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_32(int iParam0)//Position - 0x22CF
{
	return func_33(iParam0, 5, 1);
}

int func_33(int iParam0, int iParam1, bool bParam2)//Position - 0x22DF
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_38() == 0)
		{
			return MISC::IS_BIT_SET(func_34(func_37(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_34(int iParam0, int iParam1, int iParam2)//Position - 0x233F
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_35(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_35(var uParam0)//Position - 0x2371
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_25732E = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_25732E = 1;
		}
	}
	return iVar0;
}

int func_36()//Position - 0x23A5
{
	return Global_1407E1;
}

int func_37(int iParam0)//Position - 0x23B1
{
	switch (iParam0)
	{
		case 0:
			return 815;
			break;
		
		case 1:
			return 816;
			break;
		
		case 2:
			return 817;
			break;
		
		case 3:
			return 818;
			break;
		
		case 4:
			return 819;
			break;
		
		case 5:
			return 820;
			break;
		
		case 6:
			return 821;
			break;
		
		case 7:
			return 822;
			break;
		
		case 8:
			return 823;
			break;
		
		case 9:
			return 824;
			break;
		
		case 10:
			return 825;
			break;
		
		case 11:
			return 826;
			break;
		
		case 12:
			return 827;
			break;
		
		case 13:
			return 828;
			break;
		
		case 14:
			return 829;
			break;
		
		case 15:
			return 831;
			break;
		
		case 16:
			return 832;
			break;
		
		case 17:
			return 833;
			break;
		
		case 18:
			return 834;
			break;
		
		case 19:
			return 835;
			break;
		
		case 20:
			return 836;
			break;
		
		case 21:
			return 837;
			break;
		
		case 22:
			return 838;
			break;
		
		case 23:
			return 839;
			break;
		
		case 24:
			return 840;
			break;
		
		case 25:
			return 841;
			break;
		
		case 26:
			return 842;
			break;
		
		case 27:
			return 843;
			break;
		
		case 28:
			return 844;
			break;
		
		case 29:
			return 845;
			break;
		
		case 30:
			return 846;
			break;
		
		case 31:
			return 847;
			break;
		
		case 32:
			return 848;
			break;
		
		case 33:
			return 849;
			break;
		
		case 34:
			return 850;
			break;
		
		case 35:
			return 851;
			break;
		
		case 36:
			return 852;
			break;
		
		case 37:
			return 853;
			break;
		
		case 38:
			return 854;
			break;
		
		case 39:
			return 855;
			break;
		
		case 40:
			return 859;
			break;
		
		case 41:
			return 860;
			break;
		
		case 42:
			return 861;
			break;
		
		case 43:
			return 862;
			break;
		
		default:
			break;
	}
	return 2903;
}

int func_38()//Position - 0x265A
{
	return Global_5F7C;
}

int func_39(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x2665
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (MISC::ABSF((Param0.x - Param1.x)) <= fParam2)
	{
		if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			if (MISC::ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_40(int iParam0, bool bParam1, bool bParam2)//Position - 0x26B1
{
	return func_41(iParam0, !bParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, bool bParam2)//Position - 0x26C4
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_42(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_42(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_42(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_42(bool bParam0, float fParam1, float fParam2)//Position - 0x2768
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_43()//Position - 0x277F
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

var func_44(struct<3> Param0, int iParam1)//Position - 0x27A1
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_42(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

void func_45(char* sParam0, int iParam1, int iParam2)//Position - 0x27CD
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 0);
}

void func_46()//Position - 0x27E6
{
	Global_38DE = 0;
	func_47();
}

void func_47()//Position - 0x27F6
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_413F = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_3D4C = 6;
		return;
	}
}

void func_48(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x281A
{
	int iVar0;
	int iVar1;
	
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 3)
	{
		return;
	}
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 4)
	{
		return;
	}
	func_49(Global_17C49.f_744E[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2901
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_73();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_72(99, 1);
					func_71(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_71(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_71(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_57(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_56(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_71(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_71(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_56(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_71(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_71(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_71(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_71(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_71(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_71(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_71(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_71(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_71(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_71(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_56(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_71(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_71(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_71(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_71(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_55(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_72(95, iParam3);
					break;
				
				case 1:
					func_72(97, iParam3);
					break;
				
				case 2:
					func_72(96, iParam3);
					break;
			}
			func_72(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_52(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_52(iVar1);
	}
	iVar5 = (Global_CAD5[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_CAD5[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_CAD5[iVar2] = 2147483647;
				}
				else
				{
					Global_CAD5[iVar2] = (Global_CAD5[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_71(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_71(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_71(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_CAD5[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_CAD5[iVar2];
			Global_CAD5[iVar2] = (Global_CAD5[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_2[Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_2[Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_2[Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/]++;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1++;
		if (Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_51(iParam0);
	if (Global_8861 == 15)
	{
		func_50(0);
	}
	return 1;
}

void func_50(bool bParam0)//Position - 0x2F00
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_CADD[iVar0 /*3*/][0] = Global_17C49.f_5CED[iVar0];
		Global_CADD.f_1F[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_B[iVar0];
		Global_CADD.f_3E[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_16[iVar0];
		Global_CADD.f_5D[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_21[iVar0];
		Global_CADD.f_7C[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_2C[iVar0];
		Global_CADD.f_9B[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_37[iVar0];
		Global_CADD.f_BA[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_42[iVar0];
		Global_CADD.f_D9[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_4D[iVar0];
		Global_CADD.f_F8[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_58[iVar0];
		if (!bParam0)
		{
			Global_CADD[iVar0 /*3*/][1] = Global_17C49.f_5CED[iVar0];
			Global_CADD.f_1F[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_B[iVar0];
			Global_CADD.f_3E[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_16[iVar0];
			Global_CADD.f_5D[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_21[iVar0];
			Global_CADD.f_7C[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_2C[iVar0];
			Global_CADD.f_9B[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_37[iVar0];
			Global_CADD.f_BA[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_42[iVar0];
			Global_CADD.f_D9[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_4D[iVar0];
			Global_CADD.f_F8[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_51(int iParam0)//Position - 0x3182
{
	int iVar0;
	
	iVar0 = Global_CAD5[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_52(int iParam0)//Position - 0x31DC
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0) || MISC::IS_BIT_SET(Global_200000[func_54() /*8053*/].f_167C.f_A, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		MISC::CLEAR_BIT(&(Global_200000[func_54() /*8053*/].f_167C.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_53(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_53(int iParam0)//Position - 0x329E
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_54()//Position - 0x3318
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_55(int iParam0)//Position - 0x3325
{
	func_72(93, iParam0);
	func_72(29, iParam0);
	func_72(30, iParam0);
}

bool func_56(int iParam0)//Position - 0x3345
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0);
	}
	return MISC::IS_BIT_SET(Global_200000[func_54() /*8053*/].f_167C.f_A, iParam0);
}

int func_57(bool bParam0)//Position - 0x3381
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_70(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_58(27, 1);
	return 1;
}

int func_58(int iParam0, int iParam1)//Position - 0x3438
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_59(iParam0, iParam1);
}

int func_59(int iParam0, int iParam1)//Position - 0x3453
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_6072 != 0 && !Global_10A95)
	{
		return 0;
	}
	if (func_69(&Global_26D4DB))
	{
		if (func_67(&Global_26D4DB, iParam0))
		{
			return 0;
		}
		if (func_60(&Global_26D4DB, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_60(var uParam0, int iParam1)//Position - 0x34D7
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_67(uParam0, iParam1))
	{
		return 0;
	}
	func_63(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_61(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_61(var uParam0, int iParam1)//Position - 0x355D
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_67(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_62(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_62(var uParam0, int iParam1)//Position - 0x35AD
{
	return (*uParam0)[iParam1] == 61;
}

void func_63(var uParam0)//Position - 0x35BE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_66(uParam0, iVar0);
		iVar0++;
	}
	func_64(&(uParam0->f_3E), (8f - 0.5f));
}

void func_64(var uParam0, float fParam1)//Position - 0x35F5
{
	uParam0->f_1 = (func_65(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_65(bool bParam0)//Position - 0x3623
{
	int iVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(iVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_66(var uParam0, int iParam1)//Position - 0x366B
{
	(*uParam0)[iParam1] = 61;
}

bool func_67(var uParam0, int iParam1)//Position - 0x367B
{
	return func_68(uParam0, iParam1) != -1;
}

int func_68(var uParam0, int iParam1)//Position - 0x368D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_69(var uParam0)//Position - 0x36BA
{
	return uParam0->f_44 == 1;
}

int func_70(int iParam0, int iParam1)//Position - 0x36C8
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_71(int iParam0, int iParam1)//Position - 0x3719
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_72(int iParam0, int iParam1)//Position - 0x373C
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_C53D[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_C53D[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_C53D[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_C53D[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_73()//Position - 0x3799
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_CAD5[0] == iVar0)
		{
			Global_CAD5[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_CAD5[1] == iVar0)
		{
			Global_CAD5[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_CAD5[2] == iVar0)
		{
			Global_CAD5[2] = iVar0;
		}
	}
}

int func_74()//Position - 0x380E
{
	if ((((((((((((((((((((((((((((((((((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol")) == 0) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_microsmg"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_microsmg")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_mg"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_mg")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatmg"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatmg")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sawnoffshotgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sawnoffshotgun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultshotgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultshotgun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_remotesniper"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_remotesniper")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_minigun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_minigun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol50"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol50")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultsmg"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultsmg")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_bullpupshotgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_bullpupshotgun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_specialcarbine"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_specialcarbine")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_bullpuprifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_bullpuprifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavypistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavypistol")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_snspistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_snspistol")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_vintagepistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_vintagepistol")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_gusenberg"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_gusenberg")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_musket"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_musket")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavyshotgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavyshotgun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_marksmanrifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_marksmanrifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpdw"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpdw")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_marksmanpistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_marksmanpistol")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_railgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_railgun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_compactrifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_compactrifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_dbshotgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_dbshotgun")) == 0))
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0)//Position - 0x3D8B
{
	return Global_CAD5[iParam0];
}

void func_76()//Position - 0x3D9A
{
	switch (iLocal_49)
	{
		case 4:
			switch (iLocal_309)
			{
				case 0:
					func_25();
					if (!PED::IS_PED_INJURED(iLocal_229) && !PED::IS_PED_FLEEING(iLocal_229))
					{
						if (!PED::IS_PED_INJURED(iLocal_229))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_229, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						}
					}
					if (func_80("RBS1_BKRFAIL", iLocal_229))
					{
						iLocal_309++;
					}
					break;
				
				case 1:
					if (!func_43() && SYSTEM::TIMERA() > 2000)
					{
						func_87("CBH_SECALT");
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_309)
			{
				case 0:
					func_25();
					func_77();
					iLocal_309++;
					break;
				
				case 1:
					if (!func_43() && SYSTEM::TIMERA() > 2000)
					{
						if (bLocal_127)
						{
							func_87("CBH_SPOTLT");
						}
						else
						{
							func_87("CBH_SPOTLT");
						}
					}
					break;
			}
			break;
		
		case 2:
		case 1:
			switch (iLocal_309)
			{
				case 0:
					func_25();
					func_77();
					iLocal_309++;
					break;
				
				case 1:
					if (func_80("RBS1_BNKFAIL", iLocal_51[0]))
					{
						iLocal_309++;
					}
					break;
				
				case 2:
					if (!func_43() && SYSTEM::TIMERA() > 2000)
					{
						if (bLocal_127)
						{
							func_87("CBH_COPFAIL");
						}
						else
						{
							func_87("CBH_BNKFAIL");
						}
					}
					break;
			}
			break;
		
		case 5:
			switch (iLocal_309)
			{
				case 0:
					func_25();
					func_77();
					iLocal_309++;
					break;
				
				case 1:
					if (func_80("RBS1_WLFAIL", 0))
					{
						iLocal_309++;
					}
					break;
				
				case 2:
					if (!func_43() && SYSTEM::TIMERA() > 2000)
					{
						func_87("CBH_COPFAIL");
					}
					break;
			}
			break;
		
		case 6:
			break;
	}
}

void func_77()//Position - 0x3F93
{
	int iVar0;
	
	uLocal_310 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(99, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1082130432);
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (!PED::IS_PED_INJURED(iLocal_51[iVar0]))
		{
			TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_51[iVar0], 17, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_51[iVar0], -2065892691);
			if (!bLocal_127)
			{
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_51[iVar0], PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::TASK_SHOCKING_EVENT_REACT(iLocal_51[iVar0], uLocal_310);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_248)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar0 /*9*/].f_3, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[iVar0 /*9*/].f_3))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_248[iVar0 /*9*/].f_3);
			}
		}
		if (!PED::IS_PED_INJURED(Local_248[iVar0 /*9*/][0]))
		{
			Local_308 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + func_78(ENTITY::GET_ENTITY_COORDS(Local_248[iVar0 /*9*/][0], 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5f) };
			TASK::OPEN_SEQUENCE_TASK(&uLocal_306);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar0 /*9*/].f_3, 0) && PED::IS_PED_IN_VEHICLE(Local_248[iVar0 /*9*/][0], Local_248[iVar0 /*9*/].f_3, 0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_248[iVar0 /*9*/].f_3, 1)) < 900f)
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_248[iVar0 /*9*/].f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, 20f, 786469, 20f, 10f, 1);
				}
				TASK::TASK_VEHICLE_MISSION(0, Local_248[iVar0 /*9*/].f_3, 0, 5, 10f, 786469, 10f, 10f, 1);
				TASK::TASK_LEAVE_VEHICLE(0, Local_248[iVar0 /*9*/].f_3, 256);
			}
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_308, PLAYER::PLAYER_PED_ID(), 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_306);
			TASK::TASK_PERFORM_SEQUENCE(Local_248[iVar0 /*9*/][0], uLocal_306);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_306);
		}
		if (!PED::IS_PED_INJURED(Local_248[iVar0 /*9*/][1]))
		{
			Local_308 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + func_78(ENTITY::GET_ENTITY_COORDS(Local_248[iVar0 /*9*/][1], 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5f) };
			TASK::OPEN_SEQUENCE_TASK(&uLocal_307);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar0 /*9*/].f_3, 0) && PED::IS_PED_IN_VEHICLE(Local_248[iVar0 /*9*/][1], Local_248[iVar0 /*9*/].f_3, 0))
			{
				TASK::TASK_LEAVE_VEHICLE(0, Local_248[iVar0 /*9*/].f_3, 256);
			}
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_308, PLAYER::PLAYER_PED_ID(), 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_307);
			TASK::TASK_PERFORM_SEQUENCE(Local_248[iVar0 /*9*/][1], uLocal_307);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_307);
		}
		iVar0++;
	}
}

Vector3 func_78(struct<3> Param0, float fParam1)//Position - 0x4268
{
	struct<3> Var0;
	
	Var0 = { func_79(Param0) };
	Var0.x = (Var0.x * fParam1);
	Var0.f_1 = (Var0.f_1 * fParam1);
	Var0.f_2 = (Var0.f_2 * fParam1);
	return Var0;
}

Vector3 func_79(struct<3> Param0)//Position - 0x429D
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_80(char* sParam0, int iParam1)//Position - 0x42DC
{
	struct<8> Var0;
	struct<8> Var1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1) && !PED::IS_PED_INJURED(iLocal_50))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < 400f && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 400f)
			{
				if (func_6(&Local_232, cLocal_167, sParam0, 9, 0, 0, 0))
				{
					return 1;
				}
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < 400f)
			{
				StringCopy(&Var0, sParam0, 64);
				StringConCat(&Var0, "_1", 64);
				if (func_81(&Local_232, cLocal_167, sParam0, &Var0, 9, 0, 0))
				{
					return 1;
				}
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 400f)
			{
				StringCopy(&Var1, sParam0, 64);
				StringConCat(&Var1, "_2", 64);
				if (func_81(&Local_232, cLocal_167, sParam0, &Var1, 9, 0, 0))
				{
					return 1;
				}
			}
			else
			{
				SYSTEM::SETTIMERA(0);
				return 1;
			}
		}
		else
		{
			SYSTEM::SETTIMERA(0);
			return 1;
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_50) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 400f)
	{
		if (func_6(&Local_232, cLocal_167, sParam0, 9, 0, 0, 0))
		{
			return 1;
		}
	}
	else
	{
		SYSTEM::SETTIMERA(0);
		return 1;
	}
	return 0;
}

bool func_81(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x444E
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3D53 = 0;
	Global_3D5A = 0;
	Global_3D55 = 0;
	Global_412B = 1;
	Global_412D = 0;
	Global_4131 = 0;
	StringCopy(&Global_4138, sParam3, 24);
	Global_280001 = 0;
	return func_7(sParam2, iParam4, 0);
}

void func_82()//Position - 0x44A2
{
	if (iLocal_47 != 8)
	{
		HUD::CLEAR_PRINTS();
		func_25();
		func_86();
		if (HUD::DOES_BLIP_EXIST(uLocal_53))
		{
			HUD::REMOVE_BLIP(&uLocal_53);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_55))
		{
			HUD::SET_BLIP_ALPHA(uLocal_55, 0);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_56))
		{
			HUD::SET_BLIP_ALPHA(uLocal_56, 0);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_57))
		{
			HUD::SET_BLIP_ALPHA(uLocal_57, 0);
		}
		HUD::CLEAR_GPS_MULTI_ROUTE();
		HUD::CLEAR_GPS_CUSTOM_ROUTE();
		iLocal_48 = iLocal_47;
		iLocal_47 = 8;
		iLocal_271 = 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_54))
			{
				HUD::REMOVE_BLIP(&uLocal_54);
			}
			if (!iLocal_271)
			{
				if ((!PED::IS_PED_INJURED(uLocal_185[2]) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_185[2], iLocal_62)) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_6(&Local_232, cLocal_167, "RBS1_WANTED", 8, 0, 0, 0))
					{
						iLocal_271 = 1;
					}
				}
			}
			func_84(&Local_243);
		}
		else if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_PRINTS();
		}
	}
	if (iLocal_48 == 1)
	{
		if (func_83(uLocal_185[2], &Local_245))
		{
			HUD::CLEAR_PRINTS();
			func_25();
			func_87("CBH_AB2TREV");
		}
	}
	else if (iLocal_48 != 7)
	{
		if (func_83(uLocal_185[2], &Local_246))
		{
			HUD::CLEAR_PRINTS();
			func_25();
			func_87("CBH_AB2BOTH");
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		iLocal_271 = 0;
		if (HUD::DOES_BLIP_EXIST(uLocal_53))
		{
			HUD::SET_BLIP_ROUTE(uLocal_53, 1);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_55))
		{
			HUD::SET_BLIP_ALPHA(uLocal_55, 255);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_56))
		{
			HUD::SET_BLIP_ALPHA(uLocal_56, 255);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_57))
		{
			HUD::SET_BLIP_ALPHA(uLocal_57, 255);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sheriff"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
		iLocal_47 = iLocal_48;
		Local_243.f_1 = 0;
	}
	else if (Local_249.f_9)
	{
		func_87("CBH_COPFAIL");
	}
}

int func_83(int iParam0, var uParam1)//Position - 0x4665
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > 22500f)
			{
				return 1;
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > 10000f && (MISC::GET_GAME_TIMER() - iLocal_264) > 20000)
			{
				iLocal_264 = MISC::GET_GAME_TIMER();
				uParam1->f_1 = 0;
				func_84(uParam1);
			}
		}
	}
	return 0;
}

void func_84(var uParam0)//Position - 0x46E5
{
	if (!uParam0->f_1)
	{
		if (!MISC::IS_STRING_NULL(*uParam0))
		{
			func_85(*uParam0, 7500, 1);
			uParam0->f_1 = 1;
		}
	}
}

void func_85(char* sParam0, int iParam1, int iParam2)//Position - 0x4710
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_86()//Position - 0x4729
{
	Global_38DE = 0;
	func_16();
}

void func_87(char* sParam0)//Position - 0x4739
{
	func_165(sParam0);
	func_164();
	func_86();
	func_25();
	AUDIO::TRIGGER_MUSIC_EVENT("RH1_FAIL");
	while (!func_163())
	{
		func_22();
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (uLocal_185.f_7 == 2)
			{
				func_88(&uLocal_185, 1, 1, 0);
			}
		}
		SYSTEM::WAIT(0);
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (uLocal_185.f_7 == 2)
		{
			func_88(&uLocal_185, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
	{
		PED::DELETE_PED(&iLocal_50);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_185[0]))
	{
		PED::DELETE_PED(&(uLocal_185[0]));
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_185[2]))
	{
		PED::DELETE_PED(&(uLocal_185[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_230))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_230);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_62, -112.9441f, 6461.442f, 27.96845f, -98.55077f, 6476.093f, 35.10856f, 25f, 0, 1, 0))
	{
		if (func_176() == 0 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_62, -116.9822f, 6453.094f, 30.9129f, 0, 0, 1);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_62, -0.004f, 0.0094f, 0.3691f, 0.9293f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_62);
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_62);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_230) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_230, -112.9441f, 6461.442f, 27.96845f, -98.55077f, 6476.093f, 35.10856f, 25f, 0, 1, 0))
	{
		if (func_176() == 2 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_230, -115.937f, 6455.014f, 30.9471f, 0, 0, 1);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_230, 0.0006f, -0.1305f, -0.0066f, 0.9914f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_230);
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_230);
		}
	}
	if (func_24() || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -137.3856f, 6475.481f, 32.4512f, 5f, 5f, 5f, 0, 1, 0))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -117.3143f, 6461.553f, 30.4684f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 195.5377f);
	}
	func_756(37, 0);
	func_756(38, 0);
	CUTSCENE::REMOVE_CUTSCENE();
	func_753();
}

int func_88(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x499A
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	
	if (!uParam0->f_27)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = func_176();
		if (!uParam0->f_17)
		{
			func_151(iVar0, 0);
		}
		func_149(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = func_148(uParam0->f_7);
		func_151((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (func_147(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (func_146(func_176()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 0);
		}
		if (func_143(0) || func_143(3))
		{
			if (Global_42CA.f_D)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (MISC::IS_BIT_SET(Global_13CDF[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_13CDF[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_13D03[Global_10BA2.f_6D[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_42CA.f_D = 0;
		uParam0->f_5 = func_142(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = func_142(iVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		func_141(iVar7);
		PED::_0xE861D0B05C7662B8(iVar7, 0, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
				func_141(iVar0);
				PED::_0xE861D0B05C7662B8(iVar0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar9 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
			if (!MISC::IS_STRING_NULL(sVar9))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 0, 1);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_15661 = 1;
		func_139(PLAYER::PLAYER_PED_ID());
		func_138();
		func_137(iVar2);
		func_128();
		func_125(iVar2);
		func_98(func_123(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), func_97(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), func_97(68));
		}
		func_94(iVar2, &iVar7);
		if (((func_13(0) || func_13(3)) || func_13(2)) || func_13(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, 0);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, 1);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, 1);
		}
		if (!func_93())
		{
			func_89();
		}
		Global_154F6 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

void func_89()//Position - 0x4E75
{
	if (Global_1567F)
	{
		func_91();
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_90(Global_17C49.f_6C1.f_21B.f_C8D));
	}
	else
	{
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
	}
}

char* func_90(int iParam0)//Position - 0x4EA7
{
	iParam0 = iParam0;
	return "";
}

void func_91()//Position - 0x4EB6
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_92(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_147(PLAYER::PLAYER_PED_ID());
			if (func_146(iVar0) && (!func_13(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_146(Global_17C49.f_6C1.f_21B.f_C8D))
				{
					Global_17C49.f_6C1.f_21B.f_C8E = Global_17C49.f_6C1.f_21B.f_C8D;
				}
				Global_17C49.f_6C1.f_21B.f_C8F = iVar0;
				Global_17C49.f_6C1.f_21B.f_C8D = iVar0;
				return;
			}
		}
		else
		{
			if (Global_17C49.f_6C1.f_21B.f_C8D != 145)
			{
				Global_17C49.f_6C1.f_21B.f_C8F = Global_17C49.f_6C1.f_21B.f_C8D;
			}
			return;
		}
	}
	Global_17C49.f_6C1.f_21B.f_C8D = 145;
}

int func_92(int iParam0)//Position - 0x4FB3
{
	if (func_146(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_93()//Position - 0x4FDD
{
	return Global_42C8;
}

void func_94(int iParam0, int iParam1)//Position - 0x4FE8
{
	switch (iParam0)
	{
		case 0:
			func_95(4, *iParam1);
			func_95(7, *iParam1);
			func_95(8, *iParam1);
			func_95(11, *iParam1);
			break;
		
		case 1:
			if (Global_17C49.f_1CAD.f_148[2 /*6*/])
			{
				func_95(4, *iParam1);
			}
			func_95(7, *iParam1);
			func_95(8, *iParam1);
			func_95(11, *iParam1);
			if (Global_17C49.f_1CAD.f_63.f_3A[126])
			{
				func_95(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_17C49.f_1CAD.f_148[20 /*6*/])
			{
				func_95(4, *iParam1);
			}
			func_95(7, *iParam1);
			func_95(8, *iParam1);
			func_95(11, *iParam1);
			break;
	}
}

void func_95(int iParam0, int iParam1)//Position - 0x50B4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (func_96(iParam0, iParam1))
	{
		return;
	}
	if (Global_84F4[iParam0 /*31*/].f_18 < 5)
	{
		Global_84F4[iParam0 /*31*/].f_19[Global_84F4[iParam0 /*31*/].f_18] = iParam1;
		Global_84F4[iParam0 /*31*/].f_18++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_84F4[iParam0 /*31*/].f_19[iVar0];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_INJURED(iVar1))
			{
				Global_84F4[iParam0 /*31*/].f_19[iVar0] = iParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_96(int iParam0, int iParam1)//Position - 0x5166
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_84F4[iParam0 /*31*/].f_18)
	{
		if (iParam1 == Global_84F4[iParam0 /*31*/].f_19[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_97(int iParam0)//Position - 0x519F
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_63.f_3A[iParam0];
}

void func_98(int iParam0)//Position - 0x51CC
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_7843[(38 / 32)]), (38 % 32));
			func_99(38, 0);
			MISC::SET_BIT(&(Global_7843[(41 / 32)]), (41 % 32));
			func_99(41, 0);
			MISC::SET_BIT(&(Global_7843[(43 / 32)]), (43 % 32));
			func_99(43, 0);
			MISC::SET_BIT(&(Global_7843[(42 / 32)]), (42 % 32));
			func_99(42, 0);
			MISC::SET_BIT(&(Global_7843[(44 / 32)]), (44 % 32));
			func_99(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_7843[(51 / 32)]), (51 % 32));
			func_99(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_7843[(51 / 32)]), (51 % 32));
			func_99(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_7843[(53 / 32)]), (53 % 32));
			func_99(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_7843[(81 / 32)]), (81 % 32));
			func_99(81, 0);
			MISC::SET_BIT(&(Global_7843[(82 / 32)]), (82 % 32));
			func_99(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_7843[(47 / 32)]), (47 % 32));
			func_99(47, 0);
			MISC::SET_BIT(&(Global_7843[(50 / 32)]), (50 % 32));
			func_99(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_7843[(50 / 32)]), (50 % 32));
			func_99(50, 0);
			break;
	}
}

void func_99(int iParam0, int iParam1)//Position - 0x535C
{
	int iVar0;
	
	if (iParam0 != 225)
	{
		if (Global_10A95)
		{
			iVar0 = Global_24F57C.f_49[iParam0];
		}
		else
		{
			iVar0 = Global_17C49.f_158E[iParam0];
		}
		if (iVar0 != iParam1 || MISC::IS_BIT_SET(Global_7843[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_784C[(iParam0 / 32)]), (iParam0 % 32));
				Global_7A19[iParam0] = iParam1;
			}
			else if (Global_10A95)
			{
				Global_24F57C.f_49[iParam0] = iParam1;
			}
			else
			{
				Global_17C49.f_158E[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_7843[(iParam0 / 32)]), (iParam0 % 32));
			func_101(iParam0);
			if (MISC::IS_BIT_SET(Global_7843[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_100(iParam0);
			}
		}
	}
}

void func_100(int iParam0)//Position - 0x5455
{
	if (!MISC::IS_BIT_SET(Global_7BEE.f_E3[(iParam0 / 32)], (iParam0 % 23)))
	{
		MISC::SET_BIT(&(Global_7BEE.f_E3[(iParam0 / 32)]), (iParam0 % 23));
		Global_7BEE[Global_7BEE.f_E2] = iParam0;
		Global_7BEE.f_E2++;
	}
}

void func_101(int iParam0)//Position - 0x54A3
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_121())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { func_120(iParam0) };
	if (MISC::IS_BIT_SET(Var0.f_4, 2))
	{
		func_106(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	if ((MISC::IS_BIT_SET(Global_784C[(iParam0 / 32)], (iParam0 % 32)) && Global_7A19[iParam0] == 2) && fVar4 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_784C[(iParam0 / 32)]), (iParam0 % 32));
		Global_7855[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (MISC::IS_BIT_SET(Global_7937[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_15F9E.f_120 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						Global_15F9E.f_120 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar5 = Global_15F9E.f_120;
				iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					MISC::SET_BIT(&(Global_784C[(iParam0 / 32)]), (iParam0 % 32));
					Global_7A19[iParam0] = 3;
					MISC::SET_BIT(&(Global_7843[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_7937[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (MISC::IS_BIT_SET(Global_784C[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_7A19[iParam0];
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_17C49.f_1CAD)
		{
			iVar3 = func_103(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_13(14))
		{
			iVar3 = 0;
		}
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (func_102())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_17C49.f_158E[iParam0];
	}
	if (Global_7AFB[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (MISC::IS_BIT_SET(Global_7843[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!MISC::IS_BIT_SET(Global_784C[(iParam0 / 32)], (iParam0 % 32)) || (Global_7855[iParam0] == 0 && Global_7A19[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_7842)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (MISC::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			MISC::CLEAR_BIT(&(Global_7843[(iParam0 / 32)]), (iParam0 % 32));
			Global_7AFB[iParam0] = iVar3;
		}
	}
	if (MISC::IS_BIT_SET(Global_784C[(iParam0 / 32)], (iParam0 % 32)) && Global_7A19[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_7843[(iParam0 / 32)]), (iParam0 % 32));
		func_100(iParam0);
		if (Global_7855[iParam0] < 2)
		{
			Global_7855[iParam0]++;
		}
	}
}

int func_102()//Position - 0x5985
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	switch (func_176())
	{
		case 0:
			if (Global_17C49.f_1CAD.f_63.f_3A[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_17C49.f_1CAD.f_63.f_3A[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_17C49.f_1CAD.f_63.f_3A[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_103(int iParam0)//Position - 0x5A04
{
	int iVar0;
	
	iVar0 = func_176();
	if (func_104(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (MISC::IS_BIT_SET(Global_17C49.f_156E[5], 0) || MISC::IS_BIT_SET(Global_17C49.f_156E[6], 0))
			{
				return 0;
			}
		}
		if (func_146(iVar0))
		{
			if (MISC::IS_BIT_SET(Global_14D92[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_156E[0], 0))
				{
					return 0;
				}
			}
			if (func_146(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_14D92[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_156E[5], 0))
				{
					return 0;
				}
			}
			if (func_146(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_14D92[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_156E[6], 0))
				{
					return 0;
				}
			}
			if (func_146(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_14D92[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_156E[2], 0))
				{
					return 0;
				}
				if (func_146(iVar0))
				{
					if (MISC::IS_BIT_SET(Global_14D92[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_156E[1], 0))
				{
					return 0;
				}
				if (func_146(iVar0))
				{
					if (MISC::IS_BIT_SET(Global_14D92[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (MISC::IS_BIT_SET(Global_17C49.f_156E[3], 0))
				{
					return 0;
				}
			}
			if (func_146(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_14D92[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_104(int iParam0)//Position - 0x5C59
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_105(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

var func_105(var uParam0)//Position - 0x5CC5
{
	return uParam0;
}

void func_106(int iParam0, var uParam1)//Position - 0x5CCF
{
	var uVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(uParam1->f_4, 2))
	{
		return;
	}
	uVar0 = func_109();
	iVar1 = func_108(uVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_107(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_17C49.f_158E[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_107(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_17C49.f_158E[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_107(iParam0))
			{
				if ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0) && !Global_17C49.f_1CAD.f_63.f_3A[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_17C49.f_158E[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_17C49.f_1CAD.f_63.f_3A[4])
				{
					Global_17C49.f_158E[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else if (Global_17C49.f_1CAD.f_63.f_3A[4])
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_17C49.f_158E[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_17C49.f_158E[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_107(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_17C49.f_158E[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_107(iParam0))
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_107(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 0)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) > 0)
			{
				Global_17C49.f_158E[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[70 /*34*/].f_6) == 0)
			{
				if (!func_107(iParam0))
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("omega2")) == 0)
			{
				if (!func_107(iParam0))
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_107(iParam0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[26 /*34*/].f_6) == 0)
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_107(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[43 /*34*/].f_6) == 0)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_107(iParam0))
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_107(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[93 /*34*/].f_6) > 0)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_107(iParam0))
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_107(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[10 /*34*/].f_6) == 0)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_107(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[47 /*34*/].f_6) == 0)
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[70 /*34*/].f_6) == 0)
			{
				if (!func_107(iParam0))
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[48 /*34*/].f_6) == 0)
			{
				if (!func_107(iParam0))
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_13D03[39 /*34*/].f_6) == 0)
			{
				if (!func_107(iParam0))
				{
					Global_17C49.f_158E[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_107(iParam0))
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_107(iParam0))
			{
				Global_17C49.f_158E[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_107(iParam0))
			{
				Global_17C49.f_158E[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_17C49.f_158E[iParam0], 1, 1);
			}
			break;
	}
}

bool func_107(int iParam0)//Position - 0x666A
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_120(iParam0) };
	iVar1 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_108(int iParam0)//Position - 0x669E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

var func_109()//Position - 0x66B1
{
	var uVar0;
	
	func_119(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_118(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_117(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_112(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_111(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_110(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_110(var uParam0, int iParam1)//Position - 0x66F7
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_111(var uParam0, int iParam1)//Position - 0x677D
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_112(var uParam0, int iParam1)//Position - 0x67B0
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_116(*uParam0);
	iVar1 = func_114(*uParam0);
	if (iParam1 < 1 || iParam1 > func_113(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_113(int iParam0, int iParam1)//Position - 0x6801
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_114(int iParam0)//Position - 0x68A3
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_115(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_115(bool bParam0, int iParam1, int iParam2)//Position - 0x68C8
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_116(int iParam0)//Position - 0x68DF
{
	return iParam0 & 15;
}

void func_117(var uParam0, int iParam1)//Position - 0x68EC
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_118(var uParam0, int iParam1)//Position - 0x6926
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_119(var uParam0, int iParam1)//Position - 0x6961
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

struct<7> func_120(int iParam0)//Position - 0x699D
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_121()//Position - 0x9570
{
	if ((func_38() == -1 || func_38() == 999) && !func_122() == 0)
	{
		return 1;
	}
	return 0;
}

int func_122()//Position - 0x95A0
{
	return Global_5F7D;
}

int func_123(struct<3> Param0, int iParam1, int iParam2)//Position - 0x95AB
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_14D9D[iVar0 /*10*/].f_7 != 262)
		{
			if (Global_14D9D[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_124(iVar0) || iParam2 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_14D9D[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_124(int iParam0)//Position - 0x963A
{
	return MISC::IS_BIT_SET(Global_17C49.f_156E[iParam0], 0);
}

void func_125(int iParam0)//Position - 0x9652
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_126(iParam0, iVar0);
		iVar0++;
	}
}

void func_126(int iParam0, int iParam1)//Position - 0x9675
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_127(iParam0, iParam1, &iVar2, &iVar3);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = func_34(iVar3, -1, 0);
	}
	else
	{
		STATS::STAT_GET_INT(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), fVar1);
			break;
		
		case 7:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("armenian3")) != 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("trevor3")) != 0)
			{
				Global_15662 = 1;
			}
			else
			{
				fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
				PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
				PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
				PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), fVar1);
			}
			break;
	}
}

void func_127(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x9761
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_128()//Position - 0x99B8
{
	struct<50> Var0;
	
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !func_146(func_176())) || !func_134())
	{
		return;
	}
	Var0 = 12;
	Var0.f_D = 12;
	Var0.f_1A = 12;
	Var0.f_27 = 9;
	Var0.f_31 = 9;
	func_130(PLAYER::PLAYER_PED_ID(), &Var0, 1);
	func_129(1306, Var0[0], -1, 1);
	func_129(1307, Var0[1], -1, 1);
	func_129(1308, Var0[2], -1, 1);
	func_129(1309, Var0[3], -1, 1);
	func_129(1310, Var0[4], -1, 1);
	func_129(1311, Var0[5], -1, 1);
	func_129(1312, Var0[6], -1, 1);
	func_129(1313, Var0[7], -1, 1);
	func_129(1314, Var0[8], -1, 1);
	func_129(1315, Var0[9], -1, 1);
	func_129(1316, Var0[10], -1, 1);
	func_129(1317, Var0[11], -1, 1);
	func_129(1318, Var0.f_D[0], -1, 1);
	func_129(1319, Var0.f_D[1], -1, 1);
	func_129(1320, Var0.f_D[2], -1, 1);
	func_129(1321, Var0.f_D[3], -1, 1);
	func_129(1322, Var0.f_D[4], -1, 1);
	func_129(1323, Var0.f_D[5], -1, 1);
	func_129(1324, Var0.f_D[6], -1, 1);
	func_129(1325, Var0.f_D[7], -1, 1);
	func_129(1326, Var0.f_D[8], -1, 1);
	func_129(1327, Var0.f_D[9], -1, 1);
	func_129(1328, Var0.f_D[10], -1, 1);
	func_129(1329, Var0.f_D[11], -1, 1);
	func_129(1330, Var0.f_1A[0], -1, 1);
	func_129(1331, Var0.f_1A[1], -1, 1);
	func_129(1332, Var0.f_1A[2], -1, 1);
	func_129(1333, Var0.f_1A[3], -1, 1);
	func_129(1334, Var0.f_1A[4], -1, 1);
	func_129(1335, Var0.f_1A[5], -1, 1);
	func_129(1336, Var0.f_1A[6], -1, 1);
	func_129(1337, Var0.f_1A[7], -1, 1);
	func_129(1338, Var0.f_1A[8], -1, 1);
	func_129(1339, Var0.f_1A[9], -1, 1);
	func_129(1340, Var0.f_1A[10], -1, 1);
	func_129(1341, Var0.f_1A[11], -1, 1);
	func_129(1342, Var0.f_27[0], -1, 1);
	func_129(1343, Var0.f_27[1], -1, 1);
	func_129(1344, Var0.f_27[2], -1, 1);
	func_129(1345, Var0.f_27[3], -1, 1);
	func_129(1346, Var0.f_27[4], -1, 1);
	func_129(1347, Var0.f_27[5], -1, 1);
	func_129(1348, Var0.f_27[6], -1, 1);
	func_129(1349, Var0.f_27[7], -1, 1);
	func_129(1350, Var0.f_27[8], -1, 1);
	func_129(1351, Var0.f_31[0], -1, 1);
	func_129(1352, Var0.f_31[1], -1, 1);
	func_129(1353, Var0.f_31[2], -1, 1);
	func_129(1354, Var0.f_31[3], -1, 1);
	func_129(1355, Var0.f_31[4], -1, 1);
	func_129(1356, Var0.f_31[5], -1, 1);
	func_129(1357, Var0.f_31[6], -1, 1);
	func_129(1358, Var0.f_31[7], -1, 1);
	func_129(1359, Var0.f_31[8], -1, 1);
	func_129(1360, func_176(), -1, 1);
	STATS::STAT_SET_BOOL(joaat("clo_stored_initial"), 1, 1);
	Global_17C49.f_6C1.f_21B.f_C87 = 1;
}

var func_129(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9DCB
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_130(int iParam0, var uParam1, int iParam2)//Position - 0x9FF2
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_147(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_133(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_132(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_146(iVar0))
		{
			uParam1->f_3B = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_40;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_131(161, -1))
			{
				uParam1->f_3B = func_34(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_34(740, Global_10A08, 0);
			}
			uParam1->f_3C = func_34(741, Global_10A08, 0);
			uParam1->f_3D = func_34(742, Global_10A08, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_131(161, -1))
			{
				uParam1->f_3B = func_34(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_34(740, Global_10A08, 0);
			}
		}
	}
}

int func_131(int iParam0, int iParam1)//Position - 0xA19C
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25BDB1[iParam0 /*6*/][func_35(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_132(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0xA1C8
{
	int iVar0;
	
	iVar0 = func_147(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_133(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0xA710
{
	int iVar0;
	
	iVar0 = func_147(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_134()//Position - 0xA951
{
	if (func_136() && func_135(0))
	{
		return 1;
	}
	return 0;
}

var func_135(int iParam0)//Position - 0xA96F
{
	return Global_140671[iParam0];
}

var func_136()//Position - 0xA97F
{
	return func_135(func_36() + 1);
}

void func_137(int iParam0)//Position - 0xA991
{
	switch (iParam0)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -1865950624);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1865950624, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7A, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7A);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7B, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7B);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7C, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7C);
			break;
		
		case 1:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -1865950624);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1865950624, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7A, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7A);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7B, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7B);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7C, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7C);
			break;
		
		case 2:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, -1865950624);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1865950624, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7A, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7A);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7B, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7B);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_14D7C, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_14D7C);
			break;
		
		default:
			break;
	}
}

void func_138()//Position - 0xAB45
{
	var uVar0;
	int iVar1;
	
	func_91();
	uVar0 = HUD::GET_MAIN_PLAYER_BLIP_ID();
	if (HUD::DOES_BLIP_EXIST(uVar0))
	{
		iVar1 = Global_17C49.f_6C1.f_21B.f_C8D;
		if (func_13(14))
		{
			iVar1 = func_147(PLAYER::PLAYER_PED_ID());
		}
		if (iVar1 == 0)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, "BLIP_TREV");
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, "BLIP_PLAYER");
		}
	}
}

void func_139(int iParam0)//Position - 0xABC8
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_140(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) == -1)
				{
					if (WEAPON::GET_MAX_AMMO(iParam0, iVar3, &uVar1))
					{
						WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = FILES::GET_NUM_DLC_WEAPONS();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) == -1)
			{
				if (WEAPON::GET_MAX_AMMO(iParam0, iVar3, &uVar1))
				{
					WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_140(int iParam0)//Position - 0xAC8A
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_141(int iParam0)//Position - 0xAEFE
{
	int iVar0;
	
	iVar0 = func_147(iParam0);
	if (func_146(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID() && PED::GET_PED_MAX_HEALTH(iParam0) == 200)
		{
			PED::SET_PED_MAX_HEALTH(iParam0, SYSTEM::ROUND((IntToFloat(PED::GET_PED_MAX_HEALTH(iParam0)) * Global_40001.f_5A)));
		}
		if (Global_17C49.f_6C1.f_21B.f_122[iVar0] <= 0f)
		{
			Global_17C49.f_6C1.f_21B.f_122[iVar0] = 100f;
		}
		else if (Global_17C49.f_6C1.f_21B.f_122[iVar0] <= 10f)
		{
			Global_17C49.f_6C1.f_21B.f_122[iVar0] = 10f;
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, SYSTEM::ROUND((((Global_17C49.f_6C1.f_21B.f_122[iVar0] / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) + 100f)));
	}
}

int func_142(int iParam0)//Position - 0xAFEA
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_143(int iParam0)//Position - 0xB025
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_144(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_144(int iParam0)//Position - 0xB047
{
	return func_145(iParam0, Global_8861);
}

int func_145(int iParam0, int iParam1)//Position - 0xB058
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_146(int iParam0)//Position - 0xB239
{
	return iParam0 < 3;
}

int func_147(int iParam0)//Position - 0xB245
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_92(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_148(int iParam0)//Position - 0xB282
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	return 145;
}

void func_149(int iParam0, int iParam1)//Position - 0xB2B0
{
	switch (iParam0)
	{
		case 0:
			func_150(4, *iParam1, 0);
			func_150(7, *iParam1, 0);
			func_150(8, *iParam1, 0);
			func_150(11, *iParam1, 0);
			break;
		
		case 1:
			func_150(4, *iParam1, 0);
			func_150(7, *iParam1, 0);
			func_150(8, *iParam1, 0);
			func_150(11, *iParam1, 0);
			if (Global_17C49.f_1CAD.f_63.f_3A[126])
			{
				func_150(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_150(4, *iParam1, 0);
			func_150(7, *iParam1, 0);
			func_150(8, *iParam1, 0);
			func_150(11, *iParam1, 0);
			break;
	}
}

void func_150(int iParam0, int iParam1, bool bParam2)//Position - 0xB368
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			return;
		}
	}
	if (Global_84F4[iParam0 /*31*/].f_18 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_84F4[iParam0 /*31*/].f_18)
	{
		if (bVar1)
		{
			Global_84F4[iParam0 /*31*/].f_19[(iVar0 - 1)] = Global_84F4[iParam0 /*31*/].f_19[iVar0];
			Global_84F4[iParam0 /*31*/].f_19[iVar0] = 0;
		}
		else if (iParam1 == Global_84F4[iParam0 /*31*/].f_19[iVar0])
		{
			Global_84F4[iParam0 /*31*/].f_19[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_84F4[iParam0 /*31*/].f_18 = (Global_84F4[iParam0 /*31*/].f_18 - 1);
	}
}

void func_151(int iParam0, bool bParam1)//Position - 0xB424
{
	func_162(iParam0);
	func_157(iParam0, bParam1);
	func_156(iParam0);
	func_155(iParam0);
	func_154(iParam0);
	func_153(iParam0);
	func_152(iParam0);
}

void func_152(int iParam0)//Position - 0xB458
{
	int iVar0;
	
	iVar0 = func_147(iParam0);
	if (func_146(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			Global_17C49.f_6C1.f_21B.f_614[iVar0] = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		}
	}
}

void func_153(int iParam0)//Position - 0xB49F
{
	int iVar0;
	
	iVar0 = func_147(iParam0);
	if (func_146(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_17C49.f_6C1.f_21B.f_60A[iVar0 /*3*/] = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	}
}

void func_154(int iParam0)//Position - 0xB4DD
{
	int iVar0;
	
	iVar0 = func_147(iParam0);
	if (func_146(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
			{
				return;
			}
		}
		Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		Global_17C49.f_6C1.f_21B.f_602[iVar0] = ENTITY::GET_ENTITY_HEADING(iParam0);
		Global_17C49.f_6C1.f_21B.f_606[iVar0] = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0);
		if (Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/] >= 8000f)
		{
			Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/] = 7500f;
		}
		else if (Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/] <= -8000f)
		{
			Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/] = -7500f;
		}
		if (Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_17C49.f_6C1.f_21B.f_5F8[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_155(int iParam0)//Position - 0xB66A
{
	int iVar0;
	
	iVar0 = func_147(iParam0);
	if (func_146(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_17C49.f_6C1.f_21B.f_126[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_156(int iParam0)//Position - 0xB6A6
{
	int iVar0;
	
	iVar0 = func_147(iParam0);
	if (func_146(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_17C49.f_6C1.f_21B.f_122[iVar0] = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) * 100f);
	}
}

void func_157(int iParam0, bool bParam1)//Position - 0xB703
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_147(iParam0);
	if (func_146(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_158(iParam0, &(Global_17C49.f_6C1.f_21B.f_12A[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_17C49.f_6C1.f_21B.f_47F[iVar2 /*4*/][iVar0] = HUD::_HUD_WEAPON_WHEEL_GET_SLOT_HASH(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH();
					if (Global_17C49.f_6C1.f_21B.f_47F[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_17C49.f_6C1.f_21B.f_4A0 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_158(int iParam0, var uParam1)//Position - 0xB7F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_140(iVar0);
			if (iVar3 != 0)
			{
				Var4.x = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_140(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.x != 0 && Var4.x != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.x);
					if (Var4.x == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					MISC::SET_BIT(&(Var4.f_2), (20 + WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.x)));
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.x, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_160(Var4.x, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.x, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_160(Var4.x, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_85[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = FILES::GET_NUM_DLC_WEAPONS();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILES::GET_DLC_WEAPON_DATA(iVar5, &Var7) && !func_159(Var7.f_1)) && iVar9 < 50)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var7))
				{
					Var4.x = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.x);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.x, 0))
					{
						MISC::SET_BIT(&(Var4.f_2), (20 + WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.x)));
					}
					else
					{
						MISC::SET_BIT(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.x, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_85[iVar9 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar5))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar5, iVar1, &Var8))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.x, Var8.f_3))
							{
								MISC::SET_BIT(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.x != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.x, 0))
					{
						Var4.x = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_85[iVar9 /*3*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_159(int iParam0)//Position - 0xBA5A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_160(int iParam0, int iParam1)//Position - 0xBB80
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var3;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 7:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_161(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iParam1, &Var3))
						{
							return Var3.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_161(int iParam0, var uParam1)//Position - 0xC3A3
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_162(int iParam0)//Position - 0xC3DE
{
	int iVar0;
	
	iVar0 = func_147(iParam0);
	if (func_146(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_17C49.f_6C1.f_21B.f_5F4[iVar0] = func_109();
	}
}

int func_163()//Position - 0xC418
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_15F6A == 7 || Global_15F6A == 8)
	{
		return 1;
	}
	return 0;
}

void func_164()//Position - 0xC445
{
	int iVar0;
	
	if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_146)) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!PED::IS_PED_INJURED(iLocal_51[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
			}
			iVar0++;
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148))
		{
			if (!PED::IS_PED_INJURED(Local_248[iLocal_153 /*9*/][0]))
			{
				TASK::CLEAR_PED_TASKS(Local_248[iLocal_153 /*9*/][0]);
			}
			if (!PED::IS_PED_INJURED(Local_248[iLocal_153 /*9*/][1]))
			{
				TASK::CLEAR_PED_TASKS(Local_248[iLocal_153 /*9*/][1]);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iLocal_153 /*9*/].f_3, 0))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_248[iLocal_153 /*9*/].f_3, -8f, 1);
				}
			}
		}
	}
}

void func_165(char* sParam0)//Position - 0xC516
{
	func_175(sParam0);
	func_166(0);
}

void func_166(int iParam0)//Position - 0xC529
{
	int iVar0;
	
	if (Global_17C49.f_1CAD || func_174(0))
	{
		iVar0 = func_173();
		if (!func_167(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 5);
		Global_15F8E = iParam0;
	}
}

int func_167(int iParam0)//Position - 0xC56E
{
	int iVar0;
	int iVar1;
	
	func_172();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_13CDF[iParam0 /*5*/];
	iVar1 = Global_10BA2.f_6D[iVar0 /*4*/];
	func_171(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_168(&(Global_17C49.f_6C1.f_21B), iVar1);
	if (Global_14A3E == Global_15F8F)
	{
		Global_17C49.f_1CAD.f_148[iVar1 /*6*/].f_1++;
	}
	if (!MISC::IS_BIT_SET(Global_13D03[iVar1 /*34*/].f_F, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_17C49.f_1CAD.f_148[iVar1 /*6*/].f_2++;
	Global_14A3E = Global_15F8F;
	if (iParam0 == -1)
	{
		if (Global_17C49.f_1CAD)
		{
		}
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_13CDF[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_13CDF[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_168(var uParam0, int iParam1)//Position - 0xC685
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_17C49.f_4193[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_170(Global_17C49.f_4193[iVar0], &Var2, &fVar3))
			{
				Global_17C49.f_4193[iVar0] = 318;
				func_169(&(uParam0->f_5F4[iVar0]));
				uParam0->f_5F8[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_602[iVar0] = 0f;
				uParam0->f_606[iVar0] = 0;
				uParam0->f_60A[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_614[iVar0] = 0;
				Global_156CD[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_9 = 0f;
				Global_156CD[iVar0 /*29*/].f_C = 0f;
				Global_156CD[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_A = 0f;
				Global_156CD[iVar0 /*29*/].f_D = 0f;
				Global_156CD[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_B = 0f;
				Global_156CD[iVar0 /*29*/].f_E = 0f;
				Global_156CD[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1A = 0f;
				Global_156CD[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1B = 0f;
				Global_156CD[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_169(var uParam0)//Position - 0xC84E
{
	*uParam0 = -15;
}

int func_170(int iParam0, var uParam1, float fParam2)//Position - 0xC85C
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_170(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_170(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_171(int iParam0, bool bParam1)//Position - 0xD1CB
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_14980[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_14980[iParam0 /*2*/] = 0;
	}
}

void func_172()//Position - 0xD209
{
	Global_15F8D = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_176())
			{
				case 0:
					StringCopy(&Global_10B7D, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_10B7D, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_10B7D, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_10B81, "", 16);
		}
		Global_15F8D = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_176())
			{
				case 0:
					StringCopy(&Global_10B7D, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_10B7D, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_10B7D, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_10B81, "", 16);
		}
		Global_15F8D = 0;
		MISC::SET_BIT(&(Global_15F6A.f_14), 25);
	}
}

int func_173()//Position - 0xD2F5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_174(bool bParam0)//Position - 0xD32A
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_175(char* sParam0)//Position - 0xD355
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_10B7D, sParam0, 16);
			StringCopy(&Global_10B81, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

int func_176()//Position - 0xD394
{
	func_91();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_177()//Position - 0xD3AD
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var9;
	var uVar10;
	struct<2> Var11;
	struct<3> Var12;
	int iVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	
	func_293();
	switch (iLocal_149)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0) && !PED::IS_PED_INJURED(uLocal_185[2]))
			{
				if ((!PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_230, 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[2], 242628503) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[2], 242628503) != 0)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_230, 1);
					iLocal_143 = 1;
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_TRUCK_LOGS", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
					PED::SET_PED_HELMET(uLocal_185[2], 0);
					VEHICLE::SET_VEHICLE_ALARM(iLocal_230, 0);
					iLocal_929 = 0;
					iVar0 = 0;
					while (iVar0 < iLocal_919)
					{
						iLocal_919[iVar0] = 0;
						iLocal_920[iVar0] = 0;
						iVar0++;
					}
					bLocal_921 = false;
					bLocal_930 = true;
					bLocal_931 = false;
					bLocal_932 = false;
					iLocal_142 = 0;
					iLocal_990 = 0;
					iLocal_991 = 0;
					iLocal_992 = 0;
					iLocal_993 = 0;
					iLocal_994 = 0;
					iLocal_995 = 0;
					iLocal_259 = 0;
					iLocal_1005 = 0;
					iLocal_1001 = 0;
					iLocal_1002 = 0;
					Local_124[0 /*3*/] = { 262.3121f, 4447.511f, 53.83961f };
					Local_124[1 /*3*/] = { -210.8312f, 4482.656f, 60.27203f };
					Local_124[2 /*3*/] = { -1119.857f, 5254.628f, 74.45103f };
					Local_124[3 /*3*/] = { -912.0435f, 5407.727f, 36.07696f };
					Local_124[4 /*3*/] = { -791.7217f, 5470.604f, 33.07196f };
					Local_124[5 /*3*/] = { -625.3994f, 5531.649f, 44.20467f };
					iLocal_989 = (iLocal_941 - 1);
					iLocal_988 = (iLocal_962 - 1);
					func_292(-415.5206f, 6124.96f, 30.3722f, &iLocal_962);
					func_292(-653.8552f, 5356.884f, 57.9293f, &iLocal_962);
					func_292(-943.5536f, 5257.132f, 81.4484f, &iLocal_962);
					func_292(-483.123f, 4917.299f, 145.827f, &iLocal_962);
					func_292(Local_925, &iLocal_962);
					func_292(-415.5206f, 6124.96f, 30.3722f, &iLocal_941);
					func_292(-653.8552f, 5356.884f, 57.9293f, &iLocal_941);
					func_292(-483.123f, 4917.299f, 145.827f, &iLocal_941);
					func_292(Local_925, &iLocal_941);
					iLocal_926 = 2;
					iLocal_927 = iLocal_62;
					iLocal_928 = iLocal_230;
					VEHICLE::REQUEST_VEHICLE_RECORDING(10, "RBsetup");
					VEHICLE::REQUEST_VEHICLE_RECORDING(11, "RBsetup");
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_168);
					VEHICLE::REMOVE_VEHICLE_RECORDING(2, sLocal_168);
					VEHICLE::REMOVE_VEHICLE_RECORDING(3, sLocal_168);
					VEHICLE::REMOVE_VEHICLE_RECORDING(4, sLocal_168);
					func_291(&uLocal_185, 1, 1);
					func_291(&uLocal_185, 0, 1);
					func_291(&uLocal_185, 2, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 0, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 0, 1, 0);
					RECORDING::_0x293220DA1B46CEBC(3f, 12f, 4);
					CUTSCENE::REMOVE_CUTSCENE();
					RECORDING::_0x293220DA1B46CEBC(2f, 2f, 3);
					iLocal_149++;
				}
			}
			break;
		
		case 1:
			if ((!PED::IS_PED_INJURED(uLocal_185[iLocal_926]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0))
			{
				if ((!iLocal_929 && PED::IS_PED_IN_VEHICLE(uLocal_185[iLocal_926], iLocal_62, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					if (func_6(&Local_232, cLocal_167, "RBS1_RACE", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						func_290(500);
						iLocal_929 = 1;
					}
				}
				else
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_62, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[2], 451360105) != 1)
						{
							TASK::TASK_LEAVE_VEHICLE(uLocal_185[2], iLocal_62, 512);
						}
					}
					if (!PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_62, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
					if (((SYSTEM::TIMERA() > 1500 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[iLocal_926], 242628503) != 1) && !PED::IS_PED_IN_VEHICLE(uLocal_185[iLocal_926], iLocal_230, 0)) && !PED::IS_PED_IN_VEHICLE(uLocal_185[iLocal_926], iLocal_62, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_ENTER_VEHICLE(0, iLocal_230, -1, -1, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_185[iLocal_926], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						iLocal_149++;
					}
				}
			}
			break;
		
		case 2:
			if ((!PED::IS_PED_INJURED(uLocal_185[iLocal_926]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_185[iLocal_926], iLocal_62, 0))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						}
					}
					else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
				}
				else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				if (!PED::IS_PED_IN_VEHICLE(uLocal_185[iLocal_926], iLocal_62, 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_GAS_STATION"))
					{
						AUDIO::STOP_AUDIO_SCENE("PS_1_DRIVE_TO_GAS_STATION");
					}
					AUDIO::START_AUDIO_SCENE("PS_1_RACE_AS_MICHAEL");
					uLocal_53 = func_44(Local_925, 0);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(162.8428f, 4416.564f, 46.24126f, 102.7305f, 4437.815f, 82.75628f, 12.75f, 1, 0, 1);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(84.0697f, 4480.673f, 12.78804f, -201.9954f, 4211.447f, 99.18795f, 131.75f, 1, 0, 1);
					SYSTEM::SETTIMERA(0);
					iLocal_149++;
				}
			}
			break;
		
		case 3:
			if (!iLocal_991)
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0) && iLocal_926 == 2) && !PED::IS_PED_INJURED(uLocal_185[iLocal_926]))
				{
					if (iLocal_143)
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_230, 1))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_230, 0);
							iLocal_143 = 0;
						}
					}
					if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[iLocal_926], 242628503) != 1 && PED::IS_PED_IN_VEHICLE(uLocal_185[iLocal_926], iLocal_230, 0)) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_230))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_185[iLocal_926], 1);
						TASK::OPEN_SEQUENCE_TASK(&uVar2);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_230, -91.8094f, 6431.147f, 30.3459f, 15f, 0, joaat("ruffian"), 262275, 3f, 20f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_230, -127.9359f, 6405.864f, 30.4238f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_230, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
						TASK::CLOSE_SEQUENCE_TASK(uVar2);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_185[2], uVar2);
						TASK::CLEAR_SEQUENCE_TASK(&uVar2);
						iLocal_991 = 1;
					}
					if ((!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_TREVOR_DRIVES_OFF") && !PED::IS_PED_IN_VEHICLE(uLocal_185[iLocal_926], iLocal_230, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_185[iLocal_926], 1), ENTITY::GET_ENTITY_COORDS(iLocal_230, 1)) < 4f)
					{
						AUDIO::START_AUDIO_SCENE("PS_1_TREVOR_DRIVES_OFF");
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_230, "PS_1_TREVOR_BIKE", 0);
					}
				}
			}
			else
			{
				if (!iLocal_992)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_185[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_230))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_185[2], -90.50787f, 6423.877f, 30.38944f, -103.0677f, 6409.822f, 35.4915f, 41.5f, 0, 1, 0))
						{
							TASK::CLEAR_PED_TASKS(uLocal_185[2]);
							TASK::OPEN_SEQUENCE_TASK(&uVar3);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_230, -120.4565f, 6413.602f, 30.3924f, 15f, 0, joaat("ruffian"), 262275, 5f, 50f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_230, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::CLOSE_SEQUENCE_TASK(uVar3);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_185[2], uVar3);
							TASK::CLEAR_SEQUENCE_TASK(&uVar3);
							iLocal_992 = 1;
						}
					}
				}
				if (!iLocal_993)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_185[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_230))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_230, 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_230) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_230, Local_97, 40f, 40f, 40f, 0, 1, 0))
							{
								TASK::CLEAR_PED_TASKS(uLocal_185[2]);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_230, 11, "RBsetup", 10f, 786469);
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_185[iLocal_926], 1);
								iLocal_993 = 1;
							}
						}
					}
				}
			}
			if (bLocal_930)
			{
				func_289(&uLocal_185, 2, 1);
				func_288("CBH_SWITCH");
				if (func_268(&uLocal_185, 0, 1))
				{
					func_266(&Local_81, 0, 0);
					uLocal_185.f_7 = 2;
					Local_170.f_C = uLocal_185[2];
					HUD::CLEAR_HELP(1);
					bLocal_931 = true;
				}
			}
			if (bLocal_931)
			{
				if (func_243(&Local_170, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
				{
					if ((Local_170.f_12 && !Local_170.f_13) && uLocal_185.f_7 == 2)
					{
						func_88(&uLocal_185, 1, 1, 0);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_230, AUDIO::GET_RADIO_STATION_NAME(6));
						AUDIO::SET_INITIAL_PLAYER_STATION(AUDIO::GET_RADIO_STATION_NAME(6));
						RECORDING::_0x293220DA1B46CEBC(3f, 12f, 4);
					}
				}
				else
				{
					AUDIO::_0xB542DE8C3D1CB210(1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_230, 0);
					iLocal_143 = 0;
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_TREVOR_DRIVES_OFF"))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_230, 0);
						AUDIO::STOP_AUDIO_SCENE("PS_1_TREVOR_DRIVES_OFF");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_RACE_AS_MICHAEL"))
					{
						AUDIO::STOP_AUDIO_SCENE("PS_1_RACE_AS_MICHAEL");
					}
					AUDIO::START_AUDIO_SCENE("PS_1_RACE_AS_TREVOR");
					if (!PED::IS_PED_INJURED(uLocal_185[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_185[0], iLocal_62, 0))
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_185[0], iLocal_62, -1, -1, 2f, 1, 0);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_50))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_62, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_50, iLocal_62, 0);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_230))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_230, 1) || PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_230))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
					}
					func_242(714, 1, 0);
					Local_170.f_13 = 1;
					Local_170.f_C = 0;
					bLocal_930 = false;
					iLocal_926 = 0;
					iLocal_927 = iLocal_230;
					iLocal_928 = iLocal_62;
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					HUD::REMOVE_BLIP(&uLocal_58);
				}
			}
			else
			{
				if (SYSTEM::TIMERA() > 20000 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_185[2], 1)) > 10000f)
				{
					bLocal_930 = false;
				}
				if (!iLocal_994)
				{
					if (((SYSTEM::TIMERA() > 10000 && ENTITY::DOES_ENTITY_EXIST(uLocal_185[2])) && PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_230, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_185[2], 1)) < SYSTEM::POW(30f, 2f))
					{
						if (func_6(&Local_232, cLocal_167, "RBS1_TRE1", 8, 0, 0, 0))
						{
							iLocal_994 = 1;
						}
					}
				}
			}
			if ((((!bLocal_930 && !bLocal_932) && !PED::IS_PED_INJURED(uLocal_185[iLocal_926])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_928, 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_928, 1, 1, 0, 1, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_185[iLocal_926], 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uLocal_185[iLocal_926], 1);
				func_241(&uLocal_311, 10, "RBsetup");
				func_241(&uLocal_612, 11, "RBsetup");
				if (func_176() == 2)
				{
					AUDIO::_0xD2DCCD8E16E20997(iLocal_230);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_62, 1);
					func_240(&iLocal_941, 11, "RBsetup", &uLocal_612);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_62, 0);
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_230, 0);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_230, 1);
					func_240(&iLocal_962, 10, "RBsetup", &uLocal_311);
				}
				AUDIO::SET_HORN_ENABLED(iLocal_928, 0);
				bLocal_932 = true;
			}
			if (!PED::IS_PED_INJURED(uLocal_185[iLocal_926]))
			{
				if (bLocal_932)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (func_176() == 2)
					{
						iLocal_991 = 0;
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 3);
						AUDIO::_0xD2DCCD8E16E20997(iLocal_230);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_230, 1);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
						{
							VEHICLE::SET_VEHICLE_STRONG(iLocal_62, 1);
							ENTITY::SET_ENTITY_PROOFS(iLocal_62, 0, 1, 1, 0, 0, 0, 0, 0);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_62, 0);
						}
						iLocal_149 = 5;
					}
					else
					{
						iLocal_149 = 4;
					}
					AUDIO::TRIGGER_MUSIC_EVENT("RH1_RACE");
					PED::SET_PED_CAN_SWITCH_WEAPON(uLocal_185[iLocal_926], 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_185[iLocal_926], 1);
					HUD::CLEAR_HELP(1);
					SYSTEM::SETTIMERA(0);
				}
			}
			break;
		
		case 4:
			func_20();
			if ((!PED::IS_PED_INJURED(uLocal_185[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
			{
				if (iLocal_143)
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_230, 1))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_230, 0);
						iLocal_143 = 0;
					}
				}
				if (!iLocal_991)
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0) && iLocal_926 == 2) && !PED::IS_PED_INJURED(uLocal_185[iLocal_926]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[iLocal_926], 242628503) != 1 && PED::IS_PED_IN_VEHICLE(uLocal_185[iLocal_926], iLocal_230, 0))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_185[iLocal_926], 1);
							TASK::OPEN_SEQUENCE_TASK(&uVar4);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_230, -91.8094f, 6431.147f, 30.3459f, 15f, 0, joaat("ruffian"), 786603, 3f, 20f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_230, -127.9359f, 6405.864f, 30.4238f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_230, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::CLOSE_SEQUENCE_TASK(uVar4);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_185[2], uVar4);
							TASK::CLEAR_SEQUENCE_TASK(&uVar4);
							iLocal_991 = 1;
						}
						if ((!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_TREVOR_DRIVES_OFF") && !PED::IS_PED_IN_VEHICLE(uLocal_185[iLocal_926], iLocal_230, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_185[iLocal_926], 1), ENTITY::GET_ENTITY_COORDS(iLocal_230, 1)) < 4f)
						{
							AUDIO::START_AUDIO_SCENE("PS_1_TREVOR_DRIVES_OFF");
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_230, "PS_1_TREVOR_BIKE", 0);
						}
					}
				}
				else if (!iLocal_992)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[2], 242628503) == 1 && PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_230, 0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_185[2], -90.50787f, 6423.877f, 30.38944f, -103.0677f, 6409.822f, 35.4915f, 41.5f, 0, 1, 0))
						{
							TASK::CLEAR_PED_TASKS(uLocal_185[2]);
							TASK::OPEN_SEQUENCE_TASK(&uVar5);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_230, -120.4565f, 6413.602f, 30.3924f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_230, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::CLOSE_SEQUENCE_TASK(uVar5);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_185[2], uVar5);
							TASK::CLEAR_SEQUENCE_TASK(&uVar5);
							iLocal_992 = 1;
						}
					}
				}
				if ((((!iLocal_990 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)) && !func_43()) && SYSTEM::TIMERA() > 1000)
				{
					HUD::CLEAR_PRINTS();
					sLocal_169 = "RBS1_BANT1";
					func_85("CBH_RACEM", 7500, 1);
					SYSTEM::SETTIMERA(0);
					iLocal_990 = 1;
				}
				if (iLocal_990 && SYSTEM::TIMERA() > 7500)
				{
					func_235();
				}
				if (!iLocal_993)
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_230, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_230) && (!ENTITY::IS_ENTITY_AT_COORD(iLocal_230, Local_97, 40f, 40f, 40f, 0, 1, 0) || TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[2], 242628503) != 1))
						{
							TASK::CLEAR_PED_TASKS(uLocal_185[2]);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_230, 11, "RBsetup", 10f, 786469);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_185[iLocal_926], 1);
							iLocal_993 = 1;
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_53))
					{
						uLocal_53 = func_44(Local_925, 0);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_54))
					{
						HUD::REMOVE_BLIP(&uLocal_54);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_53))
					{
						HUD::REMOVE_BLIP(&uLocal_53);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_54))
					{
						uLocal_54 = func_40(iLocal_62, 0, 0);
					}
				}
				if (!bLocal_921)
				{
					func_230(uLocal_185[2], iLocal_230, 11, "RBsetup", &uLocal_612, 0, 0f);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_185[2], Local_922, Local_923, fLocal_924, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0))
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_230, 1, 0);
						}
						bLocal_921 = true;
					}
					fVar6 = func_228(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 11, "RBsetup", &uLocal_612);
					if (fVar6 > fLocal_913)
					{
						if (func_97(38))
						{
							func_756(38, 0);
						}
						if (!func_97(37))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_925) < SYSTEM::POW(100f, 2f))
							{
								func_756(37, 1);
							}
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_925) > SYSTEM::POW(120f, 2f))
						{
							func_756(37, 0);
						}
					}
					else
					{
						if (func_97(37))
						{
							func_756(37, 0);
						}
						if (!func_97(38))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_925) < SYSTEM::POW(100f, 2f))
							{
								func_756(38, 1);
							}
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_925) > SYSTEM::POW(120f, 2f))
						{
							func_756(38, 0);
						}
					}
				}
				else
				{
					if (func_97(37))
					{
						func_756(37, 0);
					}
					if (!func_97(38))
					{
						func_756(38, 1);
					}
					func_227();
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_922, Local_923, fLocal_924, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_50) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 10000f)
					{
						func_46();
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_230) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_230))
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_230, 786469);
						}
						iLocal_149 = 6;
					}
				}
				if (func_83(iLocal_50, &Local_247))
				{
					func_87("CBH_LLEFT");
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(uLocal_185[0]))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_53))
				{
					fLocal_914 = func_228(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 11, "RBsetup", &uLocal_612);
					func_226(&iLocal_941, &iLocal_989, fLocal_914);
				}
				fVar7 = func_228(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10, "RBsetup", &uLocal_311);
				if (!iLocal_994)
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_185[0], iLocal_62, 0))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_185[0], 1)) < SYSTEM::POW(30f, 2f))
						{
							if (func_6(&Local_232, cLocal_167, "RBS1_ASSHLEM", 8, 0, 0, 0))
							{
								iLocal_994 = 1;
							}
						}
						else
						{
							iLocal_994 = 1;
						}
					}
				}
				if (((!iLocal_990 && iLocal_994) && !func_43()) && SYSTEM::TIMERA() > 1000)
				{
					HUD::CLEAR_PRINTS();
					sLocal_169 = "RBS1_BANT2";
					func_225(&Local_232, 0);
					func_224(&Local_232, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					func_85("CBH_RACET", 7500, 1);
					iLocal_990 = 1;
					SYSTEM::SETTIMERA(0);
				}
				if (iLocal_990 && SYSTEM::TIMERA() > 7500)
				{
					func_235();
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_62, 0);
					if (PED::IS_PED_IN_VEHICLE(uLocal_185[0], iLocal_62, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_62))
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_62, Local_97, 40f, 40f, 40f, 0, 1, 0))
							{
								TASK::CLEAR_PED_TASKS(uLocal_185[0]);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_62, 10, "RBsetup", 10f, 786469);
							}
							else if (!iLocal_991)
							{
								if ((!PED::IS_PED_INJURED(uLocal_185[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0)) && PED::IS_PED_IN_VEHICLE(uLocal_185[0], iLocal_62, 0))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_62, -85.30544f, 6422.383f, 30.48431f, -102.2567f, 6405.208f, 34.74021f, 7.5f, 0, 1, 0))
									{
										Var8 = { Vector(30.48431f, 6422.383f, -85.30544f) - Vector(34.74021f, 6405.208f, -102.2567f) };
										Var8.f_2 = 0f;
										Var9 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_62) };
										if (MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var8.x, Var8.f_1, Var9.x, Var9.f_1)) < 90f)
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_62, -83.4558f, 6424.933f, 30.4905f, 10f, 0, joaat("premier"), 262144, 2f, 20f);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_62, -88.8696f, 6432.077f, 30.4084f, 10f, 0, joaat("premier"), 786469, 10f, 100f);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_62, -132.3165f, 6403.165f, 30.4015f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_62, -412.9446f, 6128.729f, 30.2517f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
											TASK::TASK_PERFORM_SEQUENCE(uLocal_185[0], uLocal_74);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
										}
										else
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_185[0], iLocal_62, -412.9446f, 6128.729f, 30.2517f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
										}
									}
									else
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_185[0], iLocal_62, -412.9446f, 6128.729f, 30.2517f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
									}
									iLocal_991 = 1;
									PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uLocal_185[0], 0);
								}
							}
						}
					}
				}
				if (!bLocal_921)
				{
					func_230(uLocal_185[0], iLocal_62, 10, "RBsetup", &uLocal_311, 1, fVar7);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_185[0], Local_922, Local_923, fLocal_924, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_62, 1, 0);
						}
						bLocal_921 = true;
					}
					if (fVar7 > fLocal_913)
					{
						if (func_97(37))
						{
							func_756(37, 0);
						}
						if (!func_97(38))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_925) < SYSTEM::POW(100f, 2f))
							{
								func_756(38, 1);
							}
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_925) > SYSTEM::POW(120f, 2f))
						{
							func_756(38, 0);
						}
					}
					else
					{
						if (func_97(38))
						{
							func_756(38, 0);
						}
						if (!func_97(37))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_925) < SYSTEM::POW(100f, 2f))
							{
								func_756(37, 1);
							}
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_925) > SYSTEM::POW(120f, 2f))
						{
							func_756(37, 0);
						}
					}
				}
				else
				{
					if (func_97(38))
					{
						func_756(38, 0);
					}
					if (!func_97(37))
					{
						func_756(37, 1);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_922, Local_923, fLocal_924, 0, 1, 0))
				{
					func_46();
					SYSTEM::SETTIMERA(0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_62) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_62))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_185[0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 1000f)
						{
							TASK::CLEAR_PED_TASKS(uLocal_185[0]);
							TASK::OPEN_SEQUENCE_TASK(&uVar10);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_62, 1412.297f, 3599.638f, 33.8914f, 20f, 0, joaat("premier"), 786469, 3f, 3f);
							TASK::TASK_PAUSE(0, 10000);
							TASK::CLOSE_SEQUENCE_TASK(uVar10);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_185[0], uVar10);
							TASK::CLEAR_SEQUENCE_TASK(&uVar10);
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_62, 786469);
							PED::SET_PED_KEEP_TASK(uLocal_185[0], 1);
						}
						else
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_62, 786469);
						}
						PED::SET_PED_KEEP_TASK(uLocal_185[0], 1);
					}
					PED::SET_PED_KEEP_TASK(uLocal_185[0], 1);
					iLocal_149++;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_54))
					{
						HUD::REMOVE_BLIP(&uLocal_54);
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(uLocal_54))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						uLocal_54 = func_40(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && (!VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::GET_PLAYERS_LAST_VEHICLE()))))
				{
					HUD::REMOVE_BLIP(&uLocal_54);
				}
			}
			break;
		
		case 6:
			if (HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				HUD::REMOVE_BLIP(&uLocal_58);
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_928) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_928, 0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_928, 1f);
				ENTITY::SET_ENTITY_COLLISION(iLocal_928, 1, 0);
			}
			if (!bLocal_921)
			{
				if (func_176() == 0)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_928, Local_925, 10f, 10f, 10f, 0, 1, 0))
					{
						func_227();
					}
				}
			}
			if (!bLocal_1003)
			{
				if (!bLocal_921)
				{
					func_223(715);
					StringCopy(&Var11, "RBS1_LES4", 16);
				}
				else
				{
					StringCopy(&Var11, "RBS1_LES5", 16);
				}
				if (func_176() == 0)
				{
					if (func_6(&Local_232, cLocal_167, &Var11, 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						RECORDING::_0x293220DA1B46CEBC(10f, 4f, 4);
						bLocal_1003 = true;
					}
				}
				else if (!bLocal_921)
				{
					SYSTEM::SETTIMERA(0);
					RECORDING::_0x293220DA1B46CEBC(10f, 4f, 4);
					bLocal_1003 = true;
				}
				else if (func_6(&Local_232, cLocal_167, "RBS1_TRE5", 8, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(10f, 4f, 4);
					bLocal_1003 = true;
				}
			}
			if (!bLocal_1004)
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_925, Global_12, 1, 1, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_53))
							{
								HUD::REMOVE_BLIP(&uLocal_53);
							}
							while (!func_30(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1093140480, 1, 1056964608, 0, 1))
							{
								SYSTEM::WAIT(0);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							bLocal_1004 = true;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_922, Local_923, fLocal_924, 0, 1, 0))
				{
					bLocal_1004 = true;
				}
			}
			if (bLocal_1004)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_54))
				{
					HUD::REMOVE_BLIP(&uLocal_54);
				}
				if (bLocal_1003)
				{
					if (func_176() == 0)
					{
						if (iLocal_997 > 0)
						{
							if (!PED::IS_PED_INJURED(uLocal_185[2]))
							{
								TASK::CLEAR_PED_TASKS(uLocal_185[2]);
								Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(uLocal_185[2], 1) };
								iVar13 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, Var12.x, Var12.f_1);
								TASK::TASK_LOOK_AT_ENTITY(uLocal_185[2], PLAYER::PLAYER_PED_ID(), 1000, 2052, 4);
								TASK::OPEN_SEQUENCE_TASK(&uVar14);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(uLocal_185[2], 1), 1f, -1, 0.25f, 512, iVar13);
								TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_arrival_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar14);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_185[2], uVar14);
								TASK::CLEAR_SEQUENCE_TASK(&uVar14);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_149++;
					}
					else if (SYSTEM::TIMERA() > 3000)
					{
						iLocal_149++;
					}
				}
			}
			break;
		
		case 7:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_RACE_AS_MICHAEL"))
			{
				AUDIO::STOP_AUDIO_SCENE("PS_1_RACE_AS_MICHAEL");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_RACE_AS_TREVOR"))
			{
				AUDIO::STOP_AUDIO_SCENE("PS_1_RACE_AS_TREVOR");
			}
			if (func_176() == 0)
			{
				if (!iLocal_1005 && !PED::IS_PED_INJURED(uLocal_185[2]))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_185[2], "missheistpaletoscoresetup", "trevor_arrival_1", 3))
					{
						func_221(uLocal_185[2], "GENERIC_SHOCKED_MED", 10);
						iLocal_1005 = 1;
					}
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
			if (func_176() != 0 || SYSTEM::TIMERA() > 3500)
			{
				if (!func_43())
				{
					RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
					func_185();
				}
			}
			break;
	}
	if (iLocal_149 > 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_53))
		{
			ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_925, 1f, 1f, Global_12.f_2, 1, 1, 0);
			if (func_176() == 2)
			{
				fLocal_914 = func_228(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 11, "RBsetup", &uLocal_612);
				func_226(&iLocal_941, &iLocal_989, fLocal_914);
			}
			else
			{
				fLocal_914 = func_228(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10, "RBsetup", &uLocal_311);
				func_226(&iLocal_962, &iLocal_988, fLocal_914);
			}
		}
		else if (func_176() == 2)
		{
			func_184(&iLocal_989);
		}
		else
		{
			func_184(&iLocal_988);
		}
	}
	if (func_97(37))
	{
		GRAPHICS::DRAW_DEBUG_TEXT_2D("MIKE WIN CUTSCENE SET TO LOAD", 0f, 0.02f, 0f, 255, 0, 0, 255);
	}
	if (func_97(38))
	{
		GRAPHICS::DRAW_DEBUG_TEXT_2D("TREVOR WIN CUTSCENE SET TO LOAD", 0f, 0.04f, 0f, 255, 0, 0, 255);
	}
	if (((((ENTITY::DOES_ENTITY_EXIST(uLocal_185[iLocal_926]) && !PED::IS_PED_INJURED(uLocal_185[iLocal_926])) && PED::IS_PED_IN_ANY_VEHICLE(uLocal_185[iLocal_926], 0)) && func_18(PLAYER::PLAYER_PED_ID(), uLocal_185[iLocal_926])) || HUD::DOES_BLIP_EXIST(uLocal_54)) || iLocal_149 > 6)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_58))
		{
			HUD::REMOVE_BLIP(&uLocal_58);
		}
	}
	else
	{
		func_183(uLocal_185[iLocal_926], iLocal_928);
	}
	if (func_176() == 2)
	{
		if (func_182(iLocal_230, (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) < 0.9f)))
		{
			func_87("CBH_BNKFAILT");
		}
	}
	else if (func_182(iLocal_62, (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) < 0.9f)))
	{
		func_87("CBH_BNKFAIL");
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) > 0.7f)
		{
			if (!Local_248[0 /*9*/].f_6)
			{
				func_181(0);
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) > 0.3f)
		{
			if (!Local_248[2 /*9*/].f_6)
			{
				func_181(2);
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) > 0.37f)
		{
			if (Local_249.f_9)
			{
				Local_249.f_9 = 0;
				Local_249.f_D = 0;
				AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", 1);
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) > 0.45f)
		{
			if (!Local_248[3 /*9*/].f_6)
			{
				func_181(3);
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) > 0.8f)
		{
			if (!iLocal_259)
			{
				func_180();
			}
			if (!Local_248[3 /*9*/].f_6)
			{
				func_181(3);
			}
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(178228075) != 1)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 1, 1, 0);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, 1, 0);
			}
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1852297978) != 1)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 1, 1, 0);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, 1, 0);
			}
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(178228075, 1);
			OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(1852297978, 1);
		}
		if (!iLocal_1002)
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) > 0.828f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148))
			{
				TASK::TASK_ENTER_VEHICLE(Local_248[iLocal_153 /*9*/][1], Local_248[iLocal_153 /*9*/].f_3, -1, 0, 1f, 1, 0);
				PED::FORCE_PED_MOTION_STATE(Local_248[iLocal_153 /*9*/][1], -668482597, 0, 0, 0);
				iLocal_1002 = 1;
			}
		}
		if (!iLocal_1001)
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) > 0.828f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148))
			{
				TASK::TASK_ENTER_VEHICLE(Local_248[iLocal_153 /*9*/][0], Local_248[iLocal_153 /*9*/].f_3, -1, -1, 1f, 1, 0);
				PED::FORCE_PED_MOTION_STATE(Local_248[iLocal_153 /*9*/][1], -668482597, 0, 0, 0);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_248[iLocal_153 /*9*/].f_3, -8f, 1);
				}
				iLocal_1001 = 1;
			}
		}
	}
	else if (!Local_248[iLocal_153 /*9*/].f_6)
	{
		if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iLocal_153 /*9*/].f_3, 0) && !PED::IS_PED_INJURED(Local_248[iLocal_153 /*9*/][0])) && !PED::IS_PED_INJURED(Local_248[iLocal_153 /*9*/][1])) && PED::IS_PED_SITTING_IN_VEHICLE(Local_248[iLocal_153 /*9*/][0], Local_248[iLocal_153 /*9*/].f_3)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_248[iLocal_153 /*9*/][1], Local_248[iLocal_153 /*9*/].f_3))
		{
			func_181(1);
		}
		STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup1");
		STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup2");
		STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup3");
	}
	iVar15 = 0;
	while (iVar15 < Local_248)
	{
		if (((((ENTITY::DOES_ENTITY_EXIST(Local_248[iVar15 /*9*/].f_3) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar15 /*9*/].f_3, 0)) && !PED::IS_PED_INJURED(Local_248[iVar15 /*9*/][0])) && Local_248[iVar15 /*9*/].f_6) && PED::IS_PED_IN_VEHICLE(Local_248[iVar15 /*9*/][0], Local_248[iVar15 /*9*/].f_3, 0)) && PED::IS_PED_IN_VEHICLE(Local_248[iVar15 /*9*/][1], Local_248[iVar15 /*9*/].f_3, 0))
		{
			if ((TASK::GET_SCRIPT_TASK_STATUS(Local_248[iVar15 /*9*/][0], -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_248[iVar15 /*9*/][0], -258271821) != 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_248[iVar15 /*9*/][0], -258271821) != 2)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_248[iVar15 /*9*/].f_3, 1), 119.2184f, 6559.774f, 30.6237f) < SYSTEM::POW(250f, 2f))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_248[iVar15 /*9*/][0], Local_248[iVar15 /*9*/].f_3, 10f, 786491);
				}
			}
			if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_248[iVar15 /*9*/].f_3, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > SYSTEM::POW(100f, 2f) && ENTITY::IS_ENTITY_OCCLUDED(Local_248[iVar15 /*9*/].f_3)) && ENTITY::IS_ENTITY_OCCLUDED(Local_248[iVar15 /*9*/][0])) && ENTITY::IS_ENTITY_OCCLUDED(Local_248[iVar15 /*9*/][1]))
			{
				func_179(&(Local_248[iVar15 /*9*/]));
			}
		}
		iVar15++;
	}
	func_178();
	iVar16 = 0;
	while (iVar16 < iLocal_51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar16]))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_51[iVar16], -100.0933f, 6461.712f, 30.6267f, 3f, 3f, 3f, 0, 1, 0) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_51[iVar16]))
			{
				PED::DELETE_PED(&(iLocal_51[iVar16]));
			}
		}
		iVar16++;
	}
	if (!iLocal_995 && iLocal_149 > 3)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_112, 100f, 100f, 100f, 0, 1, 0))
		{
			iVar16 = 0;
			while (iVar16 < iLocal_51)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar16]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_51[iVar16]));
				}
				iVar16++;
			}
			iVar16 = 0;
			while (iVar16 < Local_248)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_248[iVar16 /*9*/][0]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_248[iVar16 /*9*/][0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_248[iVar16 /*9*/][1]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_248[iVar16 /*9*/][1]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_248[iVar16 /*9*/].f_3))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_248[iVar16 /*9*/].f_3));
				}
				iVar16++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_229))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_229);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_business_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_business_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sheriff"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_genstreet_02"));
			STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup1");
			STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup2");
			STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup3");
			iLocal_995 = 1;
		}
	}
}

void func_178()//Position - 0xF7AB
{
	if (func_176() == 0)
	{
		if ((PED::IS_PED_INJURED(uLocal_185[2]) || ENTITY::IS_ENTITY_DEAD(uLocal_185[2])) || FIRE::IS_ENTITY_ON_FIRE(uLocal_185[2]))
		{
			func_87("CMN_TDIED");
		}
		if ((PED::IS_PED_INJURED(iLocal_50) || ENTITY::IS_ENTITY_DEAD(iLocal_50)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_50))
		{
			func_87("CBH_LESTDED");
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) || ENTITY::IS_ENTITY_DEAD(iLocal_62))
		{
			func_87("CMN_GENDEST");
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			func_87("CBH_COPFAIL");
		}
	}
	if (func_176() == 2)
	{
		if ((PED::IS_PED_INJURED(uLocal_185[0]) || ENTITY::IS_ENTITY_DEAD(uLocal_185[0])) || FIRE::IS_ENTITY_ON_FIRE(uLocal_185[0]))
		{
			func_87("CMN_MDIED");
		}
		if ((PED::IS_PED_INJURED(iLocal_50) || ENTITY::IS_ENTITY_DEAD(iLocal_50)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_50))
		{
			func_87("CBH_LESTDED");
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			func_87("CBH_COPFAILT");
		}
	}
}

void func_179(var uParam0)//Position - 0xF8C0
{
	int iVar0;
	
	if (uParam0->f_5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
			{
				PED::DELETE_PED(uParam0[iVar0]);
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		{
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_3));
		}
		uParam0->f_5 = 0;
	}
}

void func_180()//Position - 0xF915
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar0]) && !PED::IS_PED_INJURED(iLocal_51[iVar0]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_51[iVar0], 713668775) != 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_51[iVar0], -100.5008f, 6461.73f, 30.6343f, 1f, -1, 0.25f, 0, 1193033728);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_51[iVar0], -100.5008f, 6461.73f, 30.6343f, 2f, 2f, 3f, 0, 1, 0))
			{
				PED::DELETE_PED(&(iLocal_51[iVar0]));
			}
		}
		iVar0++;
	}
	iLocal_259 = 1;
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(178228075) != 1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 1, 1, 0);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1852297978) != 1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 1, 1, 0);
	}
}

void func_181(int iParam0)//Position - 0xFA09
{
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iParam0 /*9*/].f_3, 0) && !PED::IS_PED_INJURED(Local_248[iParam0 /*9*/][0])) && !PED::IS_PED_INJURED(Local_248[iParam0 /*9*/][1]))
	{
		if (PED::IS_PED_IN_VEHICLE(Local_248[iParam0 /*9*/][0], Local_248[iParam0 /*9*/].f_3, 0))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_248[iParam0 /*9*/][0], Local_248[iParam0 /*9*/].f_3, 119.2184f, 6559.774f, 30.6237f, 15f, 0, joaat("sheriff"), 786485, 5f, 5f);
		}
		Local_248[iParam0 /*9*/].f_6 = 1;
	}
}

int func_182(int iParam0, bool bParam1)//Position - 0xFAA6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_248)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_248[iVar1 /*9*/][iVar2]))
			{
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_248[iVar1 /*9*/][iVar2], PLAYER::PLAYER_PED_ID(), 1) || (!PED::IS_PED_INJURED(Local_248[iVar1 /*9*/][iVar2]) && PED::IS_PED_IN_MELEE_COMBAT(Local_248[iVar1 /*9*/][iVar2]))) || (!PED::IS_PED_INJURED(Local_248[iVar1 /*9*/][iVar2]) && PED::IS_PED_BEING_STEALTH_KILLED(Local_248[iVar1 /*9*/][iVar2])))
				{
					iVar0 = 1;
				}
			}
			iVar2++;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar1 /*9*/].f_3, 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_164, Local_165, fLocal_166, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_248[iVar1 /*9*/].f_3, 5f, 5f, 5f, 0, 1, 0))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Local_248[iVar1 /*9*/].f_3))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[iVar1 /*9*/].f_3))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_248[iVar1 /*9*/].f_3);
							}
							if (iVar1 == iLocal_153 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_248[iLocal_153 /*9*/].f_3, 1f, 1);
							}
							iVar0 = 1;
						}
					}
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_248[iVar1 /*9*/].f_3, 0))
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < iLocal_51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51[iVar1], PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = 1;
			}
			if (!PED::IS_PED_INJURED(iLocal_51[iVar1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_51[iVar1], iParam0))
					{
						iVar0 = 1;
					}
				}
			}
		}
		iVar1++;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -138.9828f, 6475.819f, 51.22334f, -90.29582f, 6426.385f, 1.471224f, 77.75f, 0, 1, 0))
	{
		iVar0 = 1;
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(3, Local_112, 100f) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0) && FIRE::IS_ENTITY_ON_FIRE(iLocal_230)))
	{
		iVar0 = 1;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(77, Local_112, 15f))
	{
		iVar0 = 1;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -126.4656f, 6476.683f, 30.46826f, -103.3576f, 6453.125f, 37.21962f, 29.5f, 0, 1, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -126.4656f, 6476.683f, 30.46826f, -103.3576f, 6453.125f, 37.21962f, 29.5f, 0, 1, 0)))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_183(int iParam0, int iParam1)//Position - 0xFD73
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_58))
		{
			if (iLocal_1000)
			{
				if (!PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
				{
					HUD::SET_BLIP_SCALE(uLocal_58, 0.7f);
					iLocal_1000 = 0;
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
			{
				HUD::SET_BLIP_SCALE(uLocal_58, 1f);
				iLocal_1000 = 1;
			}
			Var0 = { HUD::GET_BLIP_COORDS(uLocal_58) };
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var0.x = (Var0.x + ((Var1.x - Var0.x) / 10f));
			Var0.f_1 = (Var0.f_1 + ((Var1.f_1 - Var0.f_1) / 10f));
			Var0.f_2 = (Var0.f_2 + ((Var1.f_2 - Var0.f_2) / 10f));
			HUD::SET_BLIP_COORDS(uLocal_58, Var0);
		}
		else
		{
			uLocal_58 = func_44(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 0);
			HUD::SET_BLIP_COLOUR(uLocal_58, 3);
			HUD::SET_BLIP_PRIORITY(uLocal_58, 3);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_185[2]))
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_58, "CBH_BLIPTREV");
			}
			else
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_58, "CBH_BLIPMIKE");
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_58))
	{
		HUD::REMOVE_BLIP(&uLocal_58);
	}
}

void func_184(int iParam0)//Position - 0xFE8A
{
	if (*iParam0 != -1)
	{
		HUD::CLEAR_GPS_MULTI_ROUTE();
		*iParam0 = -1;
	}
}

void func_185()//Position - 0xFEA1
{
	func_86();
	func_219(1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0) && (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_230, 1), Local_101) < 2500f || func_176() == 0))
	{
		if (VEHICLE::IS_BIG_VEHICLE(iLocal_230))
		{
			func_186(iLocal_230, 1422.663f, 3614.979f, 33.9476f, 46.7525f, 24, 0);
		}
		else
		{
			func_186(iLocal_230, 1405.848f, 3598.6f, 34.4038f, 49.567f, 24, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
	{
		Global_15350.f_9[0] = iLocal_50;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		Global_15350[0] = iLocal_62;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_230))
	{
		Global_15350[1] = iLocal_230;
	}
	func_753();
}

void func_186(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0xFF81
{
	struct<54> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[25], 0))
			{
				if (Global_10642.f_1E4[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_218(iParam3);
		Var0.f_9 = 25;
		Var0.f_23 = 2;
		func_214(iParam0, &Var0);
		if (func_31(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_10A06 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_207(iParam3, Var0, Param1, fParam2, func_213(iParam0));
		func_187(iParam3, iParam0, 0);
	}
}

void func_187(int iParam0, int iParam1, int iParam2)//Position - 0x100AD
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_204(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 10))
	{
		if (Global_10642.f_22B[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_109CD != -1 && Global_109CD != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_17C49.f_47C3.f_1099 = func_109();
			}
			if (iParam1 != Global_10642.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_203(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_188(iVar0, 145);
					}
				}
				Global_109CC = iParam1;
				Global_109CD = iParam0;
				Global_109CE = iParam2;
			}
		}
	}
}

void func_188(int iParam0, int iParam1)//Position - 0x101CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_189(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_17C49.f_6C1.f_21B.f_C8D;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_17C49.f_47C3.f_113E[iVar1 /*109*/][iVar2 /*54*/].f_2A)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17C49.f_47C3.f_113E[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_17C49.f_47C3.f_113E[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_17C49.f_47C3.f_113E[iVar1 /*109*/][iVar2 /*54*/].f_2A = 0;
						Global_17C49.f_47C3.f_12C0[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_17C49.f_47C3.f_12C8[iVar1 /*54*/].f_2A)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17C49.f_47C3.f_12C8[iVar1 /*54*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_17C49.f_47C3.f_12C8[iVar1 /*54*/].f_1)))
				{
					Global_17C49.f_47C3.f_12C8[iVar1 /*54*/].f_2A = 0;
				}
			}
		}
		iVar1++;
	}
	Global_17C49.f_47C3.f_12BE = iParam1;
	Global_109CB = iParam0;
	Global_17C49.f_47C3.f_12BC = 1;
	func_214(iParam0, &(Global_17C49.f_47C3.f_1286));
}

int func_189(int iParam0)//Position - 0x103CB
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_201(iParam0, 0, 0)) || func_201(iParam0, 1, 0)) || func_201(iParam0, 2, 0)) || func_213(iParam0) != 145) || func_200(iParam0)) || func_199(iParam0)) || func_198(iParam0)) || func_197(iParam0)) || !func_190(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_199(iParam0))
		{
		}
		if (func_199(iParam0))
		{
		}
		if (func_201(iParam0, 0, 0))
		{
		}
		if (func_201(iParam0, 1, 0))
		{
		}
		if (func_201(iParam0, 2, 0))
		{
		}
		if (func_213(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_190(int iParam0)//Position - 0x104A8
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_191(iParam0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_191(int iParam0)//Position - 0x10658
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_196())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_195() && !func_194()) && !func_193()) && !func_192()) && !func_196())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_193())
		{
			return 0;
		}
	}
	return 1;
}

int func_192()//Position - 0x10827
{
	return 0;
}

int func_193()//Position - 0x10830
{
	return 1;
}

int func_194()//Position - 0x10839
{
	return 1;
}

int func_195()//Position - 0x10842
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_196()//Position - 0x1085B
{
	var uVar0;
	
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_29C.f_2AB, 7))
		{
			return 1;
		}
	}
	if (Global_20258 == 2)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_197(int iParam0)//Position - 0x108DE
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_191(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)//Position - 0x10923
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_156B0[iVar0]))
		{
			if (Global_156B0[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_199(int iParam0)//Position - 0x1095E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_15692[iVar0], 0))
			{
				if (Global_15692[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_15692[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_200(int iParam0)//Position - 0x109DA
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[24]))
	{
		if (iParam0 == Global_10642.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_10642.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_201(int iParam0, int iParam1, bool bParam2)//Position - 0x10AC2
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_202(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_17C49.f_156E[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_202(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x10B33
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_203(int iParam0)//Position - 0x10C0B
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_10642.f_8B[iParam0];
}

int func_204(var uParam0, int iParam1)//Position - 0x10C27
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 145;
	uParam0->f_D = -1;
	uParam0->f_E = 0;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_205(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_205(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_205(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_205(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_205(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_205(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_205(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_205(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_205(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_E = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_E = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 1;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_E = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 2;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_E = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_E = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 1;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_E = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 2;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_E = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0;
			uParam0->f_D = 360;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_E = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 1;
			uParam0->f_D = 360;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_E = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 2;
			uParam0->f_D = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_E = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 0;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_E = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 1;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_E = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 2;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_E = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_E = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_E = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_E = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_E = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_A = 126;
			uParam0->f_B = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_A = 157;
			uParam0->f_B = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_D = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_196())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_196())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_17C49.f_47C3.f_45[uParam0->f_E /*54*/].f_2A;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_31(Global_17C49.f_47C3.f_520[uParam0->f_E /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_47C3.f_520[uParam0->f_E /*3*/] };
		}
		if (Global_17C49.f_47C3.f_566[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_17C49.f_47C3.f_566[uParam0->f_E];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_31(Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[1 /*4*/][uParam0->f_C];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_31(Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_205(int iParam0, int iParam1)//Position - 0x1231B
{
	struct<58> Var0;
	
	if (func_146(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 25;
		Var0.f_39 = 2;
		func_206(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_206(int iParam0, var uParam1, int iParam2)//Position - 0x1235D
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_B = 12;
	Var1.f_1F = 25;
	Var1.f_39 = 2;
	Var1.f_40 = 1;
	Var1.f_3C = 255;
	Var1.f_3D = 255;
	Var1.f_3E = 255;
	Var1.f_49 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_17C49.f_1CAD.f_63.f_3A[128] && !Global_17C49.f_1CAD.f_63.f_3A[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_B[0] = 1;
					StringCopy(&(Var1.f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_1B), "BETTY 32", 16);
					if (Global_17C49.f_1CAD.f_63.f_3A[119])
					{
						Var1.f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_17C49.f_1CAD.f_63.f_3A[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					Var1 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_A = 1;
					StringCopy(&(Var1.f_1B), "FC1988", 16);
					Var1.f_B[0] = 1;
					Var1.f_B[1] = 1;
					Var1.f_B[2] = 1;
					Var1.f_B[3] = 1;
					Var1.f_B[4] = 1;
					Var1.f_B[5] = 1;
					Var1.f_B[6] = 1;
					Var1.f_B[7] = 1;
					Var1.f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

void func_207(int iParam0, struct<54> Param1, struct<3> Param2, var uParam3, int iParam4)//Position - 0x125D5
{
	if (func_204(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 10))
		{
			func_212(iParam0);
			func_211(Param1, &(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/]));
			if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 11))
			{
				Global_17C49.f_47C3.f_520[Global_10642.f_22B[0 /*21*/].f_E /*3*/] = { Param2 };
				Global_17C49.f_47C3.f_566[Global_10642.f_22B[0 /*21*/].f_E] = uParam3;
			}
			else
			{
				Global_17C49.f_47C3.f_520[Global_10642.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_17C49.f_47C3.f_566[Global_10642.f_22B[0 /*21*/].f_E] = -1f;
			}
			Global_17C49.f_47C3.f_57E[Global_10642.f_22B[0 /*21*/].f_E] = iParam4 + 1;
			func_208(iParam0, 1);
		}
	}
}

void func_208(int iParam0, bool bParam1)//Position - 0x126D7
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_210(iParam0, 0))
		{
			func_209(iParam0, 1, 0);
			func_209(iParam0, 2, 0);
			func_209(iParam0, 3, 0);
			func_209(iParam0, 4, 0);
			func_209(iParam0, 0, 1);
			Global_10642[iParam0] = 1;
		}
	}
	else
	{
		func_209(iParam0, 0, 0);
	}
}

void func_209(int iParam0, int iParam1, bool bParam2)//Position - 0x12734
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_17C49.f_47C3[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_47C3[iParam0]), iParam1);
	}
}

bool func_210(int iParam0, int iParam1)//Position - 0x1276F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_47C3[iParam0], iParam1);
}

void func_211(struct<54> Param0, var uParam1)//Position - 0x12792
{
	uParam1->f_2A = Param0.f_2A;
	*uParam1 = Param0;
	uParam1->f_1 = { Param0.f_1 };
	uParam1->f_5 = Param0.f_5;
	uParam1->f_6 = Param0.f_6;
	uParam1->f_7 = Param0.f_7;
	uParam1->f_8 = Param0.f_8;
	uParam1->f_9 = { Param0.f_9 };
	uParam1->f_23 = { Param0.f_23 };
	uParam1->f_26 = Param0.f_26;
	uParam1->f_27 = Param0.f_27;
	uParam1->f_28 = Param0.f_28;
	uParam1->f_29 = Param0.f_29;
	uParam1->f_35 = Param0.f_35;
	uParam1->f_2B = Param0.f_2B;
	uParam1->f_2D = Param0.f_2D;
	uParam1->f_2C = Param0.f_2C;
	uParam1->f_2F = Param0.f_2F;
	uParam1->f_30 = Param0.f_30;
	uParam1->f_31 = Param0.f_31;
	uParam1->f_32 = Param0.f_32;
	uParam1->f_33 = Param0.f_33;
	uParam1->f_34 = Param0.f_34;
}

void func_212(int iParam0)//Position - 0x1285D
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_204(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_8B[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_10642.f_8B[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_10642.f_8B[iParam0]));
			Global_10642.f_8B[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 13))
		{
			func_208(iParam0, 0);
		}
	}
}

int func_213(int iParam0)//Position - 0x128D7
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			if (Global_15692[iVar0] == iParam0)
			{
				return Global_1569C[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_214(int iParam0, var uParam1)//Position - 0x1293A
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_217(uParam1);
		uParam1->f_2A = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_26), &(uParam1->f_27), &(uParam1->f_28));
		uParam1->f_29 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_2B = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_2D = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_2E = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_2F), &(uParam1->f_30), &(uParam1->f_31));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_32), &(uParam1->f_33), &(uParam1->f_34));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_35), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_35), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_35), 31);
		}
		if (uParam1->f_29 == -1 && uParam1->f_2A != joaat("granger"))
		{
			uParam1->f_29 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_2C = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_2A))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 2:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_35), 23);
						MISC::SET_BIT(&(uParam1->f_35), 22);
						break;
					
					case 3:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_35), 23);
						MISC::CLEAR_BIT(&(uParam1->f_35), 22);
						break;
					
					case 4:
						MISC::SET_BIT(&(uParam1->f_35), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_35), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_2F), &(uParam1->f_30), &(uParam1->f_31));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 12);
		}
		func_216(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_35), func_215(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_35), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_35), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_35), 27);
		}
	}
}

int func_215(int iParam0)//Position - 0x12BE6
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_216(int iParam0, var uParam1, var uParam2)//Position - 0x12C96
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_217(var uParam0)//Position - 0x12D70
{
	int iVar0;
	
	uParam0->f_2A = 0;
	uParam0->f_35 = 0;
	uParam0->f_29 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	uParam0->f_32 = 0;
	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_23[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_2B = 0;
	uParam0->f_2C = 0;
	uParam0->f_2D = 0;
	uParam0->f_2E = 1;
	uParam0->f_2F = 0;
	uParam0->f_30 = 0;
	uParam0->f_31 = 0;
}

void func_218(int iParam0)//Position - 0x12E20
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_212(iParam0);
	func_208(iParam0, 0);
}

void func_219(bool bParam0, int iParam1)//Position - 0x12E47
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_D5E0)
	{
		Global_D5E0 = iParam1;
	}
	if (bParam0)
	{
		if ((func_174(0) && Global_10B8B.f_1 == 1) && func_220(Global_10B8B))
		{
		}
		else
		{
			Global_D5DE = 1;
		}
	}
	if (Global_17C49.f_1CAD || func_174(0))
	{
		iVar0 = func_173();
		iVar1 = Global_13CDF[iVar0 /*5*/];
		uVar2 = Global_10BA2.f_6D[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_17C49.f_1CAD)
			{
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_10B8D, 1);
		Global_10B9D = uVar2;
		Global_10B9E = MISC::GET_GAME_TIMER();
	}
}

int func_220(int iParam0)//Position - 0x12F1D
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_221(int iParam0, char* sParam1, int iParam2)//Position - 0x12F5B
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_222(iParam2), 1);
}

int func_222(int iParam0)//Position - 0x12F72
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_223(int iParam0)//Position - 0x13167
{
	bool bVar0;
	int iVar1;
	
	Global_D5DF = 0;
	if (!Global_D6BF[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1051D)
	{
		if (Global_1051E[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_1051E[iVar1 /*9*/].f_1 = 1;
			Global_1051E[iVar1 /*9*/].f_2 = 0f;
			if (Global_1051E[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_224(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x131D8
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_10A95)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_225(var uParam0, int iParam1)//Position - 0x13273
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_226(int iParam0, int iParam1, float fParam2)//Position - 0x13290
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = (*iParam0 - 1);
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (fParam2 <= (iParam0[iVar0 /*5*/])->f_3 && iVar1 == (*iParam0 - 1))
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (*iParam1 != iVar1)
	{
		if ((*iParam1 >= 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *(iParam0[*iParam1 /*5*/])) > 100f) || *iParam1 == -1)
		{
			HUD::CLEAR_GPS_MULTI_ROUTE();
			HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
			iVar0 = iVar1;
			while (iVar0 <= (*iParam0 - 1))
			{
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(iParam0[iVar0 /*5*/]));
				iVar0++;
			}
			HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
		}
		*iParam1 = iVar1;
	}
}

void func_227()//Position - 0x1334A
{
	var uVar0;
	
	if (iLocal_997 < 3 && iLocal_997 > 0)
	{
		if ((!CAM::IS_SPHERE_VISIBLE(1405.935f, 3589.429f, 33.9496f, 15f) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_185[2], 1)) > 22500f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_185[2], 1)) > 5625f)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_230, 1405.848f, 3598.6f, 34.4038f, 0, 0, 1);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_230, 0.0483f, -0.1174f, 0.4164f, 0.9003f);
			ENTITY::SET_ENTITY_COORDS(uLocal_185[2], 1404.87f, 3597.943f, 34.894f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(uLocal_185[2], 135f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_230);
			iLocal_997 = 3;
		}
	}
	switch (iLocal_997)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup"))
			{
				if (!PED::IS_PED_INJURED(uLocal_185[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_230))
				{
					TASK::TASK_VEHICLE_PARK(uLocal_185[2], iLocal_230, 1405.848f, 3598.6f, 34.4038f, 49.567f, 1, 90f, 0);
					iLocal_997++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(uLocal_185[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_230))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[2], -272084098) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_230, ENTITY::GET_ENTITY_COORDS(iLocal_230, 1), 5, 1f, 786469, 10f, 10f, 1);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_230, 131072);
					TASK::TASK_ACHIEVE_HEADING(0, 135f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_185[2], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_997++;
				}
			}
			break;
		
		case 2:
			if ((!PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_230, 0) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[2], 242628503) != 1) && ENTITY::GET_ENTITY_SPEED(iLocal_230) < 0.1f)
			{
				iLocal_997++;
			}
			break;
		
		case 3:
			if (iLocal_996 > 1)
			{
				if (!PED::IS_PED_FACING_PED(uLocal_185[2], PLAYER::PLAYER_PED_ID(), 60f))
				{
					iLocal_996 = 0;
				}
			}
			switch (iLocal_996)
			{
				case 0:
					TASK::CLEAR_PED_TASKS(uLocal_185[2]);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_185[2], PLAYER::PLAYER_PED_ID(), -1, 2064, 4);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_185[2], PLAYER::PLAYER_PED_ID(), -1, 16, 2);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_998);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_998);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_185[2], uLocal_998);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_998);
					iLocal_996++;
					break;
				
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[2], 242628503) != 1)
					{
						iLocal_996++;
					}
					break;
				
				case 2:
					TASK::OPEN_SEQUENCE_TASK(&uLocal_999);
					TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_impatient_wait_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_impatient_wait_2", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_impatient_wait_3", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_impatient_wait_4", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_999);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_185[2], uLocal_999);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_999);
					iLocal_996++;
					break;
			}
			break;
	}
}

float func_228(struct<3> Param0, int iParam1, char* sParam2, var uParam3)//Position - 0x136EC
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	struct<3> Var13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	bool bVar17;
	float fVar18;
	float fVar19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2) && iParam1 > 0)
	{
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
		{
			iVar2[0] = 99;
			iVar2[1] = 98;
			iVar2[2] = 97;
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				fVar3 = MISC::ABSF((Param0.x - (*uParam3)[iVar0 /*3*/]));
				fVar4 = MISC::ABSF((Param0.f_1 - (uParam3[iVar0 /*3*/])->f_1));
				fVar5 = (fVar3 + fVar4);
				fVar6 = 0f;
				iVar7 = 0;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					if (iVar0 != iVar2[iVar1])
					{
						fVar8 = MISC::ABSF((Param0.x - (*uParam3)[iVar2[iVar1] /*3*/]));
						fVar9 = MISC::ABSF((Param0.f_1 - (uParam3[iVar2[iVar1] /*3*/])->f_1));
						fVar10 = (fVar8 + fVar9);
						if (fVar10 > fVar6)
						{
							iVar7 = iVar1;
							fVar6 = fVar10;
						}
					}
					iVar1++;
				}
				if (fVar5 < fVar6)
				{
					iVar2[iVar7] = iVar0;
				}
				iVar0++;
			}
			fVar11 = 999999f;
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 0)
				{
					Var14 = { MISC::_0x21C235BC64831E5A(Param0, *(uParam3[iVar2[iVar0] /*3*/]), *(uParam3[(iVar2[iVar0] - 1) /*3*/]), 1) };
				}
				else
				{
					Var14 = { *(uParam3[0 /*3*/]) };
				}
				if (iVar2[iVar0] < (*uParam3 - 2))
				{
					Var15 = { MISC::_0x21C235BC64831E5A(Param0, *(uParam3[iVar2[iVar0] /*3*/]), *(uParam3[iVar2[iVar0] + 1 /*3*/]), 1) };
				}
				else
				{
					Var15 = { *(uParam3[(*uParam3 - 1) /*3*/]) };
				}
				bVar17 = false;
				if (SYSTEM::VDIST2(Param0, Var14) < SYSTEM::VDIST2(Param0, Var15))
				{
					Var16 = { Var14 };
				}
				else
				{
					bVar17 = true;
					Var16 = { Var15 };
				}
				if (SYSTEM::VDIST2(Param0, Var16) < fVar11)
				{
					if (bVar17)
					{
						iVar12 = iVar2[iVar0];
					}
					else
					{
						iVar12 = (iVar2[iVar0] - 1);
					}
					fVar11 = SYSTEM::VDIST2(Param0, Var16);
					Var13 = { Var16 };
				}
				iVar0++;
			}
			iVar12 = func_229(iVar12, 0, 98);
			fVar18 = (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2) / 99f);
			fVar19 = ((SYSTEM::VDIST(*(uParam3[iVar12 /*3*/]), Var13) / SYSTEM::VDIST(*(uParam3[iVar12 /*3*/]), *(uParam3[iVar12 + 1 /*3*/]))) * fVar18);
			return (fVar19 + (IntToFloat(iVar12) * fVar18));
		}
	}
	return -1f;
}

int func_229(int iParam0, int iParam1, int iParam2)//Position - 0x13949
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_230(int iParam0, int iParam1, int iParam2, char* sParam3, var uParam4, bool bParam5, float fParam6)//Position - 0x1396E
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		fLocal_913 = func_228(ENTITY::GET_ENTITY_COORDS(iParam1, 1), iParam2, sParam3, uParam4);
		if (func_234(iParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
			{
				TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(iParam0, 25f);
			}
			if (iLocal_916 != 262144)
			{
				iLocal_916 = 262144;
			}
		}
		else
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
			{
				TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(iParam0, VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(ENTITY::GET_ENTITY_MODEL(iParam1)));
			}
			if (iLocal_916 != 786469)
			{
				iLocal_916 = 786469;
			}
		}
		if (func_232(ENTITY::GET_ENTITY_COORDS(iParam1, 1), &Local_124))
		{
			if (fLocal_915 != 50f)
			{
				fLocal_915 = 50f;
			}
			if (iLocal_916 != 262144)
			{
				iLocal_916 = 262144;
			}
		}
		else
		{
			if (iLocal_916 != 786469)
			{
				iLocal_916 = 786469;
			}
			if (fLocal_915 != 100f)
			{
				fLocal_915 = 100f;
			}
		}
		if (iLocal_916 != iLocal_917)
		{
			if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iParam1))
			{
				VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam1, iLocal_916);
			}
			iLocal_917 = iLocal_916;
		}
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
		{
			if (!iLocal_142)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iParam1))
				{
					VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam1, iLocal_916);
				}
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fLocal_913, sParam3), -494.9343f, 4928.82f, 157.1242f, -134.4572f, 4615.544f, 124.0836f, 30.25f, 0, 1))
				{
					fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1));
					if (((fVar0 > (fLocal_915 * fLocal_915) && (fLocal_913 > 10000f || fVar0 > 10000f)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam3)) && fLocal_913 < (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam2, sParam3) - 10000f))
					{
						if ((ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_OCCLUDED(iParam1)) && !CAM::IS_SPHERE_VISIBLE(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fLocal_913, sParam3), 4f))
						{
							if (!PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
							{
								PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, -1);
							}
							ENTITY::SET_ENTITY_COLLISION(iParam1, 0, 0);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam1);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam1, iParam2, sParam3, 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam1, fLocal_913);
							iLocal_142 = 1;
						}
					}
				}
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) < ((fLocal_915 * fLocal_915) * 0.9f) || (!ENTITY::IS_ENTITY_OCCLUDED(iParam1) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < ((100f * 100f) * 1.5f)))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iParam1, 1f);
					ENTITY::SET_ENTITY_COLLISION(iParam1, 1, 0);
					iLocal_142 = 0;
				}
			}
			else if (bParam5)
			{
				if (fParam6 > fLocal_913)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iParam1, func_231(((fParam6 - fLocal_913) / 1000f), 1f, 3f));
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iParam1, 1f);
				}
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470) != 1)
			{
				TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, -1, 2f, 1, 0);
			}
			if ((ENTITY::IS_ENTITY_OCCLUDED(iParam1) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > 50f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam1, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 50f)
			{
				if (!CAM::IS_SPHERE_VISIBLE(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fLocal_913, sParam3), 2f))
				{
					ENTITY::SET_ENTITY_COORDS(iParam1, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fLocal_913, sParam3), 1, 0, 0, 1);
				}
				if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
				{
					PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, -1);
				}
			}
		}
	}
}

float func_231(float fParam0, float fParam1, float fParam2)//Position - 0x13D3A
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_232(struct<3> Param0, var uParam1)//Position - 0x13D61
{
	int iVar0;
	
	if (*uParam1 < 3)
	{
	}
	iVar0 = 1;
	while (iVar0 <= (*uParam1 - 1))
	{
		if (!func_233(Param0, *(uParam1[iVar0 /*3*/]), *(uParam1[(iVar0 - 1) /*3*/])))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_233(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5)//Position - 0x13DA9
{
	return (((Param4 - Param2) * (Param0.f_1 - Param2.f_1)) - ((Param4.f_1 - Param2.f_1) * (Param0 - Param2))) >= 0f;
}

bool func_234(int iParam0)//Position - 0x13DD2
{
	return ((((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -824.9688f, 5228.711f, 116.8678f, -852.0287f, 5341.012f, 54.16111f, 65.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -171.5547f, 4652.35f, 140.7038f, -33.91709f, 4546.747f, 106.9574f, 65.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -89.91727f, 4308.34f, 58.66524f, -193.9387f, 4219.964f, 35.34774f, 38.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -223.0244f, 3932.076f, 48.88577f, -215.2881f, 3832.037f, 28.85036f, 56.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -215.4631f, 3720.156f, 61.35942f, -125.2304f, 3631.989f, 35.59824f, 56.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 85.41956f, 3496.506f, 51.25703f, 177.0784f, 3396.792f, 28.67663f, 119.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 35.18766f, 4455.669f, 81.75587f, -37.35991f, 4422.036f, 54.01874f, 62.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -809.7636f, 5265.459f, 77.19865f, -726.4775f, 5220.505f, 124.4587f, 61.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -652.9576f, 5133.302f, 114.4135f, -587.3712f, 5025.89f, 164.5662f, 61.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -243.4116f, 4721.371f, 91.37091f, -97.04164f, 4589.317f, 148.162f, 22f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -51.04823f, 4561.023f, 76.79493f, 24.16429f, 4525.127f, 129.62f, 43f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -35.08501f, 3605.692f, -0.894375f, 128.6888f, 3553.019f, 63.64628f, 70.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -419.153f, 6119.916f, 30.15674f, -435.4348f, 6059.348f, 38.9021f, 39.25f, 0, 1, 0));
}

void func_235()//Position - 0x14060
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_927, 0) && func_176() == 0)
	{
		switch (iLocal_937)
		{
			case 0:
				sLocal_918[0] = "RBS1_LES2";
				sLocal_918[1] = "RBS1_LES3";
				iLocal_937++;
				break;
			
			case 1:
				if (((!iLocal_919[0] || (iLocal_919[0] && iLocal_920[0])) && (!iLocal_919[1] || (iLocal_919[1] && iLocal_920[1]))) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_927, 0))
				{
					if (!iLocal_934)
					{
						if (func_6(&Local_232, cLocal_167, "RBS1_LES1", 8, 0, 0, 0))
						{
							iLocal_934 = 1;
						}
					}
					if (iLocal_933)
					{
						if (func_239(&Local_232, cLocal_167, "RBS1_LES1", &Local_935, 8, 0, 0))
						{
							iLocal_933 = 0;
						}
					}
				}
				else if (!iLocal_933)
				{
					Local_935 = { func_238() };
					func_46();
					iLocal_933 = 1;
					iLocal_938 = iLocal_937;
					iLocal_937 = 100;
				}
				if (!func_43() && !iLocal_933)
				{
					iLocal_934 = 0;
					StringCopy(&Local_935, "", 24);
					iLocal_937++;
				}
				break;
			
			case 2:
				if (((!iLocal_919[0] || (iLocal_919[0] && iLocal_920[0])) && (!iLocal_919[1] || (iLocal_919[1] && iLocal_920[1]))) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_927, 0))
				{
					if (!iLocal_934)
					{
						if (func_6(&Local_232, cLocal_167, "RBS1_LES1b", 8, 0, 0, 0))
						{
							iLocal_934 = 1;
						}
					}
					if (iLocal_933)
					{
						if (func_239(&Local_232, cLocal_167, "RBS1_LES1b", &Local_935, 8, 0, 0))
						{
							iLocal_933 = 0;
						}
					}
				}
				else if (!iLocal_933)
				{
					Local_935 = { func_238() };
					func_46();
					iLocal_933 = 1;
					iLocal_938 = iLocal_937;
					iLocal_937 = 100;
				}
				break;
			
			case 100:
				if (!func_43() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					iLocal_939 = -1;
					iVar0 = 0;
					while (iVar0 < iLocal_920)
					{
						if (iLocal_919[iVar0] && !iLocal_920[iVar0])
						{
							if (iLocal_939 == -1)
							{
								iLocal_939 = iVar0;
							}
							func_237(sLocal_918[iVar0], (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_927, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_927, 0)));
						}
						iVar0++;
					}
					if ((!func_43() && !bLocal_266) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_927, 0))
					{
						iLocal_265 = 0;
						if (iLocal_939 != -1)
						{
							iLocal_920[iLocal_939] = 1;
						}
						StringCopy(&cLocal_267, "", 24);
						iLocal_937 = iLocal_938;
						iLocal_938 = 1000;
					}
				}
				break;
		}
		if (!iLocal_919[0])
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -706.7669f, 5536.016f, 34.65338f, -805.0684f, 5471.531f, 39.91594f, 24f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_927, 0))
			{
				iLocal_919[0] = 1;
			}
		}
		if (!iLocal_919[1])
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -262.86f, 4738.64f, 119.1165f, -163.3743f, 4644.937f, 147.8358f, 14.25f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_927, 0))
			{
				iLocal_919[1] = 1;
			}
		}
	}
	if ((!PED::IS_PED_INJURED(uLocal_185[iLocal_926]) && PED::IS_PED_IN_VEHICLE(uLocal_185[iLocal_926], iLocal_928, 0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (iLocal_926 == 2)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_936) > 6000)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_185[iLocal_926], 1)) < 25f)
				{
					if ((!bLocal_266 && !func_43()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_927, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_928, 0))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_928, iLocal_927) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_928, ENTITY::GET_ENTITY_COORDS(iLocal_927, 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_927, 0f, 4f, 0f), 2f, 0, 1, 0))
							{
								if (func_236())
								{
									if (func_6(&Local_232, cLocal_167, "RBS1_ASSHLEM", 8, 0, 0, 0))
									{
										iLocal_936 = MISC::GET_GAME_TIMER();
									}
								}
								else if (func_6(&Local_232, cLocal_167, sLocal_169, 8, 0, 0, 0))
								{
									iLocal_936 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_185[iLocal_926], 1)) < SYSTEM::POW(15f, 2f))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_185[iLocal_926], joaat("weapon_unarmed"), 1);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_185[iLocal_926], joaat("weapon_unarmed"));
				PED::SET_PED_CAN_SWITCH_WEAPON(uLocal_185[iLocal_926], 0);
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_185[iLocal_926], &iVar1, 1);
				if (iVar1 == joaat("weapon_unarmed"))
				{
					if (!PED::IS_PED_DOING_DRIVEBY(uLocal_185[iLocal_926]))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_940) > 8000)
						{
							TASK::TASK_DRIVE_BY(uLocal_185[iLocal_926], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 25f, 80, 1, -753768974);
							iLocal_940 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_940) > 3000)
					{
						TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(uLocal_185[iLocal_926]);
					}
				}
			}
		}
	}
}

int func_236()//Position - 0x145AF
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_237(char* sParam0, bool bParam1)//Position - 0x145D0
{
	if (bParam1)
	{
		if (!iLocal_265)
		{
			if (func_6(&Local_232, cLocal_167, sParam0, 8, 0, 0, 0))
			{
				bLocal_266 = false;
				iLocal_265 = 1;
			}
		}
		if (bLocal_266)
		{
			if (func_239(&Local_232, cLocal_167, sParam0, &cLocal_267, 8, 0, 0))
			{
				bLocal_266 = false;
			}
		}
	}
	if (!bParam1)
	{
		if (!bLocal_266)
		{
			cLocal_267 = { func_238() };
			func_46();
			bLocal_266 = true;
		}
	}
}

struct<6> func_238()//Position - 0x1463E
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_413E);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_38E0[iVar2 /*6*/])))
			{
				return Global_38E0[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_38E0[iVar3 /*6*/])))
					{
						return Global_38E0[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_38E0[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_239(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x146EA
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3D53 = 0;
	Global_3D5A = 0;
	Global_3D55 = 0;
	Global_412B = 0;
	Global_412D = 0;
	Global_4131 = 1;
	StringCopy(&Global_4138, sParam3, 24);
	Global_280001 = 0;
	return func_7(sParam2, iParam4, 0);
}

void func_240(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x1473E
{
	int iVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, sParam2);
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			(iParam0[iVar0 /*5*/])->f_3 = func_228(*(iParam0[iVar0 /*5*/]), iParam1, sParam2, uParam3);
			(iParam0[iVar0 /*5*/])->f_4 = 1;
			iVar0++;
		}
	}
}

void func_241(var uParam0, int iParam1, char* sParam2)//Position - 0x14790
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2);
		fVar1 = (fVar0 / 99f);
		*(uParam0[99 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, fVar0, sParam2) };
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
			iVar2++;
		}
	}
}

void func_242(int iParam0, int iParam1, bool bParam2)//Position - 0x147F3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1051D)
	{
		if (Global_1051E[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_1051E[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_1051E[iVar0 /*9*/].f_1 = (Global_1051E[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_1051E[iVar0 /*9*/] != -1)
	{
		if (Global_D6BF[Global_1051E[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_1051E[iVar0 /*9*/].f_1 > 1)
			{
				Global_1051E[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_1051E[iVar0 /*9*/].f_1 < 0)
			{
				Global_1051E[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

int func_243(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)//Position - 0x1489D
{
	return func_244(uParam0, 0, iParam1, iParam2, fParam3, fParam4, bParam5, bParam6, iParam7, 2, 0, bParam8, iParam9);
	return 1;
}

int func_244(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)//Position - 0x148C4
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = uParam3;
	if (!uParam0->f_10)
	{
		if (STREAMING::_0x71E7B2E657449AAD())
		{
			if (!bParam10)
			{
				uParam0->f_D = PLAYER::PLAYER_PED_ID();
			}
			if ((!PED::IS_PED_INJURED(uParam0->f_D) || bParam10) && !PED::IS_PED_INJURED(uParam0->f_C))
			{
				uParam0->f_1B = 0;
				Global_154F6 = 1;
				if (!bParam10)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_D))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_D, 0);
						func_265(iVar1, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_D, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_C, 1);
				}
				uParam0->f_15 = func_264();
				func_259(1);
				if (bParam6)
				{
					iVar0 |= 4;
				}
				if (bParam7)
				{
					iVar0 |= 8;
				}
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(uParam8))
				{
					iVar0 |= 2;
				}
				if (func_258())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_D, uParam0->f_C, iVar0, uParam2);
					if (bParam11)
					{
						STREAMING::_0x5F2013F8BC24EE69(uParam12);
					}
					switch (func_147(uParam0->f_D))
					{
						case 0:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 1:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 2:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDTrevorOut");
							break;
					}
					GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDOut");
				}
				else if (STREAMING::_0x933BBEEB8C61B5F4())
				{
					STREAMING::_SWITCH_IN_PLAYER(uParam0->f_C);
					func_257(0);
				}
				else
				{
					return 0;
				}
				if (CAM::DOES_CAM_EXIST(iParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_D, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_C, 1)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(iParam1), CAM::GET_CAM_ROT(iParam1, iParam9), CAM::GET_CAM_FOV(iParam1), CAM::GET_CAM_FAR_CLIP(iParam1), iParam9);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(sParam8);
				}
				if (!Global_42CA.f_6F)
				{
					AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_D, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_C, 1)) == 3)
					{
						AUDIO::PLAY_SOUND(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
					if (Global_42CA.f_6D == -1)
					{
						Global_42CA.f_6D = AUDIO::GET_SOUND_ID();
					}
					Global_42CA.f_6E = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
					AUDIO::PLAY_SOUND(Global_42CA.f_6D, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
					AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_42CA.f_6D != -1 && Global_42CA.f_6E == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					AUDIO::STOP_SOUND(Global_42CA.f_6D);
					AUDIO::RELEASE_SOUND_ID(Global_42CA.f_6D);
					Global_42CA.f_6D = -1;
					Global_42CA.f_6E = 0;
				}
				uParam0->f_19 = MISC::GET_GAME_TIMER();
				uParam0->f_10 = 1;
				func_256(1);
				HUD::SET_MINIMAP_IN_SPECTATOR_MODE(1, uParam0->f_D);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
				}
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
				}
				if (!bParam10)
				{
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_C) == func_92(0))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_90(0));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_C) == func_92(2))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_90(2));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_C) == func_92(1))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_90(1));
					}
					else
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
					}
					GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
				}
			}
			else
			{
				uParam0->f_11 = 1;
			}
		}
		else
		{
			uParam0->f_11 = 1;
		}
	}
	if (uParam0->f_10)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!Global_42CA.f_6F)
			{
			}
			if (func_255(uParam3, 512))
			{
				if (!STREAMING::IS_SWITCH_READY_FOR_DESCENT())
				{
				}
				else if (Global_15E96 == 0)
				{
					STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
				}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() >= 1)
				{
					if (!uParam0->f_12)
					{
						func_254();
						uParam0->f_12 = 1;
					}
					if (!uParam0->f_16)
					{
						func_247(0, 1);
						uParam0->f_16 = 1;
					}
				}
			}
			else
			{
				if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
				{
					if (!uParam0->f_12)
					{
						func_254();
						uParam0->f_12 = 1;
					}
				}
				if (!uParam0->f_12)
				{
					if (STREAMING::IS_SWITCH_SKIPPING_DESCENT() && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						fVar4 = 20f;
						fVar5 = SYSTEM::VDIST2(Var2, Var3);
						if (fVar5 < (fVar4 * fVar4))
						{
							func_254();
							uParam0->f_12 = 1;
						}
					}
				}
				if (!uParam0->f_16)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						func_247(0, 1);
						uParam0->f_16 = 1;
					}
				}
				if (!uParam0->f_17)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 3)
					{
						GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE("CSM_ST_BOX3x3");
						uParam0->f_17 = 1;
					}
				}
			}
		}
		else
		{
			if (!uParam0->f_12)
			{
				uParam0->f_12 = 1;
				func_254();
			}
			if (!uParam0->f_16)
			{
				func_247(0, 1);
				uParam0->f_16 = 1;
			}
			uParam0->f_11 = 1;
		}
	}
	if (uParam0->f_11)
	{
		iVar6 = func_245();
		if (((iVar6 != 8 && iVar6 != 9) && iVar6 != 10) && iVar6 != 55)
		{
			func_259(uParam0->f_15);
		}
		if (uParam0->f_17)
		{
			GRAPHICS::_CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE();
			uParam0->f_17 = 0;
		}
		uParam0->f_10 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_13 = 0;
		uParam0->f_14 = 0;
		uParam0->f_18 = 0;
		uParam0->f_1B = 0;
		if (Global_42CA.f_6D != -1 && Global_42CA.f_6E == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_42CA.f_6D);
			AUDIO::RELEASE_SOUND_ID(Global_42CA.f_6D);
			Global_42CA.f_6D = -1;
			Global_42CA.f_6E = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_42CA.f_6B != -1 && Global_42CA.f_6C == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_42CA.f_6B);
			AUDIO::RELEASE_SOUND_ID(Global_42CA.f_6B);
			Global_42CA.f_6B = -1;
			Global_42CA.f_6C = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
		}
		if (!Global_8C53)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			CAM::_0x487A82C650EB7799(0f);
			CAM::_0x0225778816FDC28C(0f);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_D))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_D, 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_D, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_D, 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_D, 1, 0);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_D))
				{
					iVar7 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_D, 0);
					func_265(iVar7, 1);
				}
			}
		}
		func_257(0);
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_D) || bParam10)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_D, 0);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_C))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_C, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(func_90(func_176()));
		}
		func_256(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}

int func_245()//Position - 0x14F54
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return Global_15891;
	}
	if (func_246())
	{
		return Global_15891;
	}
	return 318;
}

int func_246()//Position - 0x14F7B
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_247(bool bParam0, bool bParam1)//Position - 0x14F95
{
	if (bParam1)
	{
		func_252(bParam0);
	}
	func_250(0);
	func_248(66);
}

void func_248(int iParam0)//Position - 0x14FB3
{
	var uVar0;
	
	uVar0 = func_249();
	Global_1413F8 = iParam0;
}

var func_249()//Position - 0x14FC7
{
	return Global_1413F8;
}

void func_250(int iParam0)//Position - 0x14FD3
{
	int iVar0;
	
	iVar0 = func_251();
	Global_1413F7 = iParam0;
}

int func_251()//Position - 0x14FE7
{
	return Global_1413F7;
}

void func_252(bool bParam0)//Position - 0x14FF3
{
	int iVar0;
	
	func_253(&Global_427A);
	GRAPHICS::DONT_RENDER_IN_GAME_UI(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			STREAMING::STOP_PLAYER_SWITCH();
			func_257(0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_141F1D))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_141F1D, 0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_141F1D))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_141F1D, 0, 0);
					}
					PED::DELETE_PED(&Global_141F1D);
				}
			}
		}
	}
}

void func_253(var uParam0)//Position - 0x15056
{
	uParam0->f_F = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_9))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_9))
		{
			func_256(0);
		}
		CAM::DESTROY_CAM(uParam0->f_9, 0);
	}
	if (!Global_8C53)
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
		CAM::_0x487A82C650EB7799(0f);
		CAM::_0x0225778816FDC28C(0f);
	}
	Global_24B0C4.f_1E1 = 0f;
	CAM::RENDER_SCRIPT_CAMS(false, 0, 0, 1, 0, 0);
}

void func_254()//Position - 0x150C8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_17C49.f_306B[iVar0 /*104*/].f_10);
		iVar0++;
	}
}

bool func_255(var uParam0, int iParam1)//Position - 0x150F4
{
	return (uParam0 && iParam1) != 0;
}

void func_256(int iParam0)//Position - 0x15103
{
	Global_42C8 = iParam0;
}

void func_257(int iParam0)//Position - 0x15110
{
	if (iParam0 == 0)
	{
		Global_252FC1 = 0;
	}
	Global_1406D3.f_12 = iParam0;
}

bool func_258()//Position - 0x1512B
{
	return Global_14143C;
}

void func_259(bool bParam0)//Position - 0x15137
{
	if (bParam0)
	{
		func_263();
		if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8D8, 16);
		}
		Global_3839.f_1 = 1;
		if (func_262(0))
		{
			func_260(0);
		}
	}
	else if (Global_3839.f_1 == 1)
	{
		if (!Global_3839.f_1 == 0)
		{
			Global_3839.f_1 = 3;
		}
	}
}

void func_260(int iParam0)//Position - 0x1519A
{
	if (Global_38D7)
	{
		func_261(0, 0);
	}
	if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8D8, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_3D4C = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 30);
	}
	if (!func_10())
	{
		Global_3839.f_1 = 3;
	}
}

void func_261(bool bParam0, bool bParam1)//Position - 0x1520A
{
	if (bParam0)
	{
		if (func_262(0))
		{
			Global_38D7 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_37FA);
			}
			Global_37F1 = { Global_3803[Global_3802 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37F1);
		}
	}
	else if (Global_38D7 == 1)
	{
		Global_38D7 = 0;
		Global_37F1 = { Global_380A[Global_3802 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37FA);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37F1);
		}
	}
}

int func_262(int iParam0)//Position - 0x1527E
{
	if (iParam0 == 1)
	{
		if (Global_3839.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_8D7, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_263()//Position - 0x152D8
{
	if (Global_3839.f_1 == 9 || Global_3839.f_1 == 10)
	{
		Global_3D81 = 0;
		Global_3D7D = 1;
	}
}

int func_264()//Position - 0x15301
{
	if (Global_3839.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_265(int iParam0, int iParam1)//Position - 0x1531A
{
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		VEHICLE::_0xC50CE861B55EAB8B(iParam0, iParam1);
	}
	else
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 1, 0);
		VEHICLE::_0xC50CE861B55EAB8B(iParam0, iParam1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

void func_266(bool bParam0, int iParam1, int iParam2)//Position - 0x1534C
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2554DA.f_112D, 25))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (bParam0->f_B)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			bParam0->f_B = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	bParam0->f_1 = 0;
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_8 = 0;
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(bParam0->f_3))
	{
		if (func_267(bParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_267(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

bool func_267(char* sParam0)//Position - 0x15429
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_268(var uParam0, bool bParam1, int iParam2)//Position - 0x1543C
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	
	bVar5 = false;
	bVar6 = PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	bVar7 = ((bVar6 && Global_10A95) && func_287());
	bVar8 = func_286(bParam1);
	uParam0->f_6 = func_142(func_176());
	Global_42CA.f_C = !uParam0->f_17;
	Global_42CA.f_79 = bParam1;
	Global_42CA.f_7A = iParam2;
	Global_42CA.f_7B = bVar7;
	Global_42CA.f_3 = Global_42CA.f_2;
	Global_42CA.f_46 = 0;
	bVar9 = ((Global_42CA.f_68 == 4 || Global_42CA.f_68 == 1) || Global_42CA.f_68 == 3);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		func_283(uParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
		Global_42CA.f_47[iVar0] = -1;
		Global_42CA.f_4C[iVar0] = -1;
		Global_42CA.f_5E[iVar0] = -1;
		Global_42CA.f_63[iVar0] = -1;
		Global_42CA.f_36[iVar0] = 0;
		Global_42CA.f_3B[iVar0] = 0;
		Global_42CA.f_51[iVar0 /*3*/] = { 0f, 0f, 0f };
		if (func_13(14))
		{
			iVar10 = iVar0;
			if (iVar10 == 3)
			{
				Global_42CA.f_46 = 1;
			}
			else if ((func_282(iVar10) && func_279(iVar10)) && iVar10 == func_142(Global_17C49.f_6C1.f_21B.f_C8F))
			{
				Global_42CA.f_46 = 1;
			}
			else
			{
				Global_42CA.f_46 = 0;
			}
		}
		else if (Global_42CA.f_C)
		{
			if (!Global_42CA.f_46)
			{
				if ((((!PED::IS_PED_INJURED((*uParam0)[iVar0]) && !uParam0->f_12[iVar0]) && (*uParam0)[iVar0] != PLAYER::PLAYER_PED_ID()) || uParam0->f_22[iVar0] == 2) || uParam0->f_18[iVar0] != 0)
				{
					Global_42CA.f_46 = 1;
				}
			}
			if (uParam0->f_22[iVar0] == 3)
			{
				bVar5 = true;
			}
			else if (uParam0->f_6 == iVar0)
			{
				if (uParam0->f_22[iVar0] == 1 || uParam0->f_22[iVar0] == 2)
				{
					bVar5 = true;
				}
			}
			if (uParam0->f_8[iVar0])
			{
				if (uParam0->f_27 && uParam0->f_7 == iVar0)
				{
					uParam0->f_8[iVar0] = 0;
				}
				else if ((uParam0->f_6 == iVar0 && !bVar5) || uParam0->f_22[iVar0] == 3)
				{
					uParam0->f_8[iVar0] = 0;
				}
				else if ((PED::IS_PED_INJURED((*uParam0)[iVar0]) && !uParam0->f_17) && !uParam0->f_22[iVar0] == 2)
				{
					uParam0->f_8[iVar0] = 0;
				}
			}
			Global_42CA.f_31[iVar0] = uParam0->f_8[iVar0];
			Global_42CA.f_40[iVar0] = uVar3;
			if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !PED::IS_PED_INJURED((*uParam0)[iVar0])) && (*uParam0)[iVar0] != PLAYER::PLAYER_PED_ID())
			{
				Global_42CA.f_47[iVar0] = SYSTEM::FLOOR((((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[iVar0])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[iVar0])) - 100f)) * 100f));
			}
			if ((Global_42CA.f_47[iVar0] != -1 && IntToFloat(Global_42CA.f_47[iVar0]) < 25f) || uParam0->f_D[iVar0])
			{
				if (uParam0->f_6 != iVar0)
				{
					Global_42CA.f_36[iVar0] = 1;
					Global_42CA.f_3B[iVar0] = uParam0->f_D[iVar0];
				}
			}
		}
		else
		{
			Global_42CA.f_31[iVar0] = uParam0->f_8[iVar0];
			Global_42CA.f_40[iVar0] = uVar3;
		}
		if (Global_42CA.f_7C)
		{
			Global_42CA.f_13[iVar2] = iVar1;
			Global_42CA.f_18[iVar2] = uVar3;
			Global_42CA.f_1D[iVar2] = uVar4;
			Global_42CA.f_22[iVar0] = 0;
			Global_42CA.f_2C[iVar0] = 0;
			Global_42CA.f_27[iVar0] = 0;
			if (bVar9)
			{
				if (Global_42CA.f_C)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !PED::IS_PED_INJURED((*uParam0)[iVar0]))
					{
						Global_42CA.f_4C[iVar0] = PED::GET_PED_ARMOUR((*uParam0)[iVar0]);
						if (iVar0 == 0)
						{
							STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(Global_42CA.f_5E[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("sp0_special_ability_unlocked"), &(Global_42CA.f_63[iVar0]), -1);
						}
						else if (iVar0 == 1)
						{
							STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(Global_42CA.f_5E[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("sp1_special_ability_unlocked"), &(Global_42CA.f_63[iVar0]), -1);
						}
						else if (iVar0 == 2)
						{
							STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(Global_42CA.f_5E[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("sp2_special_ability_unlocked"), &(Global_42CA.f_63[iVar0]), -1);
						}
						Global_42CA.f_51[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0], 1) };
					}
				}
				else if ((iVar0 < 3 && iVar1 != 3) && (!func_278() || func_13(14)))
				{
					Global_42CA.f_22[iVar0] = Global_15680[iVar0];
					Global_42CA.f_2C[iVar0] = 0;
					Global_42CA.f_22[iVar0] = (Global_42CA.f_22[iVar0] + Global_1568C[iVar0]);
					Global_42CA.f_27[iVar0] = 0;
					Global_42CA.f_22[iVar0] = (Global_42CA.f_22[iVar0] + Global_15688[iVar0]);
				}
			}
		}
		if (((Global_42CA.f_45 == -1 || !Global_42CA.f_E) && Global_42CA.f_45 != iVar2) && !func_13(14))
		{
			if ((uParam0->f_6 == iVar0 && !bVar5) || uParam0->f_22[iVar0] == 3)
			{
				Global_42CA.f_45 = iVar2;
				Global_42CA.f_E = 1;
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		if ((((((Global_42CA.f_7C && (!Global_42CA.f_9 || Global_42CA.f_A)) && ((!func_143(0) || Global_42CA.f_C) || func_13(14))) && ((!func_143(3) || Global_42CA.f_C) || func_13(14))) && ((!func_143(2) || Global_42CA.f_C) || func_13(14))) && ((!func_143(9) || Global_42CA.f_C) || func_13(14))) && ((!func_143(10) || Global_42CA.f_C) || func_13(14)))
		{
			if (Global_42CA.f_68 == 4)
			{
				if (func_13(14))
				{
					if (Global_42CA.f_45 == 0)
					{
						Global_42CA.f_B = func_277(uParam0, 1);
					}
					else if (Global_42CA.f_45 == 1)
					{
						Global_42CA.f_B = func_277(uParam0, 2);
					}
					else if (Global_42CA.f_45 == 2)
					{
						Global_42CA.f_B = func_277(uParam0, 3);
					}
					else if (Global_42CA.f_45 == 3)
					{
						Global_42CA.f_B = func_277(uParam0, 0);
					}
				}
				else if (Global_42CA.f_45 == 0)
				{
					Global_42CA.f_B = func_276(uParam0, 1);
				}
				else if (Global_42CA.f_45 == 1)
				{
					Global_42CA.f_B = func_276(uParam0, 2);
				}
				else if (Global_42CA.f_45 == 2)
				{
					Global_42CA.f_B = func_270(uParam0);
				}
				else if (Global_42CA.f_45 == 3)
				{
					Global_42CA.f_B = func_276(uParam0, 0);
				}
			}
			else if (Global_42CA.f_68 == 3 || (Global_42CA.f_9 && Global_42CA.f_A))
			{
				if ((((!Global_42CA.f_B && Global_42CA.f_C) && Global_42CA.f_46) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !(func_269(PLAYER::PLAYER_PED_ID()) && (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))))
				{
					if (uParam0->f_22[0] == 3)
					{
						iVar11 = 0;
					}
					else if (uParam0->f_22[1] == 3)
					{
						iVar11 = 1;
					}
					else if (uParam0->f_22[2] == 3)
					{
						iVar11 = 2;
					}
					else
					{
						iVar11 = func_176();
					}
					switch (iVar11)
					{
						case 0:
							if (uParam0->f_D[1] && !Global_42CA.f_10)
							{
								iVar12 = 1;
							}
							else if (uParam0->f_D[2] && !Global_42CA.f_10)
							{
								iVar12 = 2;
							}
							else if (uParam0->f_2B)
							{
								iVar12 = uParam0->f_28;
								iVar13 = uParam0->f_29;
								iVar14 = uParam0->f_2A;
							}
							else
							{
								iVar12 = 1;
								iVar13 = 2;
							}
							break;
						
						case 1:
							if (uParam0->f_D[2] && !Global_42CA.f_10)
							{
								iVar12 = 2;
							}
							else if (uParam0->f_D[0] && !Global_42CA.f_10)
							{
								iVar12 = 0;
							}
							else if (uParam0->f_2B)
							{
								iVar12 = uParam0->f_28;
								iVar13 = uParam0->f_29;
								iVar14 = uParam0->f_2A;
							}
							else
							{
								iVar12 = 2;
								iVar13 = 0;
							}
							break;
						
						case 2:
							if (uParam0->f_D[0] && !Global_42CA.f_10)
							{
								iVar12 = 0;
							}
							else if (uParam0->f_D[1] && !Global_42CA.f_10)
							{
								iVar12 = 1;
							}
							else if (uParam0->f_2B)
							{
								iVar12 = uParam0->f_28;
								iVar13 = uParam0->f_29;
								iVar14 = uParam0->f_2A;
							}
							else
							{
								iVar12 = 0;
								iVar13 = 1;
							}
							break;
					}
					bVar15 = true;
					if (PAD::_IS_USING_KEYBOARD(2))
					{
						if (!PAD::IS_CONTROL_JUST_RELEASED(0, 19))
						{
							if (PAD::IS_CONTROL_JUST_RELEASED(0, 166))
							{
								bVar15 = false;
								if (iVar11 != 0)
								{
									if (func_276(uParam0, 0))
									{
										Global_42CA.f_B = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0, 167))
							{
								bVar15 = false;
								if (iVar11 != 1)
								{
									if (func_276(uParam0, 1))
									{
										Global_42CA.f_B = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0, 168))
							{
								bVar15 = false;
								if (iVar11 != 2)
								{
									if (func_276(uParam0, 2))
									{
										Global_42CA.f_B = 1;
									}
								}
							}
						}
					}
					if (bVar15)
					{
						if (func_276(uParam0, iVar12))
						{
							Global_42CA.f_B = 1;
						}
						else if (func_276(uParam0, iVar13))
						{
							Global_42CA.f_B = 1;
						}
						else if (func_276(uParam0, iVar14))
						{
							Global_42CA.f_B = 1;
						}
					}
				}
			}
		}
	}
	if (Global_42CA.f_B)
	{
		Global_42CA.f_7D = 1;
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	}
	return Global_42CA.f_B;
}

int func_269(int iParam0)//Position - 0x15E1E
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1))
			{
				if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_270(var uParam0)//Position - 0x15E6F
{
	int iVar0;
	
	if (!func_274(1))
	{
		return 0;
	}
	if (!uParam0->f_27)
	{
		uParam0->f_7 = 4;
		uParam0->f_27 = 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_278())
	{
		if (((!uParam0->f_12[3] && uParam0->f_17) && !Global_3) && func_274(0))
		{
			uParam0->f_7 = 3;
			return 1;
		}
		else if (func_274(0) == 0 && func_272() == 0)
		{
			NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0);
			if (iVar0 == 1)
			{
				func_271(14, 1, -1);
			}
			else if (MISC::IS_ORBIS_VERSION() && NETWORK::_0x74FB3E29E6D10FA9() == 4)
			{
				func_271(25, 1, -1);
			}
			else if (MISC::IS_ORBIS_VERSION() && NETWORK::_0x74FB3E29E6D10FA9() == 2)
			{
				func_271(26, 1, -1);
			}
			else if (MISC::IS_ORBIS_VERSION() && NETWORK::_0x74FB3E29E6D10FA9() == 1)
			{
				func_271(27, 1, -1);
			}
			else if ((PLAYER::IS_PLAYER_ONLINE() && NETWORK::NETWORK_IS_SIGNED_ONLINE()) == 0)
			{
				func_271(13, 1, -1);
			}
			else if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() == 0)
			{
			}
			else if (NETWORK::NETWORK_CAN_ENTER_MULTIPLAYER() == 0)
			{
			}
			else
			{
				func_271(14, 1, -1);
			}
		}
	}
	return 0;
}

void func_271(int iParam0, bool bParam1, int iParam2)//Position - 0x15F9A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iParam2 != -2)
	{
		Global_1407F5 = iParam2;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1407F2[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1407F2[iVar0]), iVar1);
	}
}

int func_272()//Position - 0x15FE5
{
	if ((((((((((func_273(1) || func_273(2)) || func_273(3)) || func_273(4)) || func_273(5)) || func_273(7)) || func_273(8)) || func_273(9)) || func_273(10)) || func_273(11)) || func_273(12))
	{
		return 1;
	}
	return 0;
}

bool func_273(int iParam0)//Position - 0x1606D
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_1407F2[iVar0], iVar1);
}

int func_274(int iParam0)//Position - 0x16091
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_275() == 0)
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0) && MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 9)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_275()//Position - 0x16134
{
	if (MISC::IS_ORBIS_VERSION())
	{
		if (!NETWORK::_0xBD545D44CCE70597())
		{
			if (NETWORK::_0x74FB3E29E6D10FA9() == 4)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 2)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 1)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_276(var uParam0, int iParam1)//Position - 0x1617C
{
	bool bVar0;
	bool bVar1;
	
	if (!uParam0->f_27)
	{
		uParam0->f_7 = 4;
		uParam0->f_27 = 1;
	}
	if ((iParam1 != 0 && iParam1 != 2) && iParam1 != 1)
	{
	}
	else
	{
		bVar0 = uParam0->f_22[iParam1] == 2;
		if (func_142(func_176()) != iParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || uParam0->f_18[iParam1] != 0) || ((func_282(iParam1) && func_279(iParam1)) && !uParam0->f_12[iParam1]))
			{
				if (!uParam0->f_17)
				{
					if (!PED::IS_PED_INJURED((*uParam0)[iParam1]) || bVar0)
					{
						if (uParam0->f_22[iParam1] != 1 && uParam0->f_22[iParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)) && !MISC::IS_BIT_SET(Global_15725.f_2F, iParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_2[27 /*3*/], 1) && !Global_3) && !func_174(0)))
			{
				if (uParam0->f_17)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				uParam0->f_7 = iParam1;
				return 1;
			}
		}
	}
	uParam0->f_27 = 0;
	return 0;
}

int func_277(var uParam0, int iParam1)//Position - 0x162D7
{
	bool bVar0;
	
	if (!uParam0->f_27)
	{
		uParam0->f_7 = 4;
		uParam0->f_27 = 1;
	}
	bVar0 = false;
	if (iParam1 == 3 || iParam1 == func_142(Global_17C49.f_6C1.f_21B.f_C8F))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		uParam0->f_7 = iParam1;
		return 1;
	}
	uParam0->f_27 = 0;
	return 0;
}

int func_278()//Position - 0x16339
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	return 1;
}

int func_279(int iParam0)//Position - 0x1634E
{
	if (Global_17C49.f_1CAD || Global_3)
	{
		if (!Global_10A95 || (Global_10A95 && iParam0 != func_142(func_281())))
		{
			if (!func_280(func_148(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_280(int iParam0)//Position - 0x1639E
{
	if (func_146(iParam0))
	{
		if ((Global_17C49.f_1CAD || Global_3) || func_174(0))
		{
			return Global_17C49.f_6C1.f_21B.f_628[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_281()//Position - 0x163EC
{
	return Global_17C49.f_6C1.f_21B.f_C8F;
}

int func_282(int iParam0)//Position - 0x16401
{
	if ((Global_17C49.f_1CAD || Global_3) || func_174(0))
	{
		if (!Global_10A95 || (Global_10A95 && iParam0 != func_142(func_281())))
		{
			if (((iParam0 == 0 && !func_97(115)) || (iParam0 == 1 && !func_97(116))) || (iParam0 == 2 && !func_97(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_283(var uParam0, int iParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1648D
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam1 == 3)
		{
			iVar0 = 1;
		}
	}
	else if (func_281() == func_148(iParam1))
	{
		iVar0 = 1;
	}
	switch (iParam1)
	{
		case 0:
			*uParam4 = 3;
			*uParam6 = 0;
			if (!func_282(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_279(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_17 && *uParam3 == 1)
			{
				if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ((((func_143(0) || func_143(3)) || func_143(2)) || func_13(9)) || func_13(10))) || func_174(0)) || Global_883F)
				{
					*uParam3 = 2;
				}
			}
			break;
		
		case 1:
			*uParam4 = 0;
			*uParam6 = 0;
			if (!func_282(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_279(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_17 && *uParam3 == 1)
			{
				if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ((((func_143(0) || func_143(3)) || func_143(2)) || func_13(9)) || func_13(10))) || func_174(0)) || Global_883F)
				{
					*uParam3 = 2;
				}
			}
			break;
		
		case 2:
			*uParam4 = 1;
			*uParam6 = 0;
			if (!func_282(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_279(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_17 && *uParam3 == 1)
			{
				if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ((((func_143(0) || func_143(3)) || func_143(2)) || func_13(9)) || func_13(10))) || func_174(0)) || Global_883F)
				{
					*uParam3 = 2;
				}
			}
			break;
		
		case 3:
			*uParam4 = 2;
			*uParam6 = 0;
			if ((((((!uParam0->f_17 || Global_3) || (uParam0->f_17 && ((((func_143(0) || func_143(3)) || func_143(2)) || func_13(9)) || func_13(10)))) || (uParam0->f_17 && func_174(0))) || (uParam0->f_17 && Global_883F)) || !func_285()) || !func_274(0))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_17 && *uParam3 == 1)
			{
				if (((((func_143(0) || func_143(3)) || func_143(2)) || func_13(9)) || func_13(10)) || Global_883F)
				{
					*uParam3 = 2;
				}
			}
			break;
	}
	if (iParam1 != 3)
	{
		if (iVar0 || uParam0->f_22[iParam1] == 2)
		{
			*uParam3 = 1;
		}
		else if (((uParam0->f_22[iParam1] == 1 || uParam0->f_12[iParam1]) || ((!uParam0->f_17 && PED::IS_PED_INJURED((*uParam0)[iParam1])) && *uParam3 == 1)) || (uParam0->f_17 && MISC::IS_BIT_SET(Global_15725.f_2F, iParam1)))
		{
			if (*uParam3 == 1)
			{
				*uParam3 = 2;
			}
		}
		else if (uParam0->f_18[iParam1] != 0)
		{
			*uParam3 = 1;
		}
		else if (((uParam0->f_17 && !MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_2[27 /*3*/], 1)) && !Global_3) && !func_174(0))
		{
			if ((((func_143(0) || func_143(3)) || func_143(2)) || func_13(9)) || func_13(10))
			{
			}
			else
			{
				*uParam3 = 1;
			}
		}
	}
	else
	{
		*uParam3 = 3;
	}
	if ((iVar0 && uParam0->f_22[iParam1] == 0) || uParam0->f_22[iParam1] == 3)
	{
		if (!func_13(14))
		{
			*uParam6 = 1;
		}
	}
	if (bParam2)
	{
		func_284(uParam0, iParam1, uParam5);
	}
}

void func_284(var uParam0, int iParam1, var uParam2)//Position - 0x16927
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = 0;
			break;
		
		case 1:
			*uParam2 = 2;
			break;
		
		case 2:
			*uParam2 = 1;
			break;
		
		case 3:
			*uParam2 = 3;
			break;
	}
	if (iParam1 != 4)
	{
		if (uParam0->f_18[iParam1] == 0)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("prologue1")) > 0)
			{
				if (iParam1 == 0)
				{
					if (func_97(124))
					{
						*uParam2 = 8;
					}
					else
					{
						*uParam2 = 7;
					}
				}
				else if (iParam1 == 2)
				{
					if (func_97(125))
					{
						*uParam2 = 10;
					}
					else
					{
						*uParam2 = 9;
					}
				}
			}
		}
		else if (uParam0->f_18[iParam1] == 1)
		{
			if (iParam1 == 0)
			{
				*uParam2 = 6;
			}
			else if (iParam1 == 2)
			{
				*uParam2 = 4;
			}
			else if (iParam1 == 1)
			{
				*uParam2 = 5;
			}
		}
		else if (uParam0->f_18[iParam1] == 2)
		{
			*uParam2 = 7;
		}
		else if (uParam0->f_18[iParam1] == 3)
		{
			*uParam2 = 8;
		}
		else if (uParam0->f_18[iParam1] == 4)
		{
			*uParam2 = 9;
		}
		else if (uParam0->f_18[iParam1] == 5)
		{
			*uParam2 = 10;
		}
	}
}

bool func_285()//Position - 0x16A45
{
	return Global_141F3C;
}

int func_286(bool bParam0)//Position - 0x16A51
{
	if (Global_42CA.f_82)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(0, 166))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 167) && !PAD::IS_CONTROL_PRESSED(0, 168)) && !PAD::IS_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 167))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 166) && !PAD::IS_CONTROL_PRESSED(0, 168)) && !PAD::IS_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 168))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 166) && !PAD::IS_CONTROL_PRESSED(0, 167)) && !PAD::IS_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 169))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 166) && !PAD::IS_CONTROL_PRESSED(0, 167)) && !PAD::IS_CONTROL_PRESSED(0, 168))
			{
				return 1;
			}
		}
		if (!bParam0)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 166))
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 167) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
				{
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 167))
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
				{
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 168))
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
				{
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 169))
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 168))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_287()//Position - 0x16C43
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

void func_288(char* sParam0)//Position - 0x16C54
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_289(var uParam0, int iParam1, int iParam2)//Position - 0x16C6A
{
	if (iParam1 != 4)
	{
		uParam0->f_8[iParam1] = iParam2;
	}
}

void func_290(int iParam0)//Position - 0x16C82
{
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
}

void func_291(var uParam0, int iParam1, int iParam2)//Position - 0x16CA2
{
	if (iParam1 != 4)
	{
		uParam0->f_12[iParam1] = iParam2;
	}
}

void func_292(struct<3> Param0, int iParam1)//Position - 0x16CBA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (func_31(*(iParam1[iVar0 /*5*/]), 0f, 0f, 0f))
		{
			*(iParam1[iVar0 /*5*/]) = { Param0 };
			return;
		}
		iVar0++;
	}
}

void func_293()//Position - 0x16CF7
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_294()//Position - 0x16D63
{
	int iVar0;
	
	switch (iLocal_260)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1054.748f, 5340.324f, -10f, 750f, 750f, 750f, 0, 1, 0))
			{
				iLocal_260 = 1;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1578.014f, 6427.994f, -10f, 750f, 750f, 750f, 0, 1, 0))
			{
				iLocal_260 = 3;
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("sheriff"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("sheriff")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_261[0]))
				{
					iLocal_261[0] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), -990.6421f, 5391.671f, 40.4409f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_261[0], -0.0138f, 0.0194f, 0.0655f, 0.9976f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_261[1]))
				{
					iLocal_261[1] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), -994.824f, 5401.228f, 40.3984f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_261[1], 0.0221f, 0.0008f, 0.8693f, -0.4938f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[0]))
				{
					iLocal_262[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -992.679f, 5392.633f, 39.8664f, 324.3472f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[1]))
				{
					iLocal_262[1] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -994.6719f, 5399.035f, 39.8257f, 218.1417f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[2]))
				{
					iLocal_262[2] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -996.4119f, 5398.116f, 39.9129f, 270.4941f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[3]))
				{
					iLocal_262[3] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -995.2369f, 5390.152f, 40.0318f, 346.7168f, 1, 1);
					iVar0 = 0;
					while (iVar0 < iLocal_261)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_261[iVar0], 0))
						{
							VEHICLE::SET_VEHICLE_SIREN(iLocal_261[iVar0], true);
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 < iLocal_262)
					{
						if (!PED::IS_PED_INJURED(iLocal_262[iVar0]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_262[iVar0], 1);
						}
						iVar0++;
					}
					uLocal_263[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(-987.4105f, 5400.166f, 39.52042f, 15f, 7f, 1);
					uLocal_263[1] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(-993.56f, 5395.73f, 39.85f, 3f, 1f, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -990.6421f, 5391.671f, 40.4409f, 1000f, 1000f, 1000f, 0, 1, 0))
			{
				iLocal_260 = 4;
			}
			break;
		
		case 3:
			STREAMING::REQUEST_MODEL(joaat("sheriff"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("sheriff")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_261[0]))
				{
					iLocal_261[0] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1578.014f, 6427.994f, 24.4932f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_261[0], -0.0181f, -0.0008f, 0.9997f, -0.0188f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_261[1]))
				{
					iLocal_261[1] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1573.847f, 6423.33f, 24.4071f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_261[1], -0.0012f, -0.0163f, -0.3084f, 0.9511f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_261[2]))
				{
					iLocal_261[2] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1572.323f, 6409.776f, 24.5238f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_261[2], -0.0023f, -0.0158f, -0.2387f, 0.971f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_261[3]))
				{
					iLocal_261[3] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1564.12f, 6406.375f, 24.3283f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_261[3], 0.0037f, -0.0152f, -0.5892f, 0.8078f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[0]))
				{
					iLocal_262[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 1577.882f, 6424.149f, 23.917f, 263.6635f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[1]))
				{
					iLocal_262[1] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 1581.465f, 6429.496f, 23.9937f, 221.5831f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[2]))
				{
					iLocal_262[2] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 1580.061f, 6421.476f, 24.012f, 276.7651f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[3]))
				{
					iLocal_262[3] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 1568.118f, 6409.294f, 23.811f, 73.3582f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[4]))
				{
					iLocal_262[4] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 1567.251f, 6415.109f, 23.7167f, 54.1765f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[5]))
				{
					iLocal_262[5] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 1564.104f, 6407.887f, 23.7113f, 54.9604f, 1, 1);
					iVar0 = 0;
					while (iVar0 < iLocal_261)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_261[iVar0], 0))
						{
							VEHICLE::SET_VEHICLE_SIREN(iLocal_261[iVar0], true);
						}
						iVar0++;
					}
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1578.014f, 6427.994f, -10f, 1000f, 1000f, 1000f, 0, 1, 0))
			{
				iLocal_260 = 4;
			}
			break;
		
		case 4:
			VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_263[0]);
			VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_263[1]);
			iVar0 = 0;
			while (iVar0 < iLocal_262)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_262[iVar0]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < iLocal_261)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_261[iVar0]));
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sheriff"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
			iLocal_260 = 0;
			break;
	}
}

void func_295()//Position - 0x173E4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_339();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_SHOOT_THE_ALARM"))
			{
				AUDIO::STOP_AUDIO_SCENE("PS_1_SHOOT_THE_ALARM");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_GAS_STATION"))
			{
				AUDIO::START_AUDIO_SCENE("PS_1_DRIVE_TO_GAS_STATION");
			}
		}
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (iLocal_149 < 5)
	{
		if (bLocal_127)
		{
			func_46();
			bLocal_266 = false;
			iLocal_265 = 0;
			iLocal_300 = 0;
			SYSTEM::SETTIMERA(0);
			iLocal_136 = 0;
			iLocal_149 = 5;
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				TASK::TASK_LOOK_AT_COORD(iLocal_50, Local_112, -1, 16, 4);
			}
			if (!PED::IS_PED_INJURED(uLocal_185[2]))
			{
				TASK::TASK_LOOK_AT_COORD(uLocal_185[2], Local_112, -1, 16, 4);
			}
		}
	}
	switch (iLocal_149)
	{
		case 0:
			if (SYSTEM::TIMERA() > 1000)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
				{
					if (func_262(0))
					{
						func_260(0);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_54))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_62, 1)) > 9f)
						{
							if (func_6(&Local_232, cLocal_167, "RBS1_GETIN", 8, 0, 0, 0))
							{
								uLocal_54 = func_40(iLocal_62, 0, 0);
							}
						}
						else
						{
							uLocal_54 = func_40(iLocal_62, 0, 0);
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0) || HUD::DOES_BLIP_EXIST(uLocal_54))
				{
					iLocal_304 = 0;
					func_337(1, 1);
					func_290(500);
					iLocal_301 = 0;
					iLocal_149++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
			{
				if (!func_43())
				{
					func_45("CMN_GENGETBCK", 7500, 1);
					iLocal_149++;
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&uLocal_54);
				iLocal_149++;
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 1))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_54))
				{
					HUD::REMOVE_BLIP(&uLocal_54);
				}
				if (func_262(0))
				{
					func_260(0);
				}
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_62, Local_164, Local_165, fLocal_166, 0, 1, 0))
				{
					func_46();
					if (func_6(&Local_232, cLocal_167, "RBS1_HIDE1", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_149++;
					}
				}
				else
				{
					SYSTEM::SETTIMERA(0);
					iLocal_149++;
				}
			}
			else
			{
				func_336();
			}
			break;
		
		case 3:
			STREAMING::REQUEST_ANIM_DICT("missrbhsig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missrbhsig_2"))
			{
				func_331();
			}
			if (SYSTEM::TIMERA() > 3000)
			{
				func_329();
				if (!iLocal_304 && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62))
				{
					iLocal_304 = 1;
				}
			}
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_62, Local_164, Local_165, fLocal_166, 0, 1, 0))
				{
					if (!func_43())
					{
						func_85("CBH_HIDELOT", 5000, 1);
						SYSTEM::SETTIMERA(0);
						Local_116 = { Local_112 };
						iLocal_149++;
					}
				}
				else
				{
					iLocal_149++;
				}
			}
			else
			{
				func_336();
			}
			break;
		
		case 4:
			STREAMING::REQUEST_ANIM_DICT("missrbhsig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missrbhsig_2"))
			{
				func_331();
			}
			if (iLocal_302 > 0 && !HUD::DOES_BLIP_EXIST(uLocal_53))
			{
				func_308();
			}
			break;
		
		case 5:
			func_308();
			STREAMING::REQUEST_ANIM_DICT("missrbhsig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missrbhsig_2"))
			{
				func_237("RBS1_COPARR", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)));
				if (!iLocal_300 && iLocal_265)
				{
					if (!PED::IS_PED_INJURED(uLocal_185[2]))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_185[2], "missrbhsig_2", "this_is_them_trevor", 3))
						{
							TASK::TASK_PLAY_ANIM(uLocal_185[2], "missrbhsig_2", "this_is_them_trevor", 2f, -2f, -1, 0, 0, 0, 0, 0);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_50))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, "missrbhsig_2", "this_is_them_lester", 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_50, "missrbhsig_2", "this_is_them_lester", 2f, -2f, -1, 0, 0, 0, 0, 0);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_185[2]) && !PED::IS_PED_INJURED(iLocal_50))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_185[2], "missrbhsig_2", "this_is_them_trevor", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, "missrbhsig_2", "this_is_them_Lester", 3))
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
							iLocal_300 = 1;
						}
					}
				}
				if ((!func_43() && !bLocal_266) || (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0) && SYSTEM::TIMERA() > 15000))
				{
					TASK::TASK_LOOK_AT_ENTITY(uLocal_185[2], iLocal_230, 15000, 16, 4);
					if (!PED::IS_PED_INJURED(Local_248[iLocal_153 /*9*/][0]))
					{
						func_225(&Local_232, 5);
						func_224(&Local_232, 5, Local_248[iLocal_153 /*9*/][0], "PALETOCOP1", 0, 1);
					}
					RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
					iLocal_149++;
					bLocal_266 = false;
					iLocal_265 = 0;
					StringCopy(&cLocal_267, "", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
			break;
		
		case 6:
			func_308();
			func_237("RBS1_WAIT", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)));
			if ((!func_43() && !bLocal_266) || (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0) && SYSTEM::TIMERA() > 15000))
			{
				TASK::TASK_LOOK_AT_ENTITY(uLocal_185[2], iLocal_230, 15000, 16, 4);
				iLocal_149++;
				bLocal_266 = false;
				iLocal_265 = 0;
				StringCopy(&cLocal_267, "", 24);
				SYSTEM::SETTIMERA(0);
			}
			break;
		
		case 7:
			iLocal_149++;
			break;
		
		case 8:
			func_308();
			if (SYSTEM::TIMERA() > 4000)
			{
				func_237("RBS1_COPREP", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)));
				if ((!bLocal_266 && !func_43()) || (SYSTEM::TIMERA() > 17000 && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_50))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_50, Local_112, 10000, 16, 4);
					}
					bLocal_266 = false;
					iLocal_265 = 0;
					StringCopy(&cLocal_267, "", 24);
					EVENT::REMOVE_SHOCKING_EVENT(iLocal_305);
					iLocal_305 = 0;
					func_28(7);
				}
			}
			break;
	}
	if (!PED::IS_PED_INJURED(Local_248[iLocal_153 /*9*/][0]) && bLocal_127)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_248[iLocal_153 /*9*/][0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < SYSTEM::POW(65f, 2f))
		{
			Local_116 = { ENTITY::GET_ENTITY_COORDS(Local_248[iLocal_153 /*9*/][0], 1) };
			fLocal_145 = 0.025f;
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_154) < 7000)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
	}
	if (!bLocal_127)
	{
		if (func_306(&(Local_248[func_307() /*9*/].f_3)))
		{
			bLocal_127 = true;
		}
	}
	if (bLocal_127)
	{
		if (!iLocal_138)
		{
			if (func_267("CBH_FCUSHLP"))
			{
				HUD::CLEAR_HELP(0);
				iLocal_138 = 1;
			}
		}
	}
	if (iLocal_149 > 3)
	{
		func_329();
	}
	switch (iLocal_152)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_154) > 55000)
			{
				if (func_304(0))
				{
					iLocal_152++;
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup3");
			if ((((!PED::IS_PED_INJURED(Local_248[iLocal_153 /*9*/][0]) && !PED::IS_PED_INJURED(Local_248[iLocal_153 /*9*/][1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iLocal_153 /*9*/].f_3, 0)) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[iLocal_153 /*9*/].f_3)) && STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup3"))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_248[iLocal_153 /*9*/].f_3, 1);
				Local_298 = { ENTITY::GET_ENTITY_COORDS(Local_248[iLocal_153 /*9*/].f_3, 1) };
				ENTITY::GET_ENTITY_QUATERNION(Local_248[iLocal_153 /*9*/].f_3, &(uLocal_296[0]), &(uLocal_296[1]), &(uLocal_296[2]), &(uLocal_296[3]));
				fLocal_297[0] = 0.0041f;
				fLocal_297[1] = 0.003f;
				fLocal_297[2] = 0.0955f;
				fLocal_297[3] = 0.9954f;
				fLocal_299 = 0f;
				iLocal_152++;
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iLocal_153 /*9*/].f_3, 0))
			{
				if (fLocal_299 <= 1f)
				{
					func_302(Local_248[iLocal_153 /*9*/].f_3, Local_298, -126.1263f, 6444.122f, 31.1441f, &uLocal_296, &fLocal_297, &fLocal_299);
					fLocal_299 = (fLocal_299 + 0.1f);
				}
			}
			if (fLocal_299 >= 1f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iLocal_153 /*9*/].f_3, 0))
				{
					func_302(Local_248[iLocal_153 /*9*/].f_3, Local_298, -126.1263f, 6444.122f, 31.1441f, &uLocal_296, &fLocal_297, &fLocal_299);
					if (func_301())
					{
						STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup2");
						VEHICLE::SET_VEHICLE_SIREN(Local_248[iLocal_153 /*9*/].f_3, false);
						iLocal_152 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) > 0.3f)
				{
					if (!Local_248[2 /*9*/].f_6)
					{
						iVar0 = 0;
						while (iVar0 < Local_248)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar0 /*9*/].f_3, 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[iVar0 /*9*/].f_3))
								{
									VEHICLE::REMOVE_VEHICLE_RECORDING(Local_248[iVar0 /*9*/].f_4, sLocal_168);
								}
							}
							iVar0++;
						}
						func_181(2);
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) > 0.37f)
				{
					if (Local_249.f_9)
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
						Local_249.f_9 = 0;
						Local_249.f_D = 0;
						AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", 1);
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) > 0.45f)
				{
					if (!Local_248[3 /*9*/].f_6)
					{
						func_181(3);
					}
				}
			}
			break;
	}
	if (bLocal_127 && iLocal_47 == 6)
	{
		iVar1 = 0;
		while (iVar1 < Local_248)
		{
			if (iVar1 != iLocal_153)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar1 /*9*/].f_3, 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[iVar1 /*9*/].f_3))
					{
						if (VEHICLE::IS_VEHICLE_SIREN_ON(Local_248[iVar1 /*9*/].f_3))
						{
							VEHICLE::SET_VEHICLE_SIREN(Local_248[iVar1 /*9*/].f_3, false);
						}
					}
				}
			}
			iVar1++;
		}
	}
	switch (iLocal_150)
	{
		case 0:
			if (func_300())
			{
				iLocal_150++;
			}
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup1");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup1"))
			{
				iLocal_150++;
			}
			break;
		
		case 2:
			if (func_299())
			{
				iLocal_150++;
			}
			break;
		
		case 3:
			bVar2 = true;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (!PED::IS_PED_INJURED(iLocal_51[iVar0]))
				{
					fVar3 = MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iLocal_51[iVar0]) - Local_119[iVar0 /*3*/].f_2));
					if (fVar3 >= 180f)
					{
						fVar3 = (fVar3 - 360f);
					}
					if (fVar3 < -180f)
					{
						fVar3 = (fVar3 + 360f);
					}
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_51[iVar0], 1), Local_118[iVar0 /*3*/]) > 2f || fVar3 > 20f)
					{
						bVar2 = false;
					}
				}
				iVar0++;
			}
			if (bVar2)
			{
				iLocal_150++;
			}
			break;
		
		case 4:
			if (func_298())
			{
				iLocal_150++;
			}
			break;
		
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_146))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_146) >= 1f)
				{
					iLocal_150++;
				}
			}
			break;
		
		case 6:
			if (func_297())
			{
				STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup1");
				iLocal_150++;
			}
			break;
	}
	switch (iLocal_151)
	{
		case 0:
			VEHICLE::REQUEST_VEHICLE_RECORDING(7, sLocal_168);
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscore1leadinoutrbhs_int_1");
			if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, sLocal_168) && STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscore1leadinoutrbhs_int_1")) && (MISC::GET_GAME_TIMER() - iLocal_154) > 14000)
			{
				if (func_296())
				{
					iLocal_151++;
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0) && !PED::IS_PED_INJURED(iLocal_229))
			{
				VEHICLE::SET_VEHICLE_ALARM(iLocal_230, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_230, 7, sLocal_168, 1);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_230, 0.85f);
				iLocal_151++;
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0) && !PED::IS_PED_INJURED(iLocal_229))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_230))
				{
					func_221(iLocal_229, "FIGHT_RUN", 10);
					VEHICLE::REMOVE_VEHICLE_RECORDING(7, sLocal_168);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_230, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_303);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_230, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -76.8476f, 6417.165f, 30.4902f, 2f, -1, 0.25f, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -59.8699f, 6423.774f, 30.4862f, 2f, -1, 0.25f, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -63.1039f, 6427.249f, 30.4869f, 2f, -1, 0.25f, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_303);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_229, uLocal_303);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_303);
					iLocal_151++;
				}
				else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_230))
				{
					if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_230))
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_230, 1) - Vector(2f, 0f, 0f) };
						Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_230, 0f, func_231(((ENTITY::GET_ENTITY_SPEED(iLocal_230) / 10f) + 12f), 12f, 25f), 2f) };
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var5, 3.5f, 0, 1, 0))
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_230, 786469);
						}
					}
					if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_230))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_230, 1)) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_230) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_62, iLocal_230))
							{
								VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_230, 786469);
							}
						}
					}
				}
			}
			if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0) || PED::IS_PED_INJURED(iLocal_229)) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_230, PLAYER::PLAYER_PED_ID(), 1))) || (!PED::IS_PED_INJURED(iLocal_229) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_229, PLAYER::PLAYER_PED_ID(), 1)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_230))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_230))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_230);
					}
				}
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_229) && !PED::IS_PED_INJURED(iLocal_229))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_229, -64.70889f, 6428.823f, 30.48731f, -60.18451f, 6424.346f, 35.23688f, 3.75f, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_229))
					{
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
						PED::DELETE_PED(&iLocal_229);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_229, 242628503) != 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_229, "missheistpaletoscore1leadinoutrbhs_int_1", "_leadin_trevor", 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_229, "missheistpaletoscore1leadinoutrbhs_int_1", "_leadin_trevor", 4f, -4f, -1, 1, 0, 0, 0, 0);
							iLocal_151++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_229) && !PED::IS_PED_INJURED(iLocal_229))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_229) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_229, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 400f)
				{
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
					PED::DELETE_PED(&iLocal_229);
				}
			}
			break;
	}
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(178228075, 1);
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(1852297978, 1);
}

bool func_296()//Position - 0x182E6
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_229))
	{
		STREAMING::REQUEST_MODEL(joaat("ruffian"));
		STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_02"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("ruffian")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_02")))
		{
			iLocal_230 = VEHICLE::CREATE_VEHICLE(joaat("ruffian"), Local_107, fLocal_108, 1, 1);
			iLocal_229 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_230, 26, joaat("a_m_y_genstreet_02"), -1, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_229, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_229, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_229, 4, 0, 0, 0);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_230, 1);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_230, 3000f);
			AUDIO::_0xF1F8157B8C3F171C(iLocal_230, "Trevor_Revs_Off", "PALETO_SCORE_SETUP_SOUNDS");
			ENTITY::SET_ENTITY_HEALTH(iLocal_230, 3000);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_230, 3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_229, 17, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iLocal_229, 128, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iLocal_229, 1024, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_genstreet_02"));
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_229, 3);
			AUDIO::SET_VEH_RADIO_STATION(iLocal_230, AUDIO::GET_RADIO_STATION_NAME(6));
			PED::SET_PED_HELMET(iLocal_229, 0);
		}
	}
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_229) && ENTITY::DOES_ENTITY_EXIST(iLocal_230));
}

int func_297()//Position - 0x183FA
{
	int iVar0;
	
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup2");
	if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup2"))
	{
		if (((!PED::IS_PED_INJURED(iLocal_51[0]) && !PED::IS_PED_INJURED(iLocal_51[1])) && !PED::IS_PED_INJURED(iLocal_51[2])) && !PED::IS_PED_INJURED(iLocal_51[3]))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
				iVar0++;
			}
			iLocal_147 = PED::CREATE_SYNCHRONIZED_SCENE(Local_109, Local_110, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[0], iLocal_147, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_manager", 8f, -4f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[1], iLocal_147, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_clerk1", 8f, -4f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[2], iLocal_147, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_clerk2", 8f, -4f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[3], iLocal_147, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_clerk3", 8f, -4f, 1, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_147, 1);
			return 1;
		}
	}
	return 0;
}

int func_298()//Position - 0x1851A
{
	int iVar0;
	
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup1");
	if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup1"))
	{
		if (((!PED::IS_PED_INJURED(iLocal_51[0]) && !PED::IS_PED_INJURED(iLocal_51[1])) && !PED::IS_PED_INJURED(iLocal_51[2])) && !PED::IS_PED_INJURED(iLocal_51[3]))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
				iVar0++;
			}
			iLocal_146 = PED::CREATE_SYNCHRONIZED_SCENE(Local_109, Local_110, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[0], iLocal_146, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_manager", 4f, -8f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[1], iLocal_146, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk1", 4f, -8f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[2], iLocal_146, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk2", 4f, -8f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[3], iLocal_146, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk3", 4f, -8f, 1, 0, 1148846080, 0);
			return 1;
		}
	}
	return 0;
}

int func_299()//Position - 0x18623
{
	int iVar0;
	
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup1");
	if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup1"))
	{
		Local_118[0 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_manager", Local_109, Local_110, 0, 2) };
		Local_118[1 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk1", Local_109, Local_110, 0, 2) };
		Local_118[2 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk2", Local_109, Local_110, 0, 2) };
		Local_118[3 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk3", Local_109, Local_110, 0, 2) };
		Local_119[0 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_manager", Local_109, Local_110, 0, 2) };
		Local_119[1 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk1", Local_109, Local_110, 0, 2) };
		Local_119[2 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk2", Local_109, Local_110, 0, 2) };
		Local_119[3 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk3", Local_109, Local_110, 0, 2) };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_51[iVar0]))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_51[iVar0], Local_118[iVar0 /*3*/], 1f, -1, 0.25f, 512, Local_119[iVar0 /*3*/].f_2);
			}
			iVar0++;
		}
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 0, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 0, 1, 0);
		return 1;
	}
	return 0;
}

int func_300()//Position - 0x18787
{
	int iVar0;
	int iVar1;
	
	STREAMING::REQUEST_MODEL(joaat("a_m_m_business_01"));
	STREAMING::REQUEST_MODEL(joaat("a_f_y_business_01"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_business_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_business_01")))
	{
		if (iLocal_252 == -1)
		{
			iLocal_252 = 0;
		}
		if (iLocal_252 == 0 && !ENTITY::DOES_ENTITY_EXIST(iLocal_51[0]))
		{
			iLocal_51[0] = PED::CREATE_PED(4, joaat("a_m_m_business_01"), Local_250[0 /*3*/], fLocal_251[0], 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[0], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[0], 11, 0, 0, 0);
		}
		if (iLocal_252 == 1 && !ENTITY::DOES_ENTITY_EXIST(iLocal_51[1]))
		{
			iLocal_51[1] = PED::CREATE_PED(5, joaat("a_f_y_business_01"), Local_250[1 /*3*/], fLocal_251[1], 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[1], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[1], 4, 0, 1, 0);
		}
		if (iLocal_252 == 2 && !ENTITY::DOES_ENTITY_EXIST(iLocal_51[2]))
		{
			iLocal_51[2] = PED::CREATE_PED(5, joaat("a_f_y_business_01"), Local_250[2 /*3*/], fLocal_251[2], 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[2], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[2], 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[2], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[2], 4, 1, 0, 0);
		}
		if (iLocal_252 == 3 && !ENTITY::DOES_ENTITY_EXIST(iLocal_51[3]))
		{
			iLocal_51[3] = PED::CREATE_PED(4, joaat("a_m_m_business_01"), Local_250[3 /*3*/], fLocal_251[3], 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[3], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[3], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[3], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[3], 11, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!PED::IS_PED_INJURED(iLocal_51[iVar0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_51[iVar0], 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_51[iVar0], 17, 1);
					PED::SET_PED_HEARING_RANGE(iLocal_51[iVar0], 15f);
					PED::SET_PED_SEEING_RANGE(iLocal_51[iVar0], 15f);
					PED::SET_PED_CONFIG_FLAG(iLocal_51[iVar0], 118, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51[iVar0], 1);
					PED::SET_PED_KEEP_TASK(iLocal_51[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_252 = -1;
		}
		else
		{
			iLocal_252++;
		}
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_301()//Position - 0x18A2C
{
	int iVar0;
	
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup3");
	if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup3"))
	{
		if ((((((!PED::IS_PED_INJURED(iLocal_51[0]) && !PED::IS_PED_INJURED(iLocal_51[1])) && !PED::IS_PED_INJURED(iLocal_51[2])) && !PED::IS_PED_INJURED(iLocal_51[3])) && !PED::IS_PED_INJURED(Local_248[iLocal_153 /*9*/][0])) && !PED::IS_PED_INJURED(Local_248[iLocal_153 /*9*/][1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iLocal_153 /*9*/].f_3, 0))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
				iVar0++;
			}
			TASK::CLEAR_PED_TASKS(Local_248[iLocal_153 /*9*/][0]);
			TASK::CLEAR_PED_TASKS(Local_248[iLocal_153 /*9*/][1]);
			iLocal_148 = PED::CREATE_SYNCHRONIZED_SCENE(Local_109, Local_110, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_248[iLocal_153 /*9*/][0], iLocal_148, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Cop_Driver", 1000f, -1000f, 20, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_248[iLocal_153 /*9*/][1], iLocal_148, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Cop_Passenger", 1000f, -1000f, 20, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[0], iLocal_148, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Manager", 4f, -4f, 17, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[1], iLocal_148, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Clerk1", 4f, -4f, 17, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[2], iLocal_148, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Clerk2", 4f, -4f, 17, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[3], iLocal_148, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Clerk3", 4f, -4f, 17, 0, 1148846080, 0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_248[iLocal_153 /*9*/].f_3, 0);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_248[iLocal_153 /*9*/].f_3, iLocal_148, "Cops_Response_Outro_CAR", "missheistpaletoscoresetup_setup3", 1000f, -1000f, 32 | 1 | 4, 1000f);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_248[iLocal_153 /*9*/].f_3);
			return 1;
		}
	}
	return 0;
}

void func_302(int iParam0, struct<3> Param1, struct<3> Param2, var uParam3, float fParam4, float fParam5)//Position - 0x18C38
{
	var uVar0[4];
	
	ENTITY::SET_ENTITY_COORDS(iParam0, func_303(Param1, Param2, *fParam5), 1, 0, 0, 1);
	MISC::SLERP_NEAR_QUATERNION(*fParam5, (*uParam3)[0], (*uParam3)[1], (*uParam3)[2], (*uParam3)[3], (*fParam4)[0], (*fParam4)[1], (*fParam4)[2], (*fParam4)[3], &(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]));
	ENTITY::SET_ENTITY_QUATERNION(iParam0, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
}

Vector3 func_303(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x18CBB
{
	return FtoV((1f - fParam2)) * Param0 + Vector(fParam2, fParam2, fParam2) * Param1;
}

int func_304(bool bParam0)//Position - 0x18CD6
{
	int iVar0;
	char cVar1[24];
	int iVar2;
	
	iVar0 = 0;
	STREAMING::REQUEST_MODEL(joaat("sheriff"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_168);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, sLocal_168);
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_168);
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, sLocal_168);
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("sheriff")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_168)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, sLocal_168)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_168)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, sLocal_168))
	{
		iVar0 = 0;
		while (iVar0 < Local_248)
		{
			Local_248[iVar0 /*9*/] = { func_305(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iVar0 + 1, 0f, sLocal_168), 0f, iVar0 + 1) };
			if ((!PED::IS_PED_INJURED(Local_248[iVar0 /*9*/][0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar0 /*9*/].f_3, 0)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[iVar0 /*9*/].f_4, sLocal_168))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_248[iVar0 /*9*/].f_3, 1, 1);
				VEHICLE::SET_VEHICLE_SIREN(Local_248[iVar0 /*9*/].f_3, !bParam0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_248[iVar0 /*9*/].f_3, Local_248[iVar0 /*9*/].f_4, sLocal_168, 1);
				if (bParam0)
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_248[iVar0 /*9*/].f_3);
				}
				StringCopy(&cVar1, "cop car ", 24);
				StringIntConCat(&cVar1, iVar0, 24);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(Local_248[iVar0 /*9*/].f_3, &cVar1);
			}
			iVar0++;
		}
	}
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < Local_248)
	{
		if ((!ENTITY::DOES_ENTITY_EXIST(Local_248[iVar0 /*9*/].f_3) || !ENTITY::DOES_ENTITY_EXIST(Local_248[iVar0 /*9*/][0])) || !ENTITY::DOES_ENTITY_EXIST(Local_248[iVar0 /*9*/][1]))
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return iVar2;
}

struct<9> func_305(struct<3> Param0, float fParam1, var uParam2)//Position - 0x18E8D
{
	struct<9> Var0;
	
	Var0 = 2;
	if (STREAMING::HAS_MODEL_LOADED(joaat("sheriff")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
	{
		Var0.f_5 = 1;
		Var0.f_4 = uParam2;
		Var0.f_3 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), Param0, fParam1, 1, 1);
		Var0[0] = PED::CREATE_PED_INSIDE_VEHICLE(Var0.f_3, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(Var0[0], joaat("weapon_pistol"), -1, 0, 1);
		Var0[1] = PED::CREATE_PED_INSIDE_VEHICLE(Var0.f_3, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(Var0[1], joaat("weapon_pistol"), -1, 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Var0[0], iLocal_78);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Var0[1], iLocal_78);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Var0.f_3, 1);
		Var0.f_7 = 0;
	}
	return Var0;
}

int func_306(var uParam0)//Position - 0x18F4D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1)) < 22500f)
		{
			return 1;
		}
	}
	return 0;
}

int func_307()//Position - 0x18F83
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 99999f;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_248)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_248[iVar0 /*9*/].f_3))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar0 /*9*/].f_3, 0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_248[iVar0 /*9*/].f_3, 1)) < (fVar1 * fVar1))
				{
					iVar2 = iVar0;
					fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_248[iVar0 /*9*/].f_3, 1));
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_308()//Position - 0x19011
{
	Local_117 = { Local_117 + Local_116 - Local_117 * Vector(fLocal_145, fLocal_145, fLocal_145) };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_59))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
		{
			iLocal_59 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Local_117, 1, 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_59, 1);
			ENTITY::SET_ENTITY_COLLISION(iLocal_59, 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_59, Local_117, 1, 0, 0, 1);
	}
	func_309(&Local_81, iLocal_59, "CBH_FCUSHLP", 0, 1, 1, 1);
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0) || bLocal_137)
	{
		if (func_267("CBH_FCUSHLP"))
		{
			if (!iLocal_138)
			{
				HUD::CLEAR_HELP(0);
				iLocal_138 = 1;
			}
		}
		else if (!bLocal_137)
		{
			if (iLocal_136)
			{
				iLocal_136 = 0;
			}
			if (iLocal_138)
			{
				iLocal_138 = 0;
			}
		}
	}
}

void func_309(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x190DF
{
	func_310(bParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_310(bool bParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x190FC
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_266(bParam0, 0, 0);
	}
	bParam0->f_6 = 2;
	func_311(bParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_311(bool bParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x19134
{
	int iVar0;
	int iVar1;
	
	if (bParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (bParam0->f_8 + bParam0->f_9))
		{
			bParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_267(iVar0))
	{
		func_328();
	}
	if (func_327(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_322(bParam0, bParam5, bParam7, 0))
			{
				func_319(bParam0, iParam1, Param2, iParam4);
			}
			if (*bParam0)
			{
				*bParam0 = 0;
			}
			else if (bParam0->f_6 == 2)
			{
				if (func_316(iVar0))
				{
					if ((MISC::IS_STRING_NULL(bParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_267(iVar0))
							{
								func_315(iVar0, -1);
								bParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_314(1);
								}
							}
						}
					}
				}
			}
			else if (func_316(iVar0))
			{
				if (MISC::IS_STRING_NULL(bParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_267(iVar0))
						{
							func_315(iVar0, -1);
							bParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_314(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam3))
			{
				if (func_267(sParam3))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_266(bParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_266(bParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_266(bParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_266(bParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_266(bParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_266(bParam0, iVar0, 1);
				}
			}
			if (!func_322(bParam0, bParam5, bParam7, 0))
			{
				if ((!*bParam0 && !bParam0->f_1) && !func_313(bParam0))
				{
					func_312(bParam0);
				}
			}
		}
	}
	else
	{
		func_266(bParam0, iVar0, 0);
	}
}

void func_312(bool bParam0)//Position - 0x194A1
{
	if (func_327(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (bParam0->f_B)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			bParam0->f_B = 0;
		}
	}
	bParam0->f_2 = -1;
	*bParam0 = 1;
}

int func_313(bool bParam0)//Position - 0x1950A
{
	int iVar0;
	
	if (bParam0->f_2 > 0)
	{
		iVar0 = (bParam0->f_A / 2);
		if (bParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_314(bool bParam0)//Position - 0x19535
{
	switch (Global_8861)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_17C49.f_206F.f_64++;
			}
			return Global_17C49.f_206F.f_64;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_17C49.f_206F.f_65++;
			}
			return Global_17C49.f_206F.f_65;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_17C49.f_206F.f_66++;
			}
			return Global_17C49.f_206F.f_66;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_315(char* sParam0, int iParam1)//Position - 0x195DF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_316(char* sParam0)//Position - 0x195F6
{
	if (!func_317(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_267(sParam0)) || func_267("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_8861)
	{
		case 0:
		case 3:
			if (func_314(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_314(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_314(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_317(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1968F
{
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_262(0))
	{
		return 0;
	}
	if (func_318())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_105F2)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_CADC)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_318()//Position - 0x1980B
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

void func_319(bool bParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x19820
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		func_266(bParam0, 0, 0);
	}
	if (func_31(Param2, 0f, 0f, 0f))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_320())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = bParam0->f_9;
	iVar2 = bParam0->f_A;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	bParam0->f_B = 1;
	bParam0->f_8 = MISC::GET_GAME_TIMER();
	bParam0->f_1 = 1;
	*bParam0 = 0;
}

bool func_320()//Position - 0x19923
{
	return func_321(PLAYER::PLAYER_ID());
}

int func_321(int iParam0)//Position - 0x19933
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_322(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x19952
{
	if (bParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (bParam0->f_8 + bParam0->f_9))
		{
			bParam0->f_1 = 0;
		}
	}
	switch (bParam0->f_5)
	{
		case 0:
			bParam0->f_7 = 0;
			if (bParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_326(bParam1, bParam2, bParam3))
					{
						bParam0->f_4 = MISC::GET_GAME_TIMER();
						bParam0->f_5 = 1;
						bParam0->f_7 = 1;
					}
				}
				else if (func_325(bParam1, bParam2, bParam3))
				{
					bParam0->f_4 = MISC::GET_GAME_TIMER();
					bParam0->f_5 = 1;
					bParam0->f_7 = 1;
				}
			}
			else if (bParam0->f_6 == 1)
			{
				if (func_325(bParam1, bParam2, bParam3))
				{
					bParam0->f_4 = MISC::GET_GAME_TIMER();
					bParam0->f_5 = 1;
					bParam0->f_7 = 1;
				}
			}
			else if (bParam0->f_6 == 2)
			{
				if (func_326(bParam1, bParam2, bParam3))
				{
					bParam0->f_4 = MISC::GET_GAME_TIMER();
					bParam0->f_5 = 1;
					bParam0->f_7 = 1;
				}
			}
			if (func_313(bParam0))
			{
				bParam0->f_7 = 1;
				bParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - bParam0->f_4) <= 500)
			{
				if (bParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_326(bParam1, bParam2, bParam3))
						{
							bParam0->f_4 = MISC::GET_GAME_TIMER();
							bParam0->f_5 = 3;
						}
					}
					else if (!func_325(bParam1, bParam2, bParam3))
					{
						bParam0->f_4 = MISC::GET_GAME_TIMER();
						bParam0->f_5 = 3;
					}
				}
				else if (bParam0->f_6 == 1)
				{
					if (!func_325(bParam1, bParam2, bParam3))
					{
						bParam0->f_4 = MISC::GET_GAME_TIMER();
						bParam0->f_5 = 3;
					}
				}
				else if (bParam0->f_6 == 2)
				{
					if (!func_326(bParam1, bParam2, bParam3))
					{
						bParam0->f_4 = MISC::GET_GAME_TIMER();
						bParam0->f_5 = 3;
					}
				}
			}
			else
			{
				bParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (bParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_326(bParam1, bParam2, bParam3))
					{
						bParam0->f_5 = 0;
					}
				}
				else if (!func_325(bParam1, bParam2, bParam3))
				{
					bParam0->f_5 = 0;
				}
			}
			else if (bParam0->f_6 == 1)
			{
				if (!func_325(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					bParam0->f_5 = 0;
				}
			}
			else if (bParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					bParam0->f_5 = 0;
				}
				else if (!func_326(bParam1, bParam2, bParam3))
				{
					bParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - bParam0->f_4) > 500)
			{
				if (bParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_324(bParam1, bParam2, bParam3))
						{
							bParam0->f_5 = 0;
						}
					}
					else if (func_323(bParam1, bParam2, bParam3))
					{
						bParam0->f_5 = 0;
					}
				}
				else if (bParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_323(bParam1, bParam2, bParam3))
					{
						bParam0->f_5 = 0;
					}
				}
				else if (bParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						bParam0->f_5 = 0;
					}
					else if (func_324(bParam1, bParam2, bParam3))
					{
						bParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_313(bParam0))
			{
				bParam0->f_5 = 0;
			}
			break;
	}
	if (!func_317(bParam1, bParam2, bParam3))
	{
		bParam0->f_5 = 0;
		bParam0->f_7 = 0;
	}
	if (bParam0->f_7)
	{
		func_328();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_323(bool bParam0, bool bParam1, bool bParam2)//Position - 0x19CBE
{
	if (!func_317(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_324(bool bParam0, bool bParam1, bool bParam2)//Position - 0x19D10
{
	if (!func_317(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_325(bool bParam0, bool bParam1, bool bParam2)//Position - 0x19D59
{
	if (!func_317(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_60)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_326(bool bParam0, bool bParam1, bool bParam2)//Position - 0x19DB8
{
	if (!func_317(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_60)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_327(int iParam0)//Position - 0x19E0E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_328()//Position - 0x19E69
{
	MISC::SET_BIT(&Global_8D8, 4);
}

void func_329()//Position - 0x19E79
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && func_330(1))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_54))
			{
				HUD::REMOVE_BLIP(&uLocal_54);
			}
			switch (iLocal_302)
			{
				case 0:
					if (!HUD::DOES_BLIP_EXIST(uLocal_53))
					{
						uLocal_53 = func_44(Local_97, 1);
						TASK::TASK_CLEAR_LOOK_AT(iLocal_50);
						TASK::TASK_CLEAR_LOOK_AT(uLocal_185[2]);
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -86.59003f, 6420.465f, 30.21417f, -91.02832f, 6416.428f, 34.71599f, 5.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -89.0773f, 6420.377f, 31.0252f, 1f, 1f, 2.5f, 1, 1, 0))
						{
							Local_116 = { Local_112 };
							HUD::REMOVE_BLIP(&uLocal_53);
							iLocal_302++;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_164, Local_165, fLocal_166, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_62) < 0.1f)
						{
							Local_116 = { Local_112 };
							HUD::REMOVE_BLIP(&uLocal_53);
							iLocal_302 = 2;
						}
					}
					break;
				
				case 1:
					if (func_30(iLocal_62, 3f, 3, 1056964608, 0, 1))
					{
						iLocal_302++;
					}
					break;
				
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_50, iLocal_59))
						{
							TASK::TASK_LOOK_AT_COORD(iLocal_50, Local_112, -1, 16, 4);
						}
						if (!PED::IS_PED_HEADTRACKING_ENTITY(uLocal_185[2], iLocal_59))
						{
							TASK::TASK_LOOK_AT_COORD(uLocal_185[2], Local_112, -1, 16, 4);
						}
						if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_59))
						{
							TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_112, -1, 16, 4);
						}
					}
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_164, Local_165, fLocal_166, 0, 1, 0))
					{
						iLocal_302 = 0;
					}
					break;
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_53))
			{
				HUD::REMOVE_BLIP(&uLocal_53);
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_54))
			{
				uLocal_54 = func_40(iLocal_62, 0, 0);
				func_84(&Local_244);
			}
			func_336();
		}
	}
}

int func_330(bool bParam0)//Position - 0x1A089
{
	if (bParam0)
	{
		return ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && !PED::IS_PED_INJURED(uLocal_185[2])) && !PED::IS_PED_INJURED(iLocal_50));
	}
	else
	{
		return (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && !PED::IS_PED_INJURED(uLocal_185[2]));
	}
	return 0;
}

void func_331()//Position - 0x1A0DA
{
	bool bVar0;
	struct<6> Var1;
	
	if (iLocal_162 == -1)
	{
		if (Local_242.f_1)
		{
			iLocal_162 = MISC::GET_GAME_TIMER();
		}
	}
	bLocal_134 = (MISC::GET_GAME_TIMER() - iLocal_162) < 5000;
	if ((((MISC::GET_GAME_TIMER() - iLocal_154) > 5000 && func_335()) && !PED::IS_PED_INJURED(uLocal_185[2])) && !PED::IS_PED_INJURED(iLocal_50))
	{
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)) && !bLocal_125) && !bLocal_133)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		if (func_43())
		{
			Var1 = { func_334() };
		}
		switch (iLocal_158)
		{
			case 0:
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_168);
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, sLocal_168);
				VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_168);
				VEHICLE::REQUEST_VEHICLE_RECORDING(4, sLocal_168);
				func_333("RBS1_HIDE1", bVar0, (MISC::GET_GAME_TIMER() - iLocal_154), 5000, 6000);
				if (!func_43() && (MISC::GET_GAME_TIMER() - iLocal_154) > 0)
				{
					bLocal_266 = false;
					iLocal_265 = 0;
					StringCopy(&cLocal_267, "", 24);
					iLocal_158++;
				}
				break;
			
			case 1:
				func_333("RBS1_HIDE2", bVar0, (MISC::GET_GAME_TIMER() - iLocal_154), 18000, 20000);
				if ((!func_43() || bLocal_266) && (MISC::GET_GAME_TIMER() - iLocal_154) > 20000)
				{
					bLocal_266 = false;
					iLocal_265 = 0;
					StringCopy(&cLocal_267, "", 24);
					iLocal_300 = 0;
					iLocal_158++;
				}
				break;
			
			case 2:
				func_333("RBS1_HIDE3", bVar0, (MISC::GET_GAME_TIMER() - iLocal_154), 35000, 39000);
				if (!iLocal_300 && iLocal_265)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_185[2], "missrbhsig_2", "four_cars_trevor", 3))
					{
						TASK::TASK_PLAY_ANIM(uLocal_185[2], "missrbhsig_2", "four_cars_trevor", 2f, -2f, -1, 0, 0, 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, "missrbhsig_2", "four_cars_lester", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_50, "missrbhsig_2", "four_cars_lester", 2f, -2f, -1, 0, 0, 0, 0, 0);
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_185[2], "missrbhsig_2", "four_cars_trevor", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, "missrbhsig_2", "four_cars_Lester", 3))
					{
						iLocal_300 = 1;
					}
				}
				if ((!func_43() || bLocal_266) && (MISC::GET_GAME_TIMER() - iLocal_154) > 39000)
				{
					bLocal_266 = false;
					iLocal_265 = 0;
					StringCopy(&cLocal_267, "", 24);
					iLocal_300 = 0;
					iLocal_158++;
				}
				break;
			
			case 3:
				func_333("RBS1_HIDE4", bVar0, (MISC::GET_GAME_TIMER() - iLocal_154), 59000, 59000);
				if (!iLocal_300 && iLocal_265)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_185[2], "missrbhsig_2", "what_do_you_got_trevor", 3))
					{
						TASK::TASK_PLAY_ANIM(uLocal_185[2], "missrbhsig_2", "what_do_you_got_trevor", 2f, -2f, -1, 0, 0, 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, "missrbhsig_2", "what_do_you_got_lester", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_50, "missrbhsig_2", "what_do_you_got_lester", 2f, -2f, -1, 0, 0, 0, 0, 0);
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_185[2], "missrbhsig_2", "what_do_you_got_trevor", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, "missrbhsig_2", "what_do_you_got_Lester", 3))
					{
						iLocal_300 = 1;
					}
				}
				if ((!func_43() || bLocal_266) && (MISC::GET_GAME_TIMER() - iLocal_154) > 59000)
				{
					bLocal_266 = false;
					iLocal_265 = 0;
					iLocal_300 = 0;
					StringCopy(&cLocal_267, "", 24);
					iLocal_158++;
				}
				break;
			
			case 4:
				break;
		}
	}
	else if (!func_335() && iLocal_158 > 1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_159) > 5000 && !bLocal_134)
		{
			if (func_6(&Local_232, cLocal_167, "RBS1_CNTSEE", 8, 0, 0, 0))
			{
				iLocal_159 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if ((bLocal_125 && (bLocal_266 || func_332())) && !iLocal_126)
	{
		func_46();
		if (func_6(&Local_232, cLocal_167, "RBS1_HOTTY", 8, 0, 0, 0))
		{
			iLocal_126 = 1;
		}
	}
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -77.35259f, 6418.271f, 25.79452f, -165.4273f, 6505.104f, 33.55246f, 100f, 0, 1, 0) && (MISC::GET_GAME_TIMER() - iLocal_157) > 5000) && !func_43())
	{
		if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !bLocal_134))
		{
			func_6(&Local_232, cLocal_167, "RBS1_MESS", 8, 0, 0, 0);
			iLocal_157 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_332()//Position - 0x1A56B
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (Global_3D4C == 0)
	{
		if ((iVar0 - Global_414A) > 3000)
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_333(char* sParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1A5AA
{
	if (bParam1)
	{
		if (!iLocal_265)
		{
			if (iParam2 < iParam3)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_6(&Local_232, cLocal_167, sParam0, 8, 0, 0, 0))
					{
						bLocal_266 = false;
						iLocal_265 = 1;
					}
				}
			}
		}
		if (bLocal_266)
		{
			if (iParam2 < iParam4)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_239(&Local_232, cLocal_167, sParam0, &cLocal_267, 8, 0, 0))
					{
						bLocal_266 = false;
					}
				}
			}
		}
	}
	if (!bParam1)
	{
		if (!bLocal_266)
		{
			cLocal_267 = { func_238() };
			func_46();
			bLocal_266 = true;
		}
	}
}

struct<6> func_334()//Position - 0x1A636
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		return Global_3BCF;
	}
	return Var0;
}

bool func_335()//Position - 0x1A65A
{
	return (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_62, -113.9146f, 6415.774f, 20.92422f, -151.9467f, 6377.942f, 51.45014f, 50.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_62, -158.9227f, 6484.175f, 19.42225f, -89.31187f, 6412.26f, 57.34415f, 50.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_62, -135.8324f, 6496.841f, -8.871904f, -124.4626f, 6508.426f, 56.73236f, 14.5f, 0, 1, 0)));
}

void func_336()//Position - 0x1A6FE
{
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_62, Local_164, Local_165, fLocal_166, 0, 1, 0))
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !PED::IS_PED_INJURED(iLocal_50))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_264) > 5000 && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 15f)
			{
				if (func_6(&Local_232, cLocal_167, "RBS1_GETIN", 8, 0, 0, 0))
				{
					iLocal_264 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_337(int iParam0, bool bParam1)//Position - 0x1A77F
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { Vector(146.0607f, 4927.538f, -491.5252f) - Vector(20f, 50f, 50f) };
				Var1 = { Vector(146.0607f, 4927.538f, -491.5252f) + Vector(20f, 50f, 50f) };
				break;
			
			case 1:
				Var0 = { Local_112 - Vector(10f, 20f, 20f) };
				Var1 = { Local_112 + Vector(20f, 20f, 20f) };
				break;
			
			case 2:
				Var0 = { Vector(28.28359f, 6508.671f, -120.0073f) - Vector(1.75f, 32.5f, 19.75f) };
				Var1 = { Vector(28.28359f, 6508.671f, -120.0073f) + Vector(1.75f, 32.5f, 19.75f) };
				break;
			
			case 3:
				Var0 = { Local_99 - Vector(100f, 50f, 50f) };
				Var1 = { Local_99 + Vector(100f, 50f, 50f) };
				break;
			
			case 4:
				Var0 = { Local_97 - Vector(15f, 35f, 35f) };
				Var1 = { Local_97 + Vector(15f, 35f, 35f) };
				break;
			
			case 5:
				Var0 = { Local_92 - Vector(10f, 10f, 10f) };
				Var0 = { Local_92 + Vector(10f, 10f, 10f) };
				break;
		}
		if (!func_338(iParam0))
		{
			uLocal_76[iParam0] = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, 0, 1, 1, 1);
			MISC::SET_BIT(&uLocal_77, iParam0);
		}
	}
	else if (func_338(iParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_76[iParam0], 0);
		MISC::CLEAR_BIT(&uLocal_77, iParam0);
	}
}

bool func_338(int iParam0)//Position - 0x1A95C
{
	return MISC::IS_BIT_SET(uLocal_77, iParam0);
}

void func_339()//Position - 0x1A96C
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -201.0272f, 6374.652f, 28.04661f, -41.19576f, 6532.621f, 40.49076f, 157.75f, 0, 1, 0))
	{
		HUD::CLEAR_PRINTS();
		func_86();
		SYSTEM::WAIT(0);
		func_87("CBH_LFTAREA");
	}
	if (!iLocal_301)
	{
		iVar0 = 0;
		while (iVar0 < Local_248)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar0 /*9*/].f_3, 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_248[iVar0 /*9*/].f_3, -145.0855f, 6484.485f, 27.72799f, -92.52125f, 6431.291f, 40.35595f, 58f, 0, 1, 0))
				{
					iLocal_301 = 1;
				}
			}
			iVar0++;
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_164, Local_165, fLocal_166, 0, 1, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_62, Local_164, Local_165, fLocal_166, 0, 1, 0))
	{
		if (iLocal_49 == 0)
		{
			if (func_340(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_49 = 2;
			}
		}
		if (iLocal_49 == 0)
		{
			if (func_340(iLocal_62))
			{
				iLocal_49 = 3;
			}
		}
		if (iLocal_49 == 0)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_164, Local_165, fLocal_166, 0, 1, 0))
			{
				func_87("CBH_COPMISS");
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_62, Local_164, Local_165, fLocal_166, 0, 1, 0))
			{
				func_87("CBH_COPMILT");
			}
		}
	}
	if (func_182(iLocal_62, 0))
	{
		HUD::CLEAR_PRINTS();
		func_25();
		if (bLocal_127)
		{
			iLocal_49 = 2;
		}
		else
		{
			iLocal_49 = 1;
		}
	}
	if (func_83(uLocal_185[2], &Local_246))
	{
		HUD::CLEAR_PRINTS();
		func_25();
		func_87("CBH_AB2BOTH");
	}
	if (bLocal_127)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_164, Local_165, fLocal_166, 0, 1, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_62, Local_164, Local_165, fLocal_166, 0, 1, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_62, -104.1284f, 6385.127f, 22.43802f, -54.79927f, 6433.795f, 61.37744f, 26.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -104.1284f, 6385.127f, 22.43802f, -54.79927f, 6433.795f, 61.37744f, 26.75f, 0, 1, 0))
			{
				func_87("CBH_LFTAREA");
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_164, Local_165, fLocal_166, 0, 1, 0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			iLocal_49 = 2;
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		iLocal_49 = 2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_229))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_230))
		{
			if (((!PED::IS_PED_INJURED(iLocal_229) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_230, PLAYER::PLAYER_PED_ID(), 1)) && (PED::IS_PED_IN_VEHICLE(iLocal_229, iLocal_230, 0) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_229, iLocal_230, 5f, 5f, 3f, 0, 1, 0)))
			{
				iLocal_49 = 4;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_229, PLAYER::PLAYER_PED_ID(), 1) && !ENTITY::IS_ENTITY_DEAD(iLocal_229))
			{
				iLocal_49 = 4;
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, 0))
	{
		if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_230))
		{
			if (bLocal_127)
			{
				iLocal_49 = 2;
			}
			else
			{
				iLocal_49 = 1;
			}
		}
	}
	if (iLocal_49 != 0)
	{
		func_28(11);
	}
}

int func_340(int iParam0)//Position - 0x1ACC8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -90.57478f, 6424.711f, 40.48994f, -170.8789f, 6505.736f, 28.48912f, 69f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -168.8253f, 6502.429f, 39.78346f, -206.7632f, 6527.751f, 10.09798f, 69f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_341()//Position - 0x1AD3F
{
	bool bVar0;
	int iVar1[4];
	int iVar2;
	int iVar3;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_293();
	if (ENTITY::DOES_ENTITY_EXIST(Local_249))
	{
		if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_249, PLAYER::PLAYER_PED_ID(), 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(3, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(25, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_249, 0f, 1.5f, 1.5f), 3f))
		{
			Local_249.f_D = (Local_249.f_D + (Local_249.f_E - ENTITY::GET_ENTITY_HEALTH(Local_249)));
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_249);
			Local_249.f_E = ENTITY::GET_ENTITY_HEALTH(Local_249);
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_87("CBH_BANKALERT");
	}
	if (CAM::DOES_CAM_EXIST(uLocal_64))
	{
		bVar0 = false;
		func_348(&(iVar1[0]), &(iVar1[1]), &(iVar1[2]), &(iVar1[3]), 0, 0);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (MISC::ABSI(iVar1[iVar2]) > 0)
			{
				bVar0 = true;
			}
			iVar2++;
		}
		if ((((((((((PAD::IS_CONTROL_JUST_PRESSED(0, 23) || PAD::IS_CONTROL_JUST_PRESSED(0, 24)) || PAD::IS_CONTROL_JUST_PRESSED(0, 25)) || PAD::IS_CONTROL_JUST_PRESSED(0, 27)) || PAD::IS_CONTROL_JUST_PRESSED(0, 28)) || PAD::IS_CONTROL_JUST_PRESSED(0, 29)) || PAD::IS_CONTROL_JUST_PRESSED(0, 36)) || PAD::IS_CONTROL_JUST_PRESSED(0, 37)) || PAD::IS_CONTROL_JUST_PRESSED(0, 44)) || PAD::IS_CONTROL_JUST_PRESSED(0, 45)) || PAD::IS_CONTROL_JUST_PRESSED(0, 47))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(1.5552f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-2.8327f, 1065353216);
			CAM::RENDER_SCRIPT_CAMS(false, 1, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(iLocal_64, 0);
		}
	}
	else
	{
		func_346(&Local_81, Local_114, 0, 1726668277, 1, 0, 1);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && ENTITY::DOES_ENTITY_EXIST(Local_249))
	{
		if (!func_74() && !CAM::DOES_CAM_EXIST(iLocal_64))
		{
			func_290(500);
			func_28(9);
		}
		else
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_103) <= 10000f)
			{
				EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
				if (!HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					uLocal_57 = func_345(Local_249);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_57, "CBH_BLIPALARM");
					iLocal_289 = 0;
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, false);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_54))
				{
					HUD::REMOVE_BLIP(&uLocal_54);
				}
				if (iLocal_149 > 0)
				{
					if (func_267("CBH_FCUSALM"))
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE() || Local_81.f_1)
						{
							HUD::CLEAR_HELP(1);
						}
					}
				}
				switch (iLocal_149)
				{
					case 0:
						iLocal_160 = MISC::GET_GAME_TIMER();
						if (!PED::IS_PED_INJURED(uLocal_185[2]))
						{
							TASK::TASK_LOOK_AT_ENTITY(uLocal_185[2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (!PED::IS_PED_INJURED(iLocal_50))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						func_315("CBH_FCUSALM", -1);
						func_290(500);
						iLocal_149++;
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						SYSTEM::SETTIMERA(0);
						break;
					
					case 1:
						if (!func_43())
						{
							SYSTEM::SETTIMERA(0);
							iLocal_149++;
						}
						break;
					
					case 2:
						if (SYSTEM::TIMERA() > 1000)
						{
							func_84(&Local_241);
							AUDIO::START_AUDIO_SCENE("PS_1_SHOOT_THE_ALARM");
							SYSTEM::SETTIMERA(0);
							RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
							iLocal_149++;
						}
						break;
					
					case 3:
						if (SYSTEM::TIMERA() > 5000)
						{
							iLocal_149++;
						}
						break;
					
					case 4:
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_62, 1)) <= 625f)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -125.8731f, 6486.835f, 25.79036f, -156.4628f, 6518.318f, 35.25981f, 55f, 0, 1, 0))
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_160) > 7500)
									{
										if (func_6(&Local_232, cLocal_167, "RBS1_GOBACK", 8, 0, 0, 0))
										{
											iLocal_160 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_160) > 7500)
								{
									if (func_6(&Local_232, cLocal_167, "RBS1_GETOUT", 8, 0, 0, 0))
									{
										iLocal_160 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if (func_4())
							{
								if (!iLocal_290)
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_160) > 15000)
									{
										if (func_6(&Local_232, cLocal_167, "RBS1_SHOOT", 8, 0, 0, 0))
										{
											iLocal_160 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_160) > 7500)
								{
									if (func_6(&Local_232, cLocal_167, "RBS1_MISS", 8, 0, 0, 0))
									{
										iLocal_160 = MISC::GET_GAME_TIMER();
										iLocal_290 = 0;
									}
								}
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_160) > 7500)
							{
								if (func_6(&Local_232, cLocal_167, "RBS1_CLOSE", 8, 0, 0, 0))
								{
									iLocal_160 = MISC::GET_GAME_TIMER();
								}
							}
						}
						break;
				}
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1);
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && iVar3 != joaat("weapon_petrolcan"))
				{
					iLocal_163++;
					if (!Local_249.f_9)
					{
						if (!iLocal_290)
						{
							iLocal_290 = 1;
						}
					}
				}
				if (iLocal_163 > 20 && !Local_249.f_9)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					func_87("CBH_BNKFAIL");
				}
			}
			else
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_103) > 16900f)
				{
					HUD::CLEAR_PRINTS();
					func_25();
					func_87("CBH_LFTAREA");
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_160) > 7500)
					{
						if (func_6(&Local_232, cLocal_167, "RBS1_GOBACK", 8, 0, 0, 0))
						{
							iLocal_160 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-1000, 1000));
						}
					}
				}
				if (!iLocal_289)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_45("CBH_SHTBOX2", 7500, 1);
						iLocal_289 = 1;
					}
				}
			}
			if (func_330(1))
			{
				if (Local_249.f_9 && ENTITY::DOES_ENTITY_EXIST(Local_249))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
					HUD::CLEAR_PRINTS();
					func_25();
					if (!PED::IS_PED_INJURED(uLocal_185[2]))
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_185[2], PLAYER::PLAYER_PED_ID(), -1, 16, 2);
					}
					if (!PED::IS_PED_INJURED(iLocal_50))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						func_2(&uLocal_57);
					}
					func_342(6, 1, 0);
					func_266(&Local_81, "CBH_FCUSALM", 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-135.3092f, 6479.615f, 32.653f, 11.75f, 6.75f, 4.5f, 1, 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-134.3872f, 6492.855f, 30.95585f, 11.75f, 6.75f, 4.5f, 1, 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-134.5053f, 6507.014f, 30.96668f, 11.75f, 6.75f, 4.5f, 1, 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-135.3438f, 6520.587f, 30.74896f, 11.75f, 6.75f, 4.5f, 1, 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-116.3026f, 6492.045f, 33.90546f, 18f, 19.25f, 5.75f, 1, 0);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					func_28(6);
				}
			}
		}
	}
}

int func_342(int iParam0, bool bParam1, bool bParam2)//Position - 0x1B4FD
{
	int iVar0[15];
	int iVar1;
	int iVar2[15];
	int iVar3[6];
	int iVar4;
	
	iVar0[0] = joaat("player_two");
	iVar0[1] = joaat("a_m_m_salton_02");
	iVar0[2] = joaat("premier");
	iVar0[3] = joaat("prop_ld_alarm_01");
	iVar0[4] = joaat("sheriff");
	iVar0[5] = joaat("s_m_y_cop_01");
	iVar0[6] = joaat("bus");
	iVar0[7] = joaat("s_m_m_lsmetro_01");
	iVar0[8] = joaat("prop_ld_alarm_01_dam");
	iVar0[9] = joaat("a_m_m_business_01");
	iVar0[10] = joaat("a_f_y_business_01");
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar2[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < iVar3)
	{
		iVar3[iVar1] = 0;
		iVar1++;
	}
	switch (iParam0)
	{
		case 0:
			iVar2[0] = joaat("player_two");
			iVar2[1] = joaat("premier");
			iVar2[2] = joaat("prop_ld_alarm_01");
			iVar2[3] = func_344(12);
			break;
		
		case 1:
			iVar2[0] = joaat("player_two");
			iVar2[1] = joaat("premier");
			iVar2[2] = joaat("prop_ld_alarm_01");
			iVar2[4] = func_344(12);
			break;
		
		case 2:
			iVar2[0] = joaat("player_two");
			iVar2[1] = joaat("bus");
			iVar2[2] = joaat("s_m_m_lsmetro_01");
			iVar2[3] = joaat("premier");
			iVar2[4] = joaat("prop_ld_alarm_01");
			iVar2[5] = func_344(12);
			break;
		
		case 3:
			iVar2[0] = joaat("player_two");
			iVar2[1] = joaat("a_m_m_salton_02");
			iVar2[2] = joaat("bus");
			iVar2[3] = joaat("s_m_m_lsmetro_01");
			iVar2[4] = joaat("premier");
			iVar2[5] = joaat("prop_ld_alarm_01");
			iVar2[6] = func_344(12);
			break;
		
		case 4:
			iVar2[0] = joaat("player_two");
			iVar2[1] = joaat("premier");
			iVar2[2] = joaat("prop_ld_alarm_01");
			iVar2[3] = func_344(12);
			break;
		
		case 5:
			iVar2[0] = joaat("player_two");
			iVar2[1] = joaat("premier");
			iVar2[2] = joaat("prop_ld_alarm_01");
			iVar2[3] = joaat("prop_ld_alarm_01_dam");
			iVar2[4] = func_344(12);
			break;
		
		case 6:
			iVar2[0] = joaat("player_two");
			iVar2[1] = joaat("premier");
			iVar2[2] = joaat("sheriff");
			iVar2[3] = joaat("s_m_y_cop_01");
			iVar2[4] = joaat("prop_ld_alarm_01_dam");
			iVar2[5] = joaat("a_m_m_business_01");
			iVar2[6] = joaat("a_f_y_business_01");
			iVar2[7] = func_344(12);
			iVar3[0] = 1;
			iVar3[1] = 2;
			iVar3[2] = 3;
			iVar3[3] = 4;
			break;
		
		case 7:
			iVar2[0] = joaat("player_two");
			iVar2[1] = joaat("premier");
			iVar2[2] = joaat("sheriff");
			iVar2[3] = joaat("s_m_y_cop_01");
			iVar2[4] = joaat("prop_ld_alarm_01_dam");
			iVar2[5] = joaat("a_m_m_business_01");
			iVar2[6] = joaat("a_f_y_business_01");
			iVar2[7] = func_344(12);
			iVar3[0] = 1;
			iVar3[1] = 2;
			iVar3[2] = 3;
			iVar3[3] = 4;
			break;
	}
	if (bParam1)
	{
		iVar4 = 1;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (iVar2[iVar1] != 0)
			{
				STREAMING::REQUEST_MODEL(iVar2[iVar1]);
				if (!STREAMING::HAS_MODEL_LOADED(iVar2[iVar1]))
				{
					iVar4 = 0;
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			if (iVar3[iVar1] != 0)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iVar3[iVar1], sLocal_168);
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iVar3[iVar1], sLocal_168))
				{
					iVar4 = 0;
				}
			}
			iVar1++;
		}
		return iVar4;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (!func_343(iVar0[iVar1], &iVar2))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_343(int iParam0, int iParam1)//Position - 0x1B8C4
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!bVar1)
		{
			if (iParam0 == (*iParam1)[iVar0])
			{
				bVar1 = true;
			}
		}
		iVar0++;
	}
	return bVar1;
}

int func_344(int iParam0)//Position - 0x1B8F9
{
	if (!func_146(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_345(int iParam0)//Position - 0x1B924
{
	return func_41(iParam0, 1, 0);
}

void func_346(bool bParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x1B934
{
	int iVar0;
	
	if (bParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (bParam0->f_8 + bParam0->f_9))
		{
			bParam0->f_1 = 0;
		}
	}
	iVar0 = iParam2;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_267(iVar0))
	{
		func_328();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_322(bParam0, bParam4, bParam6, 0))
		{
			func_347(bParam0, Param1, iParam3);
		}
		if (*bParam0)
		{
			*bParam0 = 0;
		}
		else if (bParam0->f_6 == 2)
		{
			if (func_316(iVar0))
			{
				if ((MISC::IS_STRING_NULL(bParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam5)
					{
						if (!func_267(iVar0))
						{
							func_315(iVar0, -1);
							bParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_314(1);
							}
						}
					}
				}
			}
		}
		else if (func_316(iVar0))
		{
			if (MISC::IS_STRING_NULL(bParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam5)
				{
					if (!func_267(iVar0))
					{
						func_315(iVar0, -1);
						bParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							func_314(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (func_267(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					func_266(bParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					func_266(bParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					func_266(bParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					func_266(bParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					func_266(bParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_266(bParam0, iVar0, 1);
			}
		}
		if (!func_322(bParam0, bParam4, bParam6, 0))
		{
			if ((!*bParam0 && !bParam0->f_1) && !func_313(bParam0))
			{
				func_312(bParam0);
			}
		}
	}
}

void func_347(var uParam0, struct<3> Param1, int iParam2)//Position - 0x1BC0E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_A;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_COORD_HINT(Param1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, -1, iVar2, iVar3);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_B = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

void func_348(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x1BCAA
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_349()//Position - 0x1BDAE
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_149)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscore1rbhs_mcs_2"))
			{
				iLocal_288 = 0;
				iLocal_149++;
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && func_330(1))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62))
				{
					CAM::SET_WIDESCREEN_BORDERS(1, 500);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_62, 1);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 4f, -8f, -1, 16, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(iLocal_50, "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_lestercrest", 4f, -8f, -1, 16, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(uLocal_185[2], "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_trevor", 4f, -8f, -1, 16, 0, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_249))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_249, -1, 2052, 4);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_50, Local_249, 5000, 2052, 4);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_185[2], Local_249, 7000, 2052, 4);
					}
					func_309(&Local_81, Local_249, 0, 1726668277, 0, 1, 1);
					HUD::CLEAR_PRINTS();
					iLocal_141 = 1;
					func_290(500);
					RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
					iLocal_149++;
				}
				else if (!HUD::DOES_BLIP_EXIST(uLocal_54))
				{
					uLocal_54 = func_40(iLocal_62, 0, 0);
					if (!iLocal_288)
					{
						func_85("CMN_GENGETBCK", 7500, 1);
						iLocal_288 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_141)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 0.13f);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_lestercrest", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_50, "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_lestercrest", 0.13f);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_trevor", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uLocal_185[2], "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_trevor", 0.13f);
				}
				iLocal_141 = 0;
			}
			func_309(&Local_81, Local_249, 0, 1726668277, 0, 1, 1);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael") > 0.19f)
			{
				if (func_6(&Local_232, cLocal_167, "RBS1_BNKBOX", 8, 0, 0, 0))
				{
					iLocal_149++;
				}
			}
			break;
		
		case 3:
			func_309(&Local_81, Local_249, 0, 1726668277, 0, 1, 1);
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael") > 0.99f) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (func_74() || func_75(0) < 500)
				{
					if (func_75(0) < 500)
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 500, 0, 1);
					}
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0);
					SYSTEM::SETTIMERA(0);
					iLocal_149++;
				}
				else
				{
					STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					CAM::SET_WIDESCREEN_BORDERS(0, 500);
					func_28(9);
				}
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > 1000)
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
				STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_WIDESCREEN_BORDERS(0, 500);
				func_28(5);
			}
			break;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
	{
		if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_62))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_62, 1, 1);
		}
	}
}

void func_350()//Position - 0x1C132
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 0 && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 2) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 1)
		{
			func_266(&Local_81, 0, 0);
		}
	}
	func_293();
	if (func_330(1))
	{
		switch (iLocal_149)
		{
			case 0:
				iLocal_265 = 0;
				bLocal_266 = false;
				iLocal_285 = 0;
				iLocal_286 = 0;
				StringCopy(&cLocal_267, "", 24);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0) && !PED::IS_PED_INJURED(iLocal_52))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, -222.1229f, 6146.418f, 30.2385f, 7f, 0, joaat("bus"), 786599, 50f, 10f);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_63, 10f, 786597);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_52, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
				MISC::CLEAR_AREA_OF_PEDS(-117.54f, 6484.41f, 30.46f, 50f, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-135.3092f, 6479.615f, 32.653f, 11.75f, 6.75f, 4.5f, 0, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-134.3872f, 6492.855f, 30.95585f, 11.75f, 6.75f, 4.5f, 0, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-134.5053f, 6507.014f, 30.96668f, 11.75f, 6.75f, 4.5f, 0, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-135.3438f, 6520.587f, 30.74896f, 11.75f, 6.75f, 4.5f, 0, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-116.3026f, 6492.045f, 33.90546f, 18f, 19.25f, 5.75f, 0, 0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_BANK"))
				{
					AUDIO::START_AUDIO_SCENE("PS_1_DRIVE_TO_BANK");
				}
				SYSTEM::SETTIMERA(0);
				RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
				iLocal_149++;
				break;
			
			case 1:
				if (func_355(1) && func_330(1))
				{
					func_290(500);
					if (func_6(&Local_232, cLocal_167, "RBS1_TOGO", 8, 0, 0, 0))
					{
						iLocal_149++;
					}
				}
				break;
			
			case 2:
				func_354(&uLocal_53, &uLocal_54, Local_111, &Local_239, 1, 1, 1, 0);
				if (!func_43())
				{
					func_84(&Local_239);
				}
				if (SYSTEM::TIMERA() > 5000 && Local_239.f_1)
				{
					iLocal_149++;
				}
				break;
			
			case 3:
				func_354(&uLocal_53, &uLocal_54, Local_111, &Local_239, 1, 1, 1, 1);
				func_237("RBS1_TOBANK", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)));
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -109.7728f, 6414.386f, 20.31285f, -151.9715f, 6458.521f, 42.39143f, 32.5f, 0, 1, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62))
				{
					func_86();
					func_342(4, 1, 0);
					iLocal_265 = 0;
					bLocal_266 = false;
					StringCopy(&cLocal_267, "", 24);
					iLocal_149++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 4:
				func_354(&uLocal_53, &uLocal_54, Local_111, &Local_239, 1, 1, 1, 1);
				if (SYSTEM::TIMERA() > 0 && SYSTEM::TIMERA() < 100)
				{
					TASK::TASK_LOOK_AT_COORD(iLocal_50, Local_112, 10000, 0, 2);
				}
				if (SYSTEM::TIMERA() > 200 && SYSTEM::TIMERA() < 250)
				{
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_112, 5000, 0, 2);
				}
				if (SYSTEM::TIMERA() > 300 && SYSTEM::TIMERA() < 350)
				{
					TASK::TASK_LOOK_AT_COORD(uLocal_185[2], Local_112, 7000, 0, 2);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_111, Global_12, 1, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -134.7231f, 6448.373f, 28.4724f, -127.3561f, 6440.835f, 34.43628f, 10.75f, 0, 1, 0))
					{
						HUD::REMOVE_BLIP(&uLocal_53);
						SYSTEM::SETTIMERA(0);
						iLocal_149++;
					}
				}
				break;
			
			case 5:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				}
				if (func_30(iLocal_62, 1093140480, 1, 1056964608, 0, 1))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
					iLocal_149++;
					func_85("CBH_FOCGOD", 7500, 1);
					func_315("CBH_FCUSHLP", 15000);
					AUDIO::TRIGGER_MUSIC_EVENT("RH1_START");
					if ((CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 0 && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 2) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 1)
					{
						iLocal_287 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
					}
					else
					{
						iLocal_287 = 5;
					}
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 6:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_111, Global_12 + Vector(0f, 2f, 2f), 0, 1, 0))
				{
					if (PAD::IS_CONTROL_PRESSED(0, 80) || CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
						func_353(&Local_81, Local_112 + Vector(1.5f, 0f, 0f), "", 1726668277, 1, 0, 1);
						HUD::CLEAR_HELP(1);
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
							iLocal_149++;
						}
					}
				}
				else
				{
					if (!Local_81 && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (iLocal_287 != 5)
						{
							CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_287);
							iLocal_287 = 5;
						}
					}
					HUD::CLEAR_HELP(1);
					iLocal_149 = 4;
				}
				break;
			
			case 7:
				if (!Local_81 && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (iLocal_287 != 5)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_287);
						iLocal_287 = 5;
					}
				}
				func_237("RBS1_BNKCUT", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)));
				if (SYSTEM::TIMERA() < 3000)
				{
					func_354(&uLocal_53, &uLocal_54, Local_96, &Local_240, 0, 1, 1, 1);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_53))
					{
						func_354(&uLocal_53, &uLocal_54, Local_96, &Local_239, 1, 1, 1, 0);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_96, Global_12, 1, 1, 0))
				{
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_266(&Local_81, 0, 0);
				}
				if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62) && !func_43()) && SYSTEM::TIMERA() > 3000)
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
					iLocal_265 = 0;
					bLocal_266 = false;
					SYSTEM::SETTIMERA(0);
					iLocal_149++;
					bLocal_137 = true;
					func_84(&Local_240);
					func_266(&Local_81, 0, 0);
				}
				break;
			
			case 8:
				if (iLocal_287 != 5)
				{
					if (!Local_81 && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_287);
						iLocal_287 = 5;
					}
				}
				func_352();
				func_354(&uLocal_53, &uLocal_54, Local_96, &Local_239, 1, 1, 1, 0);
				if (!iLocal_285)
				{
					if (!func_43() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (func_355(1) && func_330(1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -120.5001f, 6513.166f, 27.8153f, -152.4702f, 6478.05f, 39.48183f, 26f, 0, 1, 0))
							{
								iLocal_285 = 1;
							}
							else if (func_6(&Local_232, cLocal_167, "RBS1_CLARIFY", 8, 0, 0, 0))
							{
								iLocal_285 = 1;
							}
						}
					}
				}
				else if (SYSTEM::TIMERA() > 5000)
				{
					func_237("RBS1_ATBANK", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)));
				}
				if (((SYSTEM::TIMERA() > 25000 && !iLocal_286) && !func_43()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_355(1) && func_330(1))
					{
						if (func_6(&Local_232, cLocal_167, "RBS1_SPEC", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(2f, 6f, 4);
							iLocal_286 = 1;
						}
					}
				}
				func_266(&Local_81, 0, 0);
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_96, Global_12, 1, 1, 0))
				{
				}
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && func_355(1)) && func_330(1))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_96, 5f, 5f, 2.5f, 0, 1, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62))
					{
						func_46();
						HUD::CLEAR_PRINTS();
						if (HUD::DOES_BLIP_EXIST(uLocal_53))
						{
							HUD::REMOVE_BLIP(&uLocal_53);
						}
						while (!func_30(iLocal_62, 5f, 5, 1056964608, 0, 1))
						{
							SYSTEM::WAIT(0);
							RECORDING::_0x208784099002BC30("M_ThePaletoScoreSetup", 0);
						}
						RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						iLocal_149++;
					}
				}
				break;
			
			case 9:
				if (!func_43())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_BANK"))
					{
						AUDIO::STOP_AUDIO_SCENE("PS_1_DRIVE_TO_BANK");
					}
					func_266(&Local_81, "CMN_HINT", 1);
					func_28(4);
					iLocal_149 = 0;
				}
				break;
			}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0) && !PED::IS_PED_INJURED(iLocal_52))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_52, 1)) > 2500f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_63))
		{
			PED::DELETE_PED(&iLocal_52);
			VEHICLE::DELETE_VEHICLE(&iLocal_63);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bus"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_lsmetro_01"));
		}
	}
	if (Local_249.f_9)
	{
		func_25();
		HUD::CLEAR_PRINTS();
		func_342(6, 1, 0);
		if (func_351(&Local_237))
		{
			HUD::REMOVE_BLIP(&uLocal_53);
			RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
			func_28(6);
		}
	}
	if (func_83(uLocal_185[2], &Local_246))
	{
		HUD::CLEAR_PRINTS();
		func_25();
		func_87("CBH_AB2BOTH");
	}
	if (!iLocal_131)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_94) < SYSTEM::POW(50f, 2f))
		{
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
			iLocal_131 = 1;
		}
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_94) > SYSTEM::POW(75f, 2f))
	{
		STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
		iLocal_131 = 0;
	}
}

int func_351(var uParam0)//Position - 0x1CACF
{
	if (!uParam0->f_1)
	{
		if (func_6(&Local_232, cLocal_167, *uParam0, 9, 0, 0, 0))
		{
			uParam0->f_1 = 1;
			return 1;
		}
	}
	return 0;
}

void func_352()//Position - 0x1CAFE
{
	struct<8> Var0;
	
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -104.0468f, 6493.076f, 30.41857f, -120.6202f, 6475.779f, 35.10751f, 19.25f, 0, 1, 0) && (MISC::GET_GAME_TIMER() - iLocal_156) > 10000) && !func_43())
	{
		StringCopy(&Var0, "RBS1_WRGWY_", 64);
		StringIntConCat(&Var0, iLocal_155, 64);
		func_81(&Local_232, cLocal_167, "RBS1_WRGWY", &Var0, 8, 0, 0);
		iLocal_155++;
		if (iLocal_155 > 1)
		{
			iLocal_155 = 0;
		}
		iLocal_156 = MISC::GET_GAME_TIMER();
	}
}

void func_353(var uParam0, struct<3> Param1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x1CB90
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_266(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_346(uParam0, Param1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_354(var uParam0, var uParam1, struct<3> Param2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x1CBC6
{
	if (func_330(bParam5))
	{
		if (func_355(bParam5))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !func_43())
				{
					HUD::CLEAR_PRINTS();
				}
				HUD::REMOVE_BLIP(uParam1);
			}
			if (bParam4)
			{
				if (!HUD::DOES_BLIP_EXIST(*uParam0))
				{
					*uParam0 = func_44(Param2, bParam6);
					if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !func_43())
					{
						HUD::CLEAR_PRINTS();
					}
				}
				if (bParam7)
				{
					func_84(uParam3);
				}
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
		{
			if (bParam4)
			{
				if (HUD::DOES_BLIP_EXIST(*uParam0))
				{
					HUD::REMOVE_BLIP(uParam0);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !func_43())
				{
					HUD::CLEAR_PRINTS();
				}
				func_84(&Local_244);
				*uParam1 = func_40(iLocal_62, 0, 0);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(*uParam1))
		{
			HUD::REMOVE_BLIP(uParam1);
		}
	}
}

int func_355(bool bParam0)//Position - 0x1CCAE
{
	if (func_330(bParam0))
	{
		if (bParam0)
		{
			return ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_62, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_62, 0));
		}
		else
		{
			return (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_62, 0));
		}
	}
	return 0;
}

void func_356()//Position - 0x1CD16
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(1f, 0f);
	if (!iLocal_130)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REQUEST_CUTSCENE("rbhs_mcs_1", 8);
		}
		if (func_368())
		{
			if (func_367("rbhs_mcs_1"))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_63))
				{
					func_366(-397.9f, 6134.135f, 31.5204f, -45.28132f);
				}
				func_360(1, 1, 1, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_50, "Lester", 2, joaat("ig_lestercrest"), 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_50))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_50, "Lester", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(uLocal_185[2]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_185[2], "Trevor", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_62, 1);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_62, 0, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_62, 1, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_62, 3, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_62, 2, 0, 0f);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_62, "Michaels_car", 0, 0, 0);
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_62, 1, 1, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_63, "RBHS_bus", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_52))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_52, "S_M_M_LSMetro_01", 0, 0, 0);
				}
				PATHFIND::SET_ROADS_IN_AREA(Local_99 + Vector(100f, 100f, 100f), Local_99 - Vector(100f, 100f, 100f), 0, 1);
				PATHFIND::SET_PED_PATHS_IN_AREA(Local_99 + Vector(100f, 100f, 100f), Local_99 - Vector(100f, 100f, 100f), 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x208784099002BC30("M_ThePaletoScoreSetup", 0);
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(uLocal_185[2]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_185[2]);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_63, 0);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_BUS_ARRIVES"))
				{
					AUDIO::STOP_AUDIO_SCENE("PS_1_BUS_ARRIVES");
				}
				MISC::CLEAR_AREA(Local_99, 500f, 1, 0, 0, 0);
				func_342(3, 1, 0);
				func_359();
				CAM::DO_SCREEN_FADE_IN(500);
				iLocal_130 = 1;
			}
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
		{
			iLocal_50 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_63))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_63, 1);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, -1);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_185[2]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_62, 0))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_185[2], iLocal_62, 2);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_62, 0))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_50, iLocal_62, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_62, 1);
				GRAPHICS::_0x0AE73D8DF3A762B2(1);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			RECORDING::_0x81CBAE94390F9F89();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (!PED::IS_PED_INJURED(iLocal_52) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_52, iLocal_63, -1);
				}
			}
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
			func_358(&Local_66, 0, 0, 0, 1, 0, 0, 1);
			func_357();
			func_360(0, 1, 1, 0);
			iLocal_130 = 0;
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_99 + Vector(100f, 100f, 100f), Local_99 - Vector(100f, 100f, 100f), 1);
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_99 + Vector(100f, 100f, 100f), Local_99 - Vector(100f, 100f, 100f), 1, 0);
			func_28(3);
		}
	}
}

void func_357()//Position - 0x1D0DC
{
	Global_D5E4 = 0;
}

void func_358(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1D0E8
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(1);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 0);
			}
			CAM::DESTROY_CAM(uParam0->f_4, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_A);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	func_360(bParam1, 1, 0, 0);
	func_254();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_17C49.f_47C3.f_1099 != -15)
		{
			Global_17C49.f_47C3.f_1099 = func_109();
		}
	}
}

void func_359()//Position - 0x1D255
{
	Global_D5E4 = 1;
}

void func_360(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1D261
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_365(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_10())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_364(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_365(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_364(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_361(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_361(int iParam0)//Position - 0x1D332
{
	if (func_362(iParam0, 0))
	{
		return 1;
	}
	if (func_287())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_24D5B9[iParam0 /*254*/].f_C2, 2))
	{
		return 1;
	}
	return 0;
}

bool func_362(int iParam0, int iParam1)//Position - 0x1D373
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_363(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_182604[iParam0 /*324*/].f_B4 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_363(int iParam0, bool bParam1)//Position - 0x1D3BE
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
	}
	if (Global_141425[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DB[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_364(int iParam0, var uParam1, var uParam2)//Position - 0x1D3FF
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_365(int iParam0)//Position - 0x1D430
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 13);
	}
}

bool func_366(struct<3> Param0, float fParam1)//Position - 0x1D453
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		STREAMING::REQUEST_MODEL(joaat("bus"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("bus")))
		{
			iLocal_63 = VEHICLE::CREATE_VEHICLE(joaat("bus"), Param0, fParam1, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_63);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_63, 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_52))
	{
		STREAMING::REQUEST_MODEL(joaat("s_m_m_lsmetro_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_lsmetro_01")))
		{
			iLocal_52 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_63, 26, joaat("s_m_m_lsmetro_01"), -1, 1, 1);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_52, 0);
			PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(iLocal_52, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_52, 1862763509);
		}
	}
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_63) && ENTITY::DOES_ENTITY_EXIST(iLocal_52));
}

bool func_367(char* sParam0)//Position - 0x1D4F6
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sParam0);
	if (!Global_10A94)
	{
		if (!bVar0)
		{
			Global_10A94 = 1;
		}
	}
	return bVar0;
}

bool func_368()//Position - 0x1D51B
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_10A94)
	{
		if (!bVar0)
		{
			Global_10A94 = 1;
		}
	}
	return bVar0;
}

void func_369()//Position - 0x1D53E
{
	var uVar0;
	
	switch (iLocal_254)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_253) > 1000)
			{
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_113, &uVar0))
				{
					iLocal_254++;
				}
				iLocal_253 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 1:
			if (func_371())
			{
				func_99(73, 1);
				func_99(74, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, 1, 0);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, 1, 0);
				iLocal_258 = 1;
				iLocal_254++;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_253) > 1000)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_113) > 40000f)
				{
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(178228075) != 1)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, 1, 0);
						func_99(73, 1);
					}
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1852297978) != 1)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, 1, 0);
						func_99(74, 1);
					}
					func_370();
					iLocal_254 = 0;
				}
				else
				{
					iLocal_257 = func_109();
					if (iLocal_258)
					{
						if (func_108(iLocal_257) >= 7 || func_108(iLocal_257) <= 17)
						{
							func_99(73, 0);
							func_99(74, 0);
							iLocal_258 = 0;
						}
					}
					else if (func_108(iLocal_257) < 7 || func_108(iLocal_257) > 17)
					{
						if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(178228075) != 1)
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, 1, 0);
							func_99(73, 1);
						}
						if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1852297978) != 1)
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, 1, 0);
							func_99(74, 1);
						}
						iLocal_258 = 1;
					}
				}
				iLocal_253 = MISC::GET_GAME_TIMER();
			}
			break;
	}
	if (((((FIRE::IS_EXPLOSION_IN_AREA(2, Local_112 - Vector(10f, 75f, 75f), Local_112 + Vector(100f, 75f, 75f)) || FIRE::IS_EXPLOSION_IN_AREA(0, Local_112 - Vector(10f, 75f, 75f), Local_112 + Vector(100f, 75f, 75f))) || FIRE::IS_EXPLOSION_IN_AREA(1, Local_112 - Vector(10f, 75f, 75f), Local_112 + Vector(100f, 75f, 75f))) || FIRE::IS_EXPLOSION_IN_AREA(9, Local_112 - Vector(10f, 75f, 75f), Local_112 + Vector(100f, 75f, 75f))) || FIRE::IS_EXPLOSION_IN_AREA(4, Local_112 - Vector(10f, 75f, 75f), Local_112 + Vector(100f, 75f, 75f))) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_112 - Vector(10f, 75f, 75f), Local_112 + Vector(100f, 75f, 75f), joaat("weapon_rpg"), 0))
	{
		func_87("CBH_BANKALERT");
	}
}

void func_370()//Position - 0x1D821
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_51[iVar0]));
		}
		iVar0++;
	}
}

int func_371()//Position - 0x1D853
{
	if (func_300())
	{
		if (!PED::IS_PED_INJURED(iLocal_51[0]))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_51[0], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_51[1]))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_51[1], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_51[2]))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_51[2], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[3]))
		{
			PED::DELETE_PED(&(iLocal_51[3]));
		}
		return 1;
	}
	return 0;
}

void func_372()//Position - 0x1D8D0
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	
	func_293();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
	{
		if (!bLocal_135)
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_99) < 40000f)
			{
				VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
			if (iLocal_149 > 1)
			{
				if (iLocal_149 < 4)
				{
					func_354(&uLocal_53, &uLocal_54, Local_112, &Local_238, 1, 0, SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_99) < 562500f, 1);
				}
				else
				{
					func_354(&uLocal_53, &uLocal_54, Local_99, &Local_238, 1, 0, SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_99) < 562500f, 1);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62))
				{
					func_402(&Local_122, &iLocal_123);
					iLocal_140 = 1;
				}
				else if (iLocal_140)
				{
					HUD::CLEAR_GPS_MULTI_ROUTE();
					iLocal_123 = (Local_122.x - 1);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_144 = 1;
				}
			}
			if (iLocal_149 < 2)
			{
				if (!PED::IS_PED_INJURED(uLocal_185[2]))
				{
					PED::SET_PED_RESET_FLAG(uLocal_185[2], 60, 1);
				}
			}
			switch (iLocal_149)
			{
				case 0:
					if (!PED::IS_PED_INJURED(uLocal_185[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
					{
						iLocal_281 = 1;
						PED::SET_PED_CONFIG_FLAG(uLocal_185[2], 104, 1);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
						}
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
						TASK::REQUEST_WAYPOINT_RECORDING(sLocal_284);
						SYSTEM::SETTIMERA(0);
						SYSTEM::SETTIMERB(0);
						Local_122[0 /*3*/] = { 2356.379f, 5864.774f, 46.1486f };
						Local_122[1 /*3*/] = { 230.8756f, 6569.08f, 30.6632f };
						Local_122[2 /*3*/] = { Local_112 };
						iLocal_123 = (Local_122.x - 1);
						iLocal_140 = 0;
						iLocal_277 = -1;
						iLocal_278 = 0;
						iLocal_280 = 0;
						iLocal_282 = 0;
						iLocal_283 = 0;
						RECORDING::_0x293220DA1B46CEBC(1f, 10f, 4);
						iLocal_149++;
					}
					break;
				
				case 1:
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (iLocal_281)
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
						if (iLocal_149 != 0)
						{
							func_401(&uVar0, &uVar1, &uVar2, &uVar2, 0);
							if ((MISC::ABSI(uVar0) + MISC::ABSI(uVar1)) > 20 || SYSTEM::TIMERB() > 2000)
							{
								iLocal_281 = 0;
							}
						}
					}
					if ((((!PED::IS_PED_INJURED(uLocal_185[2]) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[2], -1794415470) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_185[2], -1794415470) != 0) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_185[2], 1)) && !HUD::DOES_BLIP_EXIST(uLocal_58))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_185[2]))
						{
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_284))
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_185[2], sLocal_284, 0, 8, -1);
							}
							if (ENTITY::IS_ENTITY_AT_ENTITY(uLocal_185[2], iLocal_62, 3f, 3f, 3f, 0, 1, 0))
							{
								TASK::CLEAR_PED_TASKS(uLocal_185[2]);
								TASK::TASK_ENTER_VEHICLE(uLocal_185[2], iLocal_62, 20000, 0, 1f, 1, 0);
							}
						}
						else
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_284, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iVar3);
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_284, ENTITY::GET_ENTITY_COORDS(uLocal_185[2], 1), &iVar4);
							TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_284, iVar3, &Var5);
							if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_185[2]))
							{
								if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var5) < 6.25f && ENTITY::IS_ENTITY_AT_ENTITY(uLocal_185[2], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0)) && (iVar3 - iVar4) < 3) && iVar3 > iVar4)
								{
									TASK::WAYPOINT_PLAYBACK_PAUSE(uLocal_185[2], 1, 0);
								}
							}
							else if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var5) > 9f || !ENTITY::IS_ENTITY_AT_ENTITY(uLocal_185[2], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0)) || (iVar3 - iVar4) > 3) || iVar3 < iVar4)
							{
								TASK::WAYPOINT_PLAYBACK_RESUME(uLocal_185[2], 1, -1, 0);
							}
							if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_185[2]) > 28)
							{
								TASK::CLEAR_PED_TASKS(uLocal_185[2]);
								TASK::TASK_ENTER_VEHICLE(uLocal_185[2], iLocal_62, 20000, 0, 1f, 1, 0);
							}
						}
					}
					if (!iLocal_282)
					{
						if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							if (func_6(&Local_232, cLocal_167, "RBS1_DRV1", 8, 0, 0, 0))
							{
								iLocal_282 = 1;
							}
						}
					}
					else if (!iLocal_283)
					{
						if (!func_43())
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
							{
								func_85("CBH_GOTOCAR", 7500, 1);
								iLocal_283 = 1;
							}
						}
					}
					if (CAM::IS_SCREEN_FADED_IN())
					{
						if (!PED::IS_PED_INJURED(uLocal_185[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_58))
							{
								if (PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_62, 0) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
								{
									HUD::REMOVE_BLIP(&uLocal_58);
								}
							}
							else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0) && !PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_62, 0))
							{
								if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_185[2], 1)) > 3f)
								{
									TASK::TASK_ENTER_VEHICLE(uLocal_185[2], iLocal_62, 20000, 0, 3f, 1, 0);
								}
								uLocal_58 = func_400(uLocal_185[2], 0, 145);
							}
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0))
							{
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_PALETO"))
								{
									AUDIO::START_AUDIO_SCENE("PS_1_DRIVE_TO_PALETO");
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_54))
								{
									HUD::REMOVE_BLIP(&uLocal_54);
								}
								if (PED::IS_PED_IN_VEHICLE(uLocal_185[2], iLocal_62, 0))
								{
									if (HUD::DOES_BLIP_EXIST(uLocal_58))
									{
										HUD::REMOVE_BLIP(&uLocal_58);
									}
									PED::REMOVE_PED_FROM_GROUP(uLocal_185[2]);
									SYSTEM::SETTIMERA(0);
									func_399(709, 0);
									TASK::REMOVE_WAYPOINT_RECORDING(sLocal_284);
									iLocal_149++;
								}
								else if (!iLocal_279)
								{
									if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_185[2], 1)) > 3f)
									{
										if (!func_43() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
										{
											func_45("CBH_BUDSOUT", 7500, 1);
											iLocal_279 = 1;
										}
									}
								}
							}
							else
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_54))
								{
									uLocal_54 = func_40(iLocal_62, 0, 0);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_58))
								{
									HUD::REMOVE_BLIP(&uLocal_58);
								}
							}
						}
					}
					break;
				
				case 2:
					if ((SYSTEM::TIMERA() > 7000 && func_355(0)) && !func_43())
					{
						if (func_6(&Local_232, cLocal_167, "RBS1_CALL", 8, 0, 0, 0))
						{
							iLocal_149++;
						}
					}
					break;
				
				case 3:
					if (!func_43())
					{
						if (func_398())
						{
							if (func_397(&Local_232, 12, cLocal_167, "RBS1_PHONE", 9, 1, 0, 0, 0))
							{
								SYSTEM::SETTIMERA(0);
								iLocal_149++;
							}
						}
						else if (func_397(&Local_232, 12, cLocal_167, "RBS1_PHONE2", 9, 1, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_149++;
						}
					}
					break;
				
				case 4:
					if (func_355(0) && func_330(0))
					{
						if (func_396())
						{
							SYSTEM::SETTIMERA(0);
							if (HUD::DOES_BLIP_EXIST(uLocal_53))
							{
								HUD::REMOVE_BLIP(&uLocal_53);
								HUD::CLEAR_GPS_MULTI_ROUTE();
								Local_122[0 /*3*/] = { 2356.379f, 5864.774f, 46.1486f };
								Local_122[1 /*3*/] = { 230.8756f, 6569.08f, 30.6632f };
								Local_122[2 /*3*/] = { Local_99 };
								iLocal_140 = 0;
								iLocal_123 = (Local_122.x - 1);
							}
							iLocal_149++;
						}
					}
					break;
				
				case 5:
					if (SYSTEM::TIMERA() > 3000)
					{
						PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_92 + Vector(500f, 500f, 500f), Local_92 - Vector(500f, 500f, 500f), 1);
						iLocal_149++;
					}
					break;
				
				case 6:
					if (func_398())
					{
						func_237("RBS1_DRV2", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)));
					}
					else
					{
						func_237("RBS1_DRV4", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)));
					}
					if (!func_43() && !bLocal_266)
					{
						iLocal_265 = 0;
						iLocal_149++;
					}
					break;
				
				case 7:
					if (func_398())
					{
						func_237("RBS1_DRV2b", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)));
					}
					else
					{
						func_237("RBS1_DRV4b", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, 0)));
					}
					break;
			}
			if (((((func_355(0) && func_330(0)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_99.x, Local_99.f_1, 30.24f, Global_12, 1, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -351.5282f, 6189.989f, 28.29423f, -343.8886f, 6197.934f, 34.29549f, 7f, 0, 1, 0)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62)) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_62, 1119092736))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
				func_395(0, -1);
				func_46();
				HUD::CLEAR_GPS_MULTI_ROUTE();
				AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0);
				iLocal_149 = 0;
				bLocal_135 = true;
			}
		}
		else
		{
			if (!iLocal_278)
			{
				if (func_6(&Local_232, cLocal_167, "RBS1_DRV3", 8, 0, 0, 0))
				{
					iLocal_278 = 1;
				}
			}
			switch (iLocal_149)
			{
				case 0:
					if (func_355(0) && func_330(0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_53))
						{
							HUD::REMOVE_BLIP(&uLocal_53);
						}
						iLocal_149++;
					}
					break;
				
				case 1:
					if (func_30(iLocal_62, 6f, 1, 1056964608, 0, 1))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						SYSTEM::SETTIMERA(0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_62, 0, 0);
						VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_62, 0);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						iLocal_149++;
					}
					break;
				
				case 2:
					iLocal_149++;
					break;
				
				case 3:
					if (iLocal_278 && SYSTEM::TIMERA() > 2000)
					{
						if (!CAM::DOES_CAM_EXIST(uLocal_65))
						{
							iLocal_277 = PED::CREATE_SYNCHRONIZED_SCENE(-330.69f, 6190.95f, 30.49f, 0f, 0f, 0f, 2);
							iLocal_65 = CAM::CREATE_CAMERA(964613260, 1);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_65, iLocal_277, "not_for_cutscene_-_timelapse_lead_in_cam", "missheistpaletoscoresetup");
							GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.5f);
							GRAPHICS::_0x0AE73D8DF3A762B2(0);
							CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_62, -348.9985f, 6194.592f, 30.7398f, 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_62, -0.0211f, 0.0095f, 0.9216f, 0.3876f);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_62, 1);
							func_360(1, 1, 1, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							CAM::SET_WIDESCREEN_BORDERS(1, 0);
							AUDIO::START_AUDIO_SCENE("PS_1_BUS_ARRIVES");
							RECORDING::_0x48621C9FCA3EBD28(4);
						}
						else
						{
							SYSTEM::SETTIMERA(0);
							STREAMING::REQUEST_MODEL(joaat("bus"));
							STREAMING::REQUEST_MODEL(joaat("s_m_m_lsmetro_01"));
							iLocal_149++;
						}
					}
					break;
				
				case 4:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_277))
					{
					}
					if ((((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_277) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_277) > 0.99f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_277)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0)) && ENTITY::DOES_ENTITY_EXIST(iLocal_50))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_50, 1, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_50, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_50, 0);
						STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup");
						GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
						Local_66.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
						CAM::ADD_CAM_SPLINE_NODE(Local_66.f_4, -351.9567f, 6192.048f, 34.7371f, 21.6144f, 0f, -126.3661f, 5000, 3, 2);
						CAM::ADD_CAM_SPLINE_NODE(Local_66.f_4, -351.9567f, 6192.048f, 34.7371f, 21.6144f, 0f, -126.3661f, 5000, 3, 2);
						CAM::SET_CAM_FOV(Local_66.f_4, 39f);
						CAM::SET_CAM_ACTIVE(Local_66.f_4, 1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "TIME_LAPSE_MASTER", 0, 1);
						Local_66 = func_109();
						GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
						func_358(&Local_66, 1, 1, 2000, 1, 1, 0, 1);
						iLocal_275 = func_108(Local_66) + 2;
						iLocal_276 = func_394(Local_66);
						if (iLocal_275 > 18 || iLocal_275 < 6)
						{
							iLocal_275 = 8;
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_PALETO"))
						{
							AUDIO::STOP_AUDIO_SCENE("PS_1_DRIVE_TO_PALETO");
						}
						iLocal_149++;
					}
					break;
				
				case 5:
					func_366(-397.9f, 6134.135f, 31.5204f, -45.28132f);
					if (func_377(iLocal_275, iLocal_276, "EXTRASUNNY", "cirrocumulus", &Local_66, -1f, 0, 0, 1065353216))
					{
						RECORDING::_0x81CBAE94390F9F89();
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_62, 0);
						AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
						func_28(2);
					}
					break;
			}
			if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_62))
			{
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				bLocal_135 = false;
				iLocal_149 = 7;
			}
		}
		if (func_83(uLocal_185[2], &Local_245))
		{
			HUD::CLEAR_PRINTS();
			func_25();
			func_87("CBH_AB2TREV");
		}
	}
	if (!iLocal_131)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_99) < 22500f && ENTITY::DOES_ENTITY_EXIST(iLocal_50))
		{
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup");
			func_376("rbhs_mcs_1", Local_99, 100f, &iLocal_131);
			func_342(2, 1, 0);
		}
	}
	if (iLocal_131)
	{
		if (!iLocal_280)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_50) && !PED::IS_PED_INJURED(iLocal_50))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lester", iLocal_50, 0);
				}
				iLocal_280 = 1;
			}
		}
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_99) > 120f)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_131 = 0;
			iLocal_280 = 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_99) < 40000f)
		{
			if (func_374(&iLocal_50, 12, -317.9068f, 6195.894f, 36.0577f, 72.1587f, 1))
			{
				func_373();
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_50, 1);
				ENTITY::SET_ENTITY_COLLISION(iLocal_50, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_50, 0);
			}
		}
	}
}

void func_373()//Position - 0x1E675
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 4, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 8, 1, 0, 0);
	PED::SET_PED_PROP_INDEX(iLocal_50, 1, 0, 0, false);
}

int func_374(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x1E6CE
{
	int iVar0;
	
	if (!func_146(iParam1))
	{
		iVar0 = func_344(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, 0, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			func_375(*iParam0, iParam1);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_375(var uParam0, int iParam1)//Position - 0x1E75C
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_150B9[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_376(char* sParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x1E7A2
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param1) < (fParam2 * fParam2) && !*bParam3)
	{
		CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
		*bParam3 = 1;
	}
	else
	{
		*bParam3 = 0;
	}
}

int func_377(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, int iParam8)//Position - 0x1E7E0
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_109();
			iVar5 = func_109();
			func_117(&iVar5, iParam0);
			func_118(&iVar5, iParam1);
			func_119(&iVar5, 0);
			if (func_392(*uParam4, iVar5))
			{
				func_390(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_388(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_B = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_383((SYSTEM::TO_FLOAT(uParam4->f_B) / 3600f));
			if (bParam7)
			{
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
				GRAPHICS::_0x0AE73D8DF3A762B2(0);
			}
			func_382();
			uParam4->f_A = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_A, "TIME_LAPSE_MASTER", 0, 1);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			func_254();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4))
				{
					fVar0 = CAM::GET_CAM_SPLINE_PHASE(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (MISC::GET_HASH_KEY(sParam2) != 0)
						{
							MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, iParam8);
						}
						if (MISC::GET_HASH_KEY(sParam3) != 0)
						{
							MISC::_CLEAR_CLOUD_HAT();
							MISC::LOAD_CLOUD_HAT(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_390(&iVar5, uParam4->f_B, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(func_108(iVar5), func_394(iVar5), func_381(iVar5));
				if (bParam7)
				{
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				}
				AUDIO::STOP_SOUND(uParam4->f_A);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				if (bParam7)
				{
					GRAPHICS::_0x0AE73D8DF3A762B2(1);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_231(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_B) * fVar12));
			iVar5 = *uParam4;
			func_390(&iVar5, iVar4, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(func_108(iVar5), func_394(iVar5), func_381(iVar5));
			if (func_380(iVar5) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(func_380(iVar5), func_116(iVar5), func_114(iVar5));
			}
			func_378();
			GRAPHICS::_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return 0;
}

void func_378()//Position - 0x1EA75
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_379();
}

void func_379()//Position - 0x1EA85
{
	Global_42CA.f_86 = 1;
}

int func_380(int iParam0)//Position - 0x1EA93
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_381(int iParam0)//Position - 0x1EAA5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_382()//Position - 0x1EAB8
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
	return 1;
}

void func_383(float fParam0)//Position - 0x1EB04
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_387(&(Global_17C49.f_3FE5.f_AF[iVar0 /*19*/].f_5)))
		{
			func_384(&(Global_17C49.f_3FE5.f_AF[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_387(&(Global_17C49.f_3FE5.f_16A[iVar1 /*3*/])))
		{
			func_384(&(Global_17C49.f_3FE5.f_16A[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_384(var uParam0, float fParam1)//Position - 0x1EB95
{
	if (func_387(uParam0))
	{
		func_64(uParam0, (func_385(uParam0) + fParam1));
	}
}

float func_385(var uParam0)//Position - 0x1EBB8
{
	if (func_387(uParam0))
	{
		if (func_386(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_65(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_386(var uParam0)//Position - 0x1EBF7
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_387(var uParam0)//Position - 0x1EC07
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_388(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x1EC17
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_392(iParam0, iParam1))
	{
		iVar0 = func_116(iParam1);
		iVar1 = func_114(iParam0);
		iVar2 = (func_114(iParam0) - func_114(iParam1));
		iVar3 = (func_116(iParam0) - func_116(iParam1));
		iVar4 = (func_380(iParam0) - func_380(iParam1));
		iVar5 = (func_108(iParam0) - func_108(iParam1));
		iVar6 = (func_394(iParam0) - func_394(iParam1));
		iVar7 = (func_381(iParam0) - func_381(iParam1));
	}
	else
	{
		iVar0 = func_116(iParam0);
		iVar1 = func_114(iParam1);
		iVar2 = (func_114(iParam1) - func_114(iParam0));
		iVar3 = (func_116(iParam1) - func_116(iParam0));
		iVar4 = (func_380(iParam1) - func_380(iParam0));
		iVar5 = (func_108(iParam1) - func_108(iParam0));
		iVar6 = (func_394(iParam1) - func_394(iParam0));
		iVar7 = (func_381(iParam1) - func_381(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_113(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_389(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_389(float fParam0, float fParam1, float fParam2)//Position - 0x1EE18
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_390(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1EE5A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_114(*iParam0);
	iVar1 = func_116(*iParam0);
	iVar2 = func_380(*iParam0);
	iVar3 = func_108(*iParam0);
	iVar4 = func_394(*iParam0);
	iVar5 = func_381(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_113(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_113(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_391(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_391(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1EFDC
{
	func_119(uParam0, iParam1);
	func_118(uParam0, iParam2);
	func_117(uParam0, iParam3);
	func_112(uParam0, iParam4);
	func_111(uParam0, iParam5);
	func_110(uParam0, iParam6);
}

int func_392(int iParam0, int iParam1)//Position - 0x1F014
{
	int iVar0;
	int iVar1;
	
	if (!func_393(iParam1) || !func_393(iParam0))
	{
		return 1;
	}
	iVar0 = func_114(iParam0);
	iVar1 = func_114(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_116(iParam0);
	iVar1 = func_116(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_394(iParam0);
	iVar1 = func_394(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0)//Position - 0x1F120
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_394(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_108(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_114(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_116(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_380(iParam0);
	if (iVar5 < 1 || iVar5 > func_113(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_394(int iParam0)//Position - 0x1F1FC
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

void func_395(bool bParam0, int iParam1)//Position - 0x1F20F
{
	int iVar0;
	
	if (Global_D5E6)
	{
	}
	Global_D5E6 = 0;
	if (bParam0)
	{
		Global_D5E7 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1051D)
		{
			if (Global_D6BF[Global_1051E[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_1051E[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1051D)
		{
			if (Global_1051E[iVar0 /*9*/] > 0)
			{
				if (Global_1051E[iVar0 /*9*/] == iParam1)
				{
					Global_1051E[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_396()//Position - 0x1F2A9
{
	if (Global_3D4C == 0)
	{
		return 1;
	}
	return 0;
}

bool func_397(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x1F2C0
{
	func_17(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_3D7C = 0;
	Global_3D53 = 1;
	Global_3D5A = 0;
	Global_3D55 = 0;
	Global_412B = 0;
	Global_412D = 0;
	Global_4131 = 0;
	Global_3D51 = 0;
	Global_3D80 = 0;
	Global_3D82 = 0;
	if (iParam5 == 1)
	{
		Global_3D58 = 1;
	}
	else
	{
		Global_3D58 = 0;
	}
	Global_280001 = 0;
	return func_7(sParam3, iParam4, bParam8);
}

int func_398()//Position - 0x1F31F
{
	if (Global_15F6A == 10 || Global_15F6A == 9)
	{
		return 1;
	}
	return 0;
}

void func_399(int iParam0, bool bParam1)//Position - 0x1F343
{
	int iVar0;
	
	Global_D5E8 = iParam0;
	if (!Global_D5E6)
	{
		Global_D5E6 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1051D)
		{
			if (Global_1051E[iVar0 /*9*/] == iParam0)
			{
				Global_1051E[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

var func_400(int iParam0, bool bParam1, int iParam2)//Position - 0x1F38D
{
	var uVar0;
	
	uVar0 = func_41(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_744E[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_17C49.f_744E[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

void func_401(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x1F3DF
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_402(var uParam0, var uParam1)//Position - 0x1F4B4
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		fVar4 = SYSTEM::VDIST2(Var3, *(uParam0[iVar0 /*3*/]));
		if (iVar1 == -1 || fVar4 < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = fVar4;
		}
		iVar0++;
	}
	if (SYSTEM::VDIST2(Var3, *(uParam0[iVar1 + 1 /*3*/])) < SYSTEM::VDIST2(*(uParam0[iVar1 /*3*/]), *(uParam0[iVar1 + 1 /*3*/])))
	{
		iVar1++;
	}
	if (*uParam1 != iVar1 || (iLocal_144 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0))
	{
		if ((*uParam1 >= 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *(uParam0[*uParam1 /*3*/])) > 25f) || (iLocal_144 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0))
		{
			HUD::CLEAR_GPS_MULTI_ROUTE();
			HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
			iVar0 = iVar1;
			while (iVar0 <= (*uParam0 - 1))
			{
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(uParam0[iVar0 /*3*/]));
				iVar0++;
			}
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(uParam0[(*uParam0 - 1) /*3*/]));
			HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
			iLocal_144 = 0;
		}
		*uParam1 = iVar1;
	}
}

void func_403()//Position - 0x1F5F1
{
	int iVar0;
	
	switch (iLocal_149)
	{
		case 0:
			if (func_176() == 2)
			{
				CUTSCENE::REQUEST_CUTSCENE("rbhs_INT", 8);
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE("rbhs_INT", 8);
			}
			iLocal_149++;
			break;
		
		case 1:
			iLocal_274 = MISC::GET_HASH_KEY("SIDE_DOOR_METHLAB");
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_274, joaat("v_ilev_methdoorscuff"), 1392.74f, 3611.367f, 39.0919f, 1, 1, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_274, 3, 1, 0);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_274, 0f, 1, 0);
			iLocal_149++;
			break;
		
		case 2:
			if (func_368())
			{
				if (func_367("rbhs_int"))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_690(91);
						PATHFIND::SET_ROADS_IN_AREA(Local_92 + Vector(500f, 500f, 500f), Local_92 - Vector(500f, 500f, 500f), 0, 1);
						func_360(1, 1, 1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_9[0], 1, 1);
							uLocal_185[2] = Global_15350.f_9[0];
							Global_15350.f_9[0] = 0;
						}
						if (!ENTITY::DOES_ENTITY_EXIST(uLocal_185[2]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_185[2], "Trevor", 2, joaat("player_two"), 0);
						}
						else if (!PED::IS_PED_INJURED(uLocal_185[2]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_185[2], "Trevor", 0, 0, 0);
						}
						MISC::CLEAR_AREA_OF_COPS(Local_92, 500f, 0);
						if (func_176() == 2)
						{
							CUTSCENE::START_CUTSCENE(256);
						}
						else
						{
							CUTSCENE::START_CUTSCENE(0);
						}
						RECORDING::_0x48621C9FCA3EBD28(4);
						if (func_176() == 2)
						{
							bLocal_273 = true;
						}
						func_342(1, 1, 0);
						HUD::REQUEST_ADDITIONAL_TEXT("BANKS1", 0);
						HUD::REQUEST_ADDITIONAL_TEXT(cLocal_167, 6);
						STREAMING::REQUEST_MODEL(func_205(0, 0));
						iLocal_149++;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				else
				{
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_149 = 0;
				}
			}
			break;
		
		case 3:
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("premier"), 3);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 300f);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
			else
			{
				iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 50f)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
						if (func_213(iVar0) == 0 || VEHICLE::IS_BIG_VEHICLE(iVar0))
						{
							VEHICLE::DELETE_VEHICLE(&iVar0);
						}
						else
						{
							func_186(iVar0, 1416.653f, 3622.32f, 33.8648f, 20.6293f, 24, 0);
							ENTITY::SET_ENTITY_COORDS(iVar0, 1416.653f, 3622.32f, 33.8648f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar0, 20.6293f);
						}
					}
				}
			}
			MISC::CLEAR_AREA(Local_101, 25f, 1, 0, 0, 0);
			MISC::CLEAR_AREA_OF_OBJECTS(1391.651f, 3607.269f, 37.9419f, 10f, 2);
			func_689(24);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			iLocal_149++;
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_185[2]) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0)))
				{
					uLocal_185[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0));
				}
			}
			func_672(Local_92, fLocal_93);
			if (!iLocal_272)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_62) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_62, 0, 1);
					iLocal_272 = 1;
				}
			}
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, 0))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_101, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_102);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 10f, 1, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					if (bLocal_273)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uLocal_185[2]))
						{
							func_671(&(uLocal_185[2]), 2, Local_105, fLocal_106, 0, 0, 0);
						}
						func_404(0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_101, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_102);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 10f, 1, 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_185[2]))
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_185[2], Local_105, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uLocal_185[2], fLocal_106);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_185[2]);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
						PED::SET_PED_RESET_FLAG(uLocal_185[2], 237, 1);
					}
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
				{
					while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!PED::IS_PED_INJURED(uLocal_185[2]))
				{
					PED::SET_PED_AS_ENEMY(uLocal_185[2], 0);
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_185[2], 0);
					PED::SET_PED_CAN_BE_DRAGGED_OUT(uLocal_185[2], 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_185[2], 1862763509);
				}
				RECORDING::_0x81CBAE94390F9F89();
				MISC::CLEAR_AREA(Local_92, 20f, 1, 0, 0, 0);
				func_689(24);
				func_360(0, 1, 1, 0);
				iLocal_130 = 0;
				CUTSCENE::REMOVE_CUTSCENE();
				func_28(1);
			}
			break;
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
}

int func_404(int iParam0, bool bParam1)//Position - 0x1FB84
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	Global_42CA.f_D = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_92(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_407(&(Global_429C[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_671(&(Global_429C[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_429C.f_7 = iParam0;
	Global_429C.f_27 = 1;
	func_88(&Global_429C, 0, 0, 0);
	func_405(iParam0);
	return 1;
}

void func_405(int iParam0)//Position - 0x1FCDD
{
	return;
	Global_42CA.f_7E = 1;
	Global_42CA.f_7F = func_406(iParam0);
	Global_42CA.f_81 = MISC::GET_GAME_TIMER();
}

int func_406(int iParam0)//Position - 0x1FD02
{
	if (iParam0 == 0)
	{
		return 3;
	}
	else if (iParam0 == 1)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 1;
	}
	else if (iParam0 == 3)
	{
		return 2;
	}
	return 0;
}

int func_407(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1FD3C
{
	int iVar0;
	
	if (func_146(iParam1))
	{
		iVar0 = func_92(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				func_670(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				func_663(*iParam0);
				func_658(*iParam0, 1, 0);
				func_657(*iParam0);
				func_654(*iParam0);
				func_409(*iParam0, bParam6);
				func_408(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_408(int iParam0)//Position - 0x1FDEE
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_156B8[iVar0]) && Global_156B8[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_156B8[iVar0]))
		{
			Global_156B8[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_409(int iParam0, bool bParam1)//Position - 0x1FE67
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_147(iParam0);
	if (func_653(iVar0))
	{
		func_652(iVar0, 0);
		func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_499(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (func_497(iParam0))
		{
			func_652(iVar0, 0);
			func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_499(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_17C49.f_1CAD.f_63.f_3A[120] && !Global_17C49.f_1CAD.f_63.f_3A[122])
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_17C49.f_1CAD.f_63.f_3A[121] = 1;
				return 1;
			}
			if (Global_17C49.f_1CAD.f_63.f_3A[123])
			{
				Global_17C49.f_1CAD.f_63.f_3A[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_478(iParam0, 3, 169))
					{
						func_638(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (func_478(iParam0, 12, 6))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_478(iParam0, 12, 17))
			{
				if (!func_410(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_478(iParam0, 12, 20))
			{
				if (!func_410(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_478(iParam0, 12, 21))
			{
				if (!func_410(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_478(iParam0, 12, 22))
			{
				if (!func_410(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_478(iParam0, 12, 11))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_478(iParam0, 12, 10))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_478(iParam0, 12, 50))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_478(iParam0, 14, 59))
			{
				func_638(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (func_478(iParam0, 8, 22))
			{
				func_638(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_478(iParam0, 12, 14))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (func_478(iParam0, 12, 13))
			{
				if (!func_410(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_478(iParam0, 12, 14))
			{
				if (!func_410(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_478(iParam0, 12, 15))
			{
				if (!func_410(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_478(iParam0, 12, 4))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_478(iParam0, 12, 3))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_478(iParam0, 14, 82))
			{
				func_638(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (func_478(iParam0, 8, 76))
			{
				func_638(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_478(iParam0, 12, 1))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (func_478(iParam0, 12, 12))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_478(iParam0, 12, 15))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_478(iParam0, 3, 71))
				{
					func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_478(iParam0, 12, 17))
			{
				if (!func_410(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_478(iParam0, 12, 18))
			{
				if (!func_410(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_478(iParam0, 12, 19))
			{
				if (!func_410(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_478(iParam0, 12, 7))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_478(iParam0, 12, 6))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_478(iParam0, 14, 88))
			{
				func_638(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (func_478(iParam0, 8, 17))
			{
				func_638(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_478(iParam0, 12, 11))
			{
				func_638(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_410(int iParam0, int iParam1, int iParam2)//Position - 0x20483
{
	Global_10A0A[1 /*14*/] = { func_411(iParam0, iParam1, iParam2) };
	return MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 1);
}

struct<14> func_411(int iParam0, int iParam1, int iParam2)//Position - 0x204AD
{
	func_477();
	if (iParam0 == joaat("player_zero"))
	{
		func_459(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_440(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_412(iParam1, iParam2);
	}
	return Global_10A0A[0 /*14*/];
}

void func_412(int iParam0, int iParam1)//Position - 0x204FF
{
	switch (iParam0)
	{
		case 0:
			func_439(iParam1);
			break;
		
		case 2:
			func_438(iParam1);
			break;
		
		case 3:
			func_435(iParam1);
			break;
		
		case 4:
			func_434(iParam1);
			break;
		
		case 6:
			func_433(iParam1);
			break;
		
		case 5:
			func_432(iParam1);
			break;
		
		case 8:
			func_431(iParam1);
			break;
		
		case 9:
			func_430(iParam1);
			break;
		
		case 10:
			func_429(iParam1);
			break;
		
		case 1:
			func_428(iParam1);
			break;
		
		case 7:
			func_427(iParam1);
			break;
		
		case 11:
			func_426(iParam1);
			break;
		
		case 12:
			func_425(iParam1);
			break;
		
		case 13:
			func_424(iParam1);
			break;
		
		case 14:
			func_413(iParam1);
			break;
	}
}

void func_413(int iParam0)//Position - 0x205EF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 155);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_414(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x21865
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_D = iParam8;
	uParam0->f_C = func_421(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (iParam1 == 1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_280004, joaat("REBREATHER"), 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_419(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_419(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_419(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_419(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_419(Global_280004, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_419(Global_280004, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_418(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_418(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_418(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (!func_13(14))
			{
				uVar0 = func_34(func_417(iParam1, uParam0->f_2), Global_10A08, 0);
				if (MISC::IS_BIT_SET(uVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 1);
				}
				iVar0 = func_34(func_416(iParam1, uParam0->f_2), Global_10A08, 0);
				if (MISC::IS_BIT_SET(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 2);
				}
				if (func_415(iParam1, uParam0->f_2, &iVar1))
				{
					iVar0 = func_34(iVar1, Global_10A08, 0);
					if (!MISC::IS_BIT_SET(iVar0, uParam0->f_1))
					{
						MISC::SET_BIT(&(uParam0->f_6), 4);
					}
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

bool func_415(int iParam0, int iParam1, var uParam2)//Position - 0x21BE8
{
	*uParam2 = 966;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 967;
					break;
				
				case 3:
					*uParam2 = 1416;
					break;
				
				case 4:
					*uParam2 = 983;
					break;
				
				case 6:
					*uParam2 = 991;
					break;
				
				case 8:
					*uParam2 = 1417;
					break;
				
				case 9:
					*uParam2 = 1425;
					break;
				
				case 10:
					*uParam2 = 1427;
					break;
				
				case 1:
					*uParam2 = 999;
					break;
				
				case 7:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 975;
					break;
				
				case 14:
					*uParam2 = 1007;
					break;
				
				case 12:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 968;
					break;
				
				case 4:
					*uParam2 = 984;
					break;
				
				case 6:
					*uParam2 = 992;
					break;
				
				case 8:
					*uParam2 = 1418;
					break;
				
				case 9:
					*uParam2 = 1426;
					break;
				
				case 7:
					*uParam2 = 1429;
					break;
				
				case 11:
					*uParam2 = 976;
					break;
				
				case 14:
					*uParam2 = 1008;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 969;
					break;
				
				case 4:
					*uParam2 = 985;
					break;
				
				case 6:
					*uParam2 = 993;
					break;
				
				case 8:
					*uParam2 = 1419;
					break;
				
				case 7:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 977;
					break;
				
				case 14:
					*uParam2 = 1009;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 986;
					break;
				
				case 6:
					*uParam2 = 994;
					break;
				
				case 8:
					*uParam2 = 1420;
					break;
				
				case 11:
					*uParam2 = 978;
					break;
				
				case 14:
					*uParam2 = 1010;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 987;
					break;
				
				case 6:
					*uParam2 = 995;
					break;
				
				case 8:
					*uParam2 = 1421;
					break;
				
				case 11:
					*uParam2 = 979;
					break;
				
				case 14:
					*uParam2 = 1011;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1422;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
	}
	return *uParam2 != 966;
}

int func_416(int iParam0, int iParam1)//Position - 0x21FED
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 915;
					break;
				
				case 3:
					return 1401;
					break;
				
				case 4:
					return 931;
					break;
				
				case 6:
					return 939;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 10:
					return 1412;
					break;
				
				case 1:
					return 947;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 923;
					break;
				
				case 14:
					return 955;
					break;
				
				case 12:
					return 966;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 916;
					break;
				
				case 4:
					return 932;
					break;
				
				case 6:
					return 940;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 9:
					return 1411;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 924;
					break;
				
				case 14:
					return 956;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 917;
					break;
				
				case 4:
					return 933;
					break;
				
				case 6:
					return 941;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 7:
					return 1415;
					break;
				
				case 11:
					return 925;
					break;
				
				case 14:
					return 957;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 934;
					break;
				
				case 6:
					return 942;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 926;
					break;
				
				case 14:
					return 958;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 935;
					break;
				
				case 6:
					return 943;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 927;
					break;
				
				case 14:
					return 959;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 963;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 964;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 965;
					break;
			}
			break;
	}
	return 923;
}

int func_417(int iParam0, int iParam1)//Position - 0x223E8
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 863;
					break;
				
				case 3:
					return 1386;
					break;
				
				case 4:
					return 879;
					break;
				
				case 6:
					return 887;
					break;
				
				case 8:
					return 1387;
					break;
				
				case 9:
					return 1395;
					break;
				
				case 10:
					return 1397;
					break;
				
				case 1:
					return 895;
					break;
				
				case 7:
					return 1398;
					break;
				
				case 11:
					return 871;
					break;
				
				case 14:
					return 903;
					break;
				
				case 12:
					return 914;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 864;
					break;
				
				case 4:
					return 880;
					break;
				
				case 6:
					return 888;
					break;
				
				case 8:
					return 1388;
					break;
				
				case 9:
					return 1396;
					break;
				
				case 7:
					return 1399;
					break;
				
				case 11:
					return 872;
					break;
				
				case 14:
					return 904;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 865;
					break;
				
				case 4:
					return 881;
					break;
				
				case 6:
					return 889;
					break;
				
				case 8:
					return 1389;
					break;
				
				case 7:
					return 1400;
					break;
				
				case 11:
					return 873;
					break;
				
				case 14:
					return 905;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 882;
					break;
				
				case 6:
					return 890;
					break;
				
				case 8:
					return 1390;
					break;
				
				case 11:
					return 874;
					break;
				
				case 14:
					return 906;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 883;
					break;
				
				case 6:
					return 891;
					break;
				
				case 8:
					return 1391;
					break;
				
				case 11:
					return 875;
					break;
				
				case 14:
					return 907;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1392;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 911;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 912;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 913;
					break;
			}
			break;
	}
	return 871;
}

int func_418(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x227E3
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/][iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_C[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_10[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_14[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_18[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_1C[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_2C[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_30[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_34[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_38[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_3C[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_44[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_4C[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_50[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_54[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_58[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_5C[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_6C[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_70[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_74[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_78[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_7C[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_88[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_8C[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_90[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_94[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_98[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_9C[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_17C49.f_6C1[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_17C49.f_6C1[iParam1 /*164*/].f_A0[iParam3], iParam4);
		}
	}
	return 0;
}

int func_419(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x23701
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_10A08;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_420(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_34(iVar2, iVar0, 0);
		return MISC::IS_BIT_SET(uVar3, iVar1);
	}
	return 0;
}

bool func_420(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x23743
{
	int iVar0;
	
	*uParam2 = 2903;
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_26CA8E)
		{
			iVar0 = PED::_0x1E77FA7A62EE6C4C(uParam0);
		}
		else
		{
			iVar0 = PED::_0xF033419D1B81FAE8(uParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::_0x1E77FA7A62EE6C4C(uParam0);
	}
	else
	{
		iVar0 = PED::_0xF033419D1B81FAE8(uParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1745;
					break;
				
				case 1:
					*uParam2 = 1746;
					break;
				
				case 2:
					*uParam2 = 1747;
					break;
				
				case 3:
					*uParam2 = 1748;
					break;
				
				case 4:
					*uParam2 = 1749;
					break;
				
				case 5:
					*uParam2 = 1750;
					break;
				
				case 6:
					*uParam2 = 1757;
					break;
				
				case 7:
					*uParam2 = 1758;
					break;
				
				case 8:
					*uParam2 = 1759;
					break;
				
				case 9:
					*uParam2 = 1760;
					break;
				
				case 10:
					*uParam2 = 1761;
					break;
				
				case 11:
					*uParam2 = 1762;
					break;
				
				case 12:
					*uParam2 = 1763;
					break;
				
				case 13:
					*uParam2 = 1771;
					break;
				
				case 14:
					*uParam2 = 1772;
					break;
				
				case 15:
					*uParam2 = 1873;
					break;
				
				case 16:
					*uParam2 = 1874;
					break;
				
				case 17:
					*uParam2 = 1905;
					break;
				
				case 18:
					*uParam2 = 1917;
					break;
				
				case 19:
					*uParam2 = 1918;
					break;
				
				case 20:
					*uParam2 = 1919;
					break;
				
				case 21:
					*uParam2 = 1920;
					break;
				
				case 22:
					*uParam2 = 1921;
					break;
				
				case 23:
					*uParam2 = 2025;
					break;
				
				case 24:
					*uParam2 = 2026;
					break;
				
				case 25:
					*uParam2 = 2052;
					break;
				
				case 26:
					*uParam2 = 2053;
					break;
				
				case 27:
					*uParam2 = 2054;
					break;
				
				case 28:
					*uParam2 = 2055;
					break;
				
				case 29:
					*uParam2 = 2056;
					break;
				
				case 30:
					*uParam2 = 2057;
					break;
				
				case 31:
					*uParam2 = 2058;
					break;
				
				case 32:
					*uParam2 = 2059;
					break;
				
				case 33:
					*uParam2 = 2060;
					break;
				
				case 34:
					*uParam2 = 2061;
					break;
				
				case 35:
					*uParam2 = 2308;
					break;
				
				case 36:
					*uParam2 = 2309;
					break;
				
				case 37:
					*uParam2 = 2345;
					break;
				
				case 38:
					*uParam2 = 2346;
					break;
				
				case 39:
					*uParam2 = 2347;
					break;
				
				case 40:
					*uParam2 = 2348;
					break;
				
				case 41:
					*uParam2 = 2407;
					break;
				
				case 42:
					*uParam2 = 2408;
					break;
				
				case 43:
					*uParam2 = 2409;
					break;
				
				case 44:
					*uParam2 = 2410;
					break;
				
				case 45:
					*uParam2 = 2411;
					break;
				
				case 46:
					*uParam2 = 2412;
					break;
				
				case 47:
					*uParam2 = 2413;
					break;
				
				case 48:
					*uParam2 = 2414;
					break;
				
				case 49:
					*uParam2 = 2415;
					break;
				
				case 50:
					*uParam2 = 2416;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1751;
					break;
				
				case 1:
					*uParam2 = 1752;
					break;
				
				case 2:
					*uParam2 = 1753;
					break;
				
				case 3:
					*uParam2 = 1754;
					break;
				
				case 4:
					*uParam2 = 1755;
					break;
				
				case 5:
					*uParam2 = 1756;
					break;
				
				case 6:
					*uParam2 = 1764;
					break;
				
				case 7:
					*uParam2 = 1765;
					break;
				
				case 8:
					*uParam2 = 1766;
					break;
				
				case 9:
					*uParam2 = 1767;
					break;
				
				case 10:
					*uParam2 = 1768;
					break;
				
				case 11:
					*uParam2 = 1769;
					break;
				
				case 12:
					*uParam2 = 1770;
					break;
				
				case 13:
					*uParam2 = 1773;
					break;
				
				case 14:
					*uParam2 = 1774;
					break;
				
				case 15:
					*uParam2 = 1875;
					break;
				
				case 16:
					*uParam2 = 1876;
					break;
				
				case 17:
					*uParam2 = 1906;
					break;
				
				case 18:
					*uParam2 = 1922;
					break;
				
				case 19:
					*uParam2 = 1923;
					break;
				
				case 20:
					*uParam2 = 1924;
					break;
				
				case 21:
					*uParam2 = 1925;
					break;
				
				case 22:
					*uParam2 = 1926;
					break;
				
				case 23:
					*uParam2 = 2027;
					break;
				
				case 24:
					*uParam2 = 2028;
					break;
				
				case 25:
					*uParam2 = 2062;
					break;
				
				case 26:
					*uParam2 = 2063;
					break;
				
				case 27:
					*uParam2 = 2064;
					break;
				
				case 28:
					*uParam2 = 2065;
					break;
				
				case 29:
					*uParam2 = 2066;
					break;
				
				case 30:
					*uParam2 = 2067;
					break;
				
				case 31:
					*uParam2 = 2068;
					break;
				
				case 32:
					*uParam2 = 2069;
					break;
				
				case 33:
					*uParam2 = 2070;
					break;
				
				case 34:
					*uParam2 = 2071;
					break;
				
				case 35:
					*uParam2 = 2310;
					break;
				
				case 36:
					*uParam2 = 2311;
					break;
				
				case 37:
					*uParam2 = 2349;
					break;
				
				case 38:
					*uParam2 = 2350;
					break;
				
				case 39:
					*uParam2 = 2351;
					break;
				
				case 40:
					*uParam2 = 2352;
					break;
				
				case 41:
					*uParam2 = 2417;
					break;
				
				case 42:
					*uParam2 = 2418;
					break;
				
				case 43:
					*uParam2 = 2419;
					break;
				
				case 44:
					*uParam2 = 2420;
					break;
				
				case 45:
					*uParam2 = 2421;
					break;
				
				case 46:
					*uParam2 = 2422;
					break;
				
				case 47:
					*uParam2 = 2423;
					break;
				
				case 48:
					*uParam2 = 2424;
					break;
				
				case 49:
					*uParam2 = 2425;
					break;
				
				case 50:
					*uParam2 = 2426;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 2903;
}

int func_421(int iParam0)//Position - 0x23DE4
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_422(int iParam0, int iParam1, int iParam2)//Position - 0x23EB8
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_10A0A[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(uVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_280004 = Var2.f_1;
					Global_280005 = Var2;
					func_414(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_414(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var6);
		iVar9 = 0;
		iVar10 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 6, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar8, &Var6);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_280004 = Var6.f_1;
					Global_280005 = Var6;
					func_414(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var6.f_1, joaat("OUTFIT_ONLY"), 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var11);
		iVar13 = 0;
		iVar14 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 6, -1, 0, -1, func_423(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar12, &Var11);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_280004 = Var11.f_1;
					Global_280005 = Var11;
					func_414(&(Global_10A0A[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var11.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

int func_423(int iParam0)//Position - 0x24134
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_424(int iParam0)//Position - 0x241E4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_422(iVar7, iParam0, 9);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_425(int iParam0)//Position - 0x2433A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 48);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_426(int iParam0)//Position - 0x24847
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 1);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_427(int iParam0)//Position - 0x248BB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 1);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_428(int iParam0)//Position - 0x2492E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 6);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_429(int iParam0)//Position - 0x24A14
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_422(iVar7, iParam0, 33);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_430(int iParam0)//Position - 0x24D76
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_422(iVar7, iParam0, 17);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_431(int iParam0)//Position - 0x24F86
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_422(iVar7, iParam0, 18);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_432(int iParam0)//Position - 0x251B5
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_422(iVar7, iParam0, 7);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_433(int iParam0)//Position - 0x252C4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_422(iVar7, iParam0, 84);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_434(int iParam0)//Position - 0x25C62
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_422(iVar7, iParam0, 104);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_435(int iParam0)//Position - 0x267D4
{
	if (iParam0 < 136)
	{
		func_437(iParam0);
	}
	else
	{
		func_436(iParam0);
	}
	if (Global_10A0A[0 /*14*/].f_2 == -1)
	{
		func_422(3, iParam0, 242);
	}
}

void func_436(int iParam0)//Position - 0x26808
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_437(int iParam0)//Position - 0x2740C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_438(int iParam0)//Position - 0x2831B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 9);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_439(int iParam0)//Position - 0x28447
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_10A0A[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_422(iVar7, iParam0, 7);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_440(int iParam0, int iParam1)//Position - 0x28544
{
	switch (iParam0)
	{
		case 0:
			func_458(iParam1);
			break;
		
		case 2:
			func_457(iParam1);
			break;
		
		case 3:
			func_453(iParam1);
			break;
		
		case 4:
			func_452(iParam1);
			break;
		
		case 6:
			func_451(iParam1);
			break;
		
		case 5:
			func_450(iParam1);
			break;
		
		case 8:
			func_449(iParam1);
			break;
		
		case 9:
			func_448(iParam1);
			break;
		
		case 10:
			func_447(iParam1);
			break;
		
		case 1:
			func_446(iParam1);
			break;
		
		case 7:
			func_445(iParam1);
			break;
		
		case 11:
			func_444(iParam1);
			break;
		
		case 12:
			func_443(iParam1);
			break;
		
		case 13:
			func_442(iParam1);
			break;
		
		case 14:
			func_441(iParam1);
			break;
	}
}

void func_441(int iParam0)//Position - 0x28634
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 175);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_442(int iParam0)//Position - 0x29B24
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 9);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_443(int iParam0)//Position - 0x29C74
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 47);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_444(int iParam0)//Position - 0x2A17E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_422(iVar7, iParam0, 63);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_445(int iParam0)//Position - 0x2A7EB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 1);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_446(int iParam0)//Position - 0x2A85E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 5);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_447(int iParam0)//Position - 0x2A92D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 53);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_448(int iParam0)//Position - 0x2AE5C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 12);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_449(int iParam0)//Position - 0x2AFF2
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 77);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_450(int iParam0)//Position - 0x2B7EF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_422(iVar7, iParam0, 7);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_451(int iParam0)//Position - 0x2B8FE
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_422(iVar7, iParam0, 134);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_452(int iParam0)//Position - 0x2C82A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_422(iVar7, iParam0, 117);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_453(int iParam0)//Position - 0x2D4E6
{
	if (iParam0 < 107)
	{
		func_456(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_455(iParam0);
	}
	else
	{
		func_454(iParam0);
	}
	if (Global_10A0A[0 /*14*/].f_2 == -1)
	{
		func_422(3, iParam0, 318);
	}
}

void func_454(int iParam0)//Position - 0x2D52B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_455(int iParam0)//Position - 0x2DFD0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_456(int iParam0)//Position - 0x2EDBF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_457(int iParam0)//Position - 0x2FA08
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_422(iVar7, iParam0, 21);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_458(int iParam0)//Position - 0x2FC80
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_10A0A[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_422(iVar7, iParam0, 10);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_459(int iParam0, int iParam1)//Position - 0x2FDC5
{
	switch (iParam0)
	{
		case 0:
			func_476(iParam1);
			break;
		
		case 2:
			func_475(iParam1);
			break;
		
		case 3:
			func_472(iParam1);
			break;
		
		case 4:
			func_471(iParam1);
			break;
		
		case 6:
			func_470(iParam1);
			break;
		
		case 5:
			func_469(iParam1);
			break;
		
		case 8:
			func_468(iParam1);
			break;
		
		case 9:
			func_467(iParam1);
			break;
		
		case 10:
			func_466(iParam1);
			break;
		
		case 1:
			func_465(iParam1);
			break;
		
		case 7:
			func_464(iParam1);
			break;
		
		case 11:
			func_463(iParam1);
			break;
		
		case 12:
			func_462(iParam1);
			break;
		
		case 13:
			func_461(iParam1);
			break;
		
		case 14:
			func_460(iParam1);
			break;
	}
}

void func_460(int iParam0)//Position - 0x2FEB5
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_422(iVar7, iParam0, 113);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_461(int iParam0)//Position - 0x30D61
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_422(iVar7, iParam0, 10);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_462(int iParam0)//Position - 0x30EDA
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 53);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_463(int iParam0)//Position - 0x31450
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 45);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_464(int iParam0)//Position - 0x31979
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 1);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_465(int iParam0)//Position - 0x319EC
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 5);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_466(int iParam0)//Position - 0x31ABB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_422(iVar7, iParam0, 48);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_467(int iParam0)//Position - 0x31F92
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_422(iVar7, iParam0, 20);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_468(int iParam0)//Position - 0x321FA
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_422(iVar7, iParam0, 24);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_469(int iParam0)//Position - 0x324CF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_422(iVar7, iParam0, 14);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_470(int iParam0)//Position - 0x32697
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_422(iVar7, iParam0, 99);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_471(int iParam0)//Position - 0x331EA
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 113);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_472(int iParam0)//Position - 0x33E33
{
	if (iParam0 < 60)
	{
		func_474(iParam0);
	}
	else
	{
		func_473(iParam0);
	}
	if (Global_10A0A[0 /*14*/].f_2 == -1)
	{
		func_422(3, iParam0, 181);
	}
}

void func_473(int iParam0)//Position - 0x33E67
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_474(int iParam0)//Position - 0x34D79
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_475(int iParam0)//Position - 0x35405
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_422(iVar7, iParam0, 6);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_476(int iParam0)//Position - 0x354EB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_10A0A[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_422(iVar7, iParam0, 7);
			return;
			break;
	}
	func_414(&(Global_10A0A[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_477()//Position - 0x355E8
{
	Global_10A0A[0 /*14*/].f_1 = -1;
	Global_10A0A[0 /*14*/].f_2 = -1;
	Global_10A0A[0 /*14*/].f_5 = -1;
	Global_10A0A[0 /*14*/].f_3 = -1;
	Global_10A0A[0 /*14*/].f_4 = -1;
	Global_10A0A[0 /*14*/].f_7 = 0;
	Global_10A0A[0 /*14*/].f_6 = 0;
	Global_10A0A[0 /*14*/].f_D = -1;
	Global_10A0A[0 /*14*/].f_C = 0;
	Global_10A0A[0 /*14*/] = 0;
	StringCopy(&(Global_10A0A[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_478(int iParam0, int iParam1, int iParam2)//Position - 0x35661
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_10A0A[1 /*14*/] = { func_411(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_493(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_478(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_489(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_478(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_10A0A[2 /*14*/] = { func_411(iVar0, 14, iVar4) };
									if (Global_10A0A[2 /*14*/].f_C == iVar3)
									{
										if (func_478(iParam0, 14, iVar4))
										{
											if (!func_481(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_10A0A[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_479(iParam0, iVar2);
						Global_10A0A[2 /*14*/] = { func_411(iVar0, iVar2, iVar1) };
						if (!func_481(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_10A0A[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_489(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_478(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_10A0A[1 /*14*/].f_C) == Global_10A0A[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_10A0A[1 /*14*/].f_C) == Global_10A0A[1 /*14*/].f_4 || Global_10A0A[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_10A0A[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_423(iParam1)) && Global_10A0A[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_423(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_479(int iParam0, int iParam1)//Position - 0x358B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_423(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_480(iParam0, iVar1, iVar2, iParam1);
}

int func_480(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x35919
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_423(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_481(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x3599D
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_489(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_488(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_487(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_486(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_482(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_487(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_486(iParam0, iParam2, iParam3))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_482(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_487(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_486(iParam0, iParam2, iParam3))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_482(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_482(int iParam0, int iParam1, int iParam2)//Position - 0x35F98
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iParam0, iParam2, 14, 3), joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iParam0, iParam2, 1, 3), joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iParam0, iParam2, 14, 4), joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iParam0, iParam2, 1, 4), joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_483(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x361BB
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_485(iParam0));
		if (iVar3 < 0)
		{
			return -1;
		}
		iVar4 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_484(iParam0, func_423(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		iVar9 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 0, -1, func_423(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar6, &Var5);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var5))
			{
				if (iVar7 == iVar8)
				{
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return -1;
}

int func_484(int iParam0, int iParam1)//Position - 0x362B5
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_485(int iParam0)//Position - 0x3665C
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_486(int iParam0, int iParam1, int iParam2)//Position - 0x366BD
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					uVar0 = func_483(iParam0, iParam2, 1, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uVar0, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					uVar1 = func_483(iParam0, iParam2, 1, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uVar1, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_487(int iParam0, int iParam1, int iParam2)//Position - 0x36AB2
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iParam0, iParam2, 14, 3), joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iParam0, iParam2, 14, 4), joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_488(int iParam0, int iParam1, int iParam2)//Position - 0x36D91
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

struct<10> func_489(int iParam0, int iParam1)//Position - 0x36E2A
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_492(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_492(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_492(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_492(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_492(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_492(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_492(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_492(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_492(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_492(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_492(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_490(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_492(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_492(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_492(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_492(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_492(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_492(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_492(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_492(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_492(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_492(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_490(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_492(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_492(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_492(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_492(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_492(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_492(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_492(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_492(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_492(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_492(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_490(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_492(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_492(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_492(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_492(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_492(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_492(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_492(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_492(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_492(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_492(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_492(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_492(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_492(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_492(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_492(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_492(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_492(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_492(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_492(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_492(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_492(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_492(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_492(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_492(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_492(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_492(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_490(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_492(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_492(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_492(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_492(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_492(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_492(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_492(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_492(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_492(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_492(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_492(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_492(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_492(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_492(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_492(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_492(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_492(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_492(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_492(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_492(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_492(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_492(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_492(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_492(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_492(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_490(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_490(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37759
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.x != 0 && Var2.x != -1) && Var2.x != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = func_491(iParam1, Var2.x, 14, iVar0);
					}
					else if (Var2.f_1 != -1)
					{
						(*iParam0)[Var2.f_2] = Var2.f_1;
					}
				}
				iVar3++;
			}
		}
	}
}

int func_491(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37883
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_485(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var4);
		iVar6 = 0;
		iVar7 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 6, -1, 0, -1, func_423(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar5, &Var4);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_484(iParam0, func_423(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

void func_492(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x37963
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<16> func_493(int iParam0, int iParam1)//Position - 0x379AB
{
	int iVar0;
	struct<16> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_17C49.f_1CAD.f_63.f_3A[120])
					{
						func_496(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_496(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_496(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_496(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_496(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_496(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_496(&Var1, -99, -99, Global_17C49.f_6C1.f_21B.f_C4[0], Global_17C49.f_6C1.f_21B.f_C8[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_496(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_496(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_496(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_496(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_496(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_496(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_496(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_496(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_496(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_496(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_496(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_496(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_496(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_496(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_496(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_496(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_496(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_496(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_496(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_496(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_496(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_496(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_496(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_496(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_496(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_496(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_496(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_496(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_496(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_496(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_496(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_496(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_496(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_496(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_496(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_496(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_496(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_496(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_496(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_496(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_496(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_496(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_496(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_496(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_496(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_496(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_496(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_494(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_496(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_496(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_496(&Var1, -99, -99, Global_17C49.f_6C1.f_21B.f_C4[1], Global_17C49.f_6C1.f_21B.f_C8[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_496(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_496(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_496(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_496(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_496(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_496(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_496(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_496(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_496(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_496(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_496(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_496(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_496(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_496(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_496(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_496(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_496(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_496(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_496(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_496(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_496(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_496(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_496(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_496(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_496(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_496(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_496(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_496(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_496(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_496(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_496(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_496(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_496(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_496(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_496(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_496(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_496(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_496(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_496(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_496(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_496(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_496(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_496(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_496(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_494(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_496(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_496(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_496(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_496(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_496(&Var1, -99, -99, Global_17C49.f_6C1.f_21B.f_C4[2], Global_17C49.f_6C1.f_21B.f_C8[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_496(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_496(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_496(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_496(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_496(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_496(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_496(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_496(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_496(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_496(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_496(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_496(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_496(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_496(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_496(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_496(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_496(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_496(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_496(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_496(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_496(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_496(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_496(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_496(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_496(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_496(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_496(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_496(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_496(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_496(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_496(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_496(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_496(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_496(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_496(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_496(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_496(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_496(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_496(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_496(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_496(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_496(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_496(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_494(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_496(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_496(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_496(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_496(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_496(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_496(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_496(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_496(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_496(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_496(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_496(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_496(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_496(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_496(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_496(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_496(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_496(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_496(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_496(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_496(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_496(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_496(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_496(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_496(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_496(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_496(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_494(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_496(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_496(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_496(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_496(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_496(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_496(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_496(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_496(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_496(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_496(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_496(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_496(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_496(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_496(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_496(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_496(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_496(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_496(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_496(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_496(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_496(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_496(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_496(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_496(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_496(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_496(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_496(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_496(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_494(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_494(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x397F0
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var2;
	int iVar3;
	
	(*iParam0)[0] = 0;
	(*iParam0)[2] = -99;
	(*iParam0)[3] = 0;
	(*iParam0)[4] = 0;
	(*iParam0)[6] = 0;
	(*iParam0)[5] = 0;
	(*iParam0)[8] = 0;
	(*iParam0)[9] = 0;
	(*iParam0)[10] = 0;
	(*iParam0)[1] = 0;
	(*iParam0)[7] = 0;
	(*iParam0)[11] = 0;
	(*iParam0)[13] = -99;
	(*iParam0)[14] = -99;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*iParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, 0);
	FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1))
	{
		iVar3 = 0;
		while (iVar3 < Var1.f_4)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar3, &Var2))
			{
				if ((Var2.x != 0 && Var2.x != -1) && Var2.x != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						(*iParam0)[func_495(Var2.f_2)] = Var2.x;
					}
					else
					{
						(*iParam0)[func_495(Var2.f_2)] = func_491(iParam1, Var2.x, func_495(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*iParam0)[func_495(Var2.f_2)] = Var2.f_1;
				}
			}
			iVar3++;
		}
		if (Var1.f_3 == 0)
		{
			(*iParam0)[13] = -99;
		}
		else
		{
			(*iParam0)[13] = Var1.f_1;
		}
	}
}

int func_495(int iParam0)//Position - 0x399A1
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_496(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x39A51
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[2] = iParam2;
	(*iParam0)[3] = iParam3;
	(*iParam0)[4] = iParam4;
	(*iParam0)[6] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[8] = iParam7;
	(*iParam0)[9] = iParam8;
	(*iParam0)[10] = iParam9;
	(*iParam0)[1] = iParam10;
	(*iParam0)[7] = iParam11;
	(*iParam0)[11] = iParam12;
	(*iParam0)[13] = iParam13;
	(*iParam0)[14] = -99;
}

bool func_497(int iParam0)//Position - 0x39AC2
{
	int iVar0;
	int iVar1;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar0 = func_479(iParam0, 4);
	return func_498(iVar1, 4, iVar0);
}

int func_498(int iParam0, int iParam1, int iParam2)//Position - 0x39AE4
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_499(int iParam0, int iParam1)//Position - 0x39BCD
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_147(iParam0);
		if (func_146(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_637(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_636(iVar0);
					func_501(iParam0, &(Global_17C49.f_6C1.f_21B[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_D = 12;
			Var2.f_1A = 12;
			Var2.f_27 = 9;
			Var2.f_31 = 9;
			func_130(iParam0, &Var2, 1);
			Global_15E98[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				func_128();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_13(0) && !func_13(1)) && !func_13(2)) && !func_13(3)) && !func_13(4)) && !func_13(9)) && !func_13(10)))
				{
					Global_17C49.f_6C1.f_21B[iVar0 /*65*/] = { Var2 };
					Global_17C49.f_6C1.f_21B.f_653[iVar0] = func_500(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_17C49.f_6C1.f_21B.f_CC[iVar3 /*4*/][iVar0] = func_479(iParam0, func_495(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_17C49.f_6C1.f_21B.f_CC[iVar3 /*4*/][iVar0] = func_479(iParam0, func_495(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_17C49.f_1CAD.f_63.f_3A[121])
						{
							Global_17C49.f_1CAD.f_63.f_3A[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_500(int iParam0)//Position - 0x39DB1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_501(int iParam0, var uParam1, bool bParam2)//Position - 0x39E44
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_147(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_D[iVar3], (*uParam1)[iVar3], uParam1->f_1A[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (uParam1->f_27[iVar3] != -1 && uParam1->f_27[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_27[iVar3], uParam1->f_31[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_146(iVar0))
		{
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3B = uParam1->f_3B;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C = uParam1->f_3C;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3D = uParam1->f_3D;
			if (func_635(iParam0, iVar1, &iVar2, 0))
			{
				func_638(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3E = uParam1->f_3E;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F = uParam1->f_3F;
			Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_40 = uParam1->f_40;
			if (func_633(iParam0, iVar1, &iVar2))
			{
				func_638(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			func_632(741, uParam1->f_3C, Global_10A08, 1);
			func_632(742, uParam1->f_3D, Global_10A08, 1);
			iVar4 = func_480(iParam0, uParam1->f_D[2], (*uParam1)[2], 2);
			func_504(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_10A08, 0);
			if (!bParam2)
			{
				iVar5 = func_480(iParam0, uParam1->f_D[1], (*uParam1)[1], 1);
				func_504(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_10A08, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_632(740, uParam1->f_3B, Global_10A08, 1);
			func_632(2035, uParam1->f_3B, Global_10A08, 1);
			func_502(161, 1, -1, 1);
		}
	}
}

void func_502(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3A09C
{
	int iVar0;
	
	if (func_503())
	{
		iVar0 = Global_25BDB1[iParam0 /*6*/][func_35(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_503()//Position - 0x3A0CE
{
	return 1;
	return 0;
}

int func_504(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x3A0DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	var uVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	var uVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1413F7 != 4 && Global_1413F7 != 5) && Global_1413F7 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_24D5B9[PLAYER::PLAYER_ID() /*254*/].f_DB == 2)
	{
		return 0;
	}
	Global_10A09++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_10A0A[1 /*14*/] = { func_599(iVar5, iParam1, iParam2) };
		if (!func_598(iParam3))
		{
			Global_10A09 = (Global_10A09 - 1);
			return 0;
		}
		func_595(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_280004;
		uVar14 = Global_280005;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_10A35 };
		}
		else
		{
			uVar15 = { func_493(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_10A0A[1 /*14*/] = { func_599(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_423(iVar0), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_423(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_423(iVar0), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, iParam4);
					}
					if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 1))
					{
						func_595(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_10A0A[1 /*14*/] = { func_599(iVar5, iVar0, uVar15[iVar0]) };
					if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar16 = 9;
							if (iParam5 == 1)
							{
								uVar16 = { Global_10A45 };
							}
							else
							{
								uVar16 = { func_489(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_10A0A[1 /*14*/] = { func_599(iVar5, 14, uVar16[iVar1]) };
								func_594(iParam0, Global_10A0A[1 /*14*/].f_C, Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 1))
								{
									func_595(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iParam4 == -1)
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, func_423(iVar0), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_423(iVar0)));
							}
							else
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, func_423(iVar0), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, iParam4);
							}
							if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 1))
							{
								func_595(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_10A0A[1 /*14*/] = { func_599(iVar5, iVar0, func_593(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_493(iVar5, 0) };
					func_504(iParam0, iVar0, uVar17[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_280004 = uVar13;
		Global_280005 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_592();
			if (iVar18 != -1)
			{
				func_590(iVar18, 0, Global_10A08);
			}
			func_588(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_489(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_10A0A[1 /*14*/] = { func_599(iVar5, 14, uVar19[iVar1]) };
			func_594(iParam0, Global_10A0A[1 /*14*/].f_C, Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 1))
			{
				func_595(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_10A09 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_586(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_504(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar20 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("FORCE_PROP"), 0))
		{
			iVar21 = func_479(iParam0, 1);
			iVar3 = func_586(iParam0, iVar5, 1, iVar21, 14, Global_10A0A[1 /*14*/].f_C);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = func_585(iVar5, 1, -1);
			}
		}
		func_594(iParam0, Global_10A0A[1 /*14*/].f_C, Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_10A0A[1 /*14*/].f_6, 1))
		{
			func_595(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_10A09 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_586(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_504(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar22 = func_479(iParam0, 11);
				iVar23 = func_479(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = func_479(iParam0, 8);
				}
				iVar24 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar24, joaat("GLOVES"), 3))
				{
					iVar25 = func_584(iVar5, iVar23, iVar22);
					if (iVar25 == -99)
					{
						iVar25 = func_586(iParam0, iVar5, 11, iVar22, 3, 0);
					}
					if (iVar25 != -99)
					{
						iVar26 = iVar25;
						iVar27 = 0;
						while (iVar27 < 9)
						{
							if (func_583(iVar5, iVar26, iVar27) == iVar24)
							{
								iVar11 = iVar27;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar27++;
						}
					}
				}
				iVar28 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar22 = func_479(iParam0, 11);
					if (iVar22 >= 256)
					{
						iVar28 = func_483(iVar5, iVar22, 11, 4);
					}
					if (iVar22 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar28, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = func_581(iVar5, iVar22, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_504(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_10A0A[1 /*14*/] = { func_599(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (func_580(iVar5, iParam2))
				{
					if (iVar22 >= 256)
					{
						iVar28 = func_483(iVar5, iVar22, 11, 4);
					}
					if (!func_580(iVar5, iVar22))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar28, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar28, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar28, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar28, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar28, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar28, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar28, joaat("HEIST_DRAW_12"), 0)))
						{
						}
						else
						{
							iVar30 = func_581(iVar5, iVar22, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar30 != -99)
							{
								func_504(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_10A0A[1 /*14*/] = { func_599(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_504(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_10A0A[1 /*14*/] = { func_599(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_10A0A[1 /*14*/] = { func_599(iVar5, 11, iVar22) };
						iVar31 = Global_10A0A[1 /*14*/].f_3;
						Global_10A0A[1 /*14*/] = { func_599(iVar5, 11, iParam2) };
						iVar32 = Global_10A0A[1 /*14*/].f_3;
						if (iVar31 != iVar32)
						{
							Global_10A0A[1 /*14*/] = { func_599(iVar5, 8, iVar23) };
							iVar33 = Global_10A0A[1 /*14*/].f_4;
							iVar34 = func_579(iVar5, iVar23, iVar33);
							if (iVar34 == -99)
							{
								iVar35 = iVar23;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || func_578(func_483(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar34 = func_585(iVar5, 11, -1);
										Global_10A0A[1 /*14*/] = { func_599(iVar5, 11, iVar34) };
										iVar35 = func_581(iVar5, iVar34, iParam2, Global_10A0A[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar35 = func_581(iVar5, iVar34, iParam2, iVar33);
							}
							if (iVar35 != -99)
							{
								func_504(iParam0, 8, iVar35, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_504(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_10A0A[1 /*14*/] = { func_599(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					func_572(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_588(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_584(iVar5, func_593(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_34(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_34(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_547(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_588(iParam0, iParam1, iParam2, iParam6, 0);
			iVar36 = func_479(iParam0, 11);
			if (func_580(iVar5, iVar36))
			{
				iVar37 = func_579(iVar5, iParam2, Global_10A0A[1 /*14*/].f_4);
				func_572(iVar5, iVar37);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_584(iVar5, iParam2, func_479(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar38 = func_479(iParam0, 7);
				if (!func_544(iVar5, iVar38, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, func_423(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_280004, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_280004, joaat("SHRINK_HEAD"), 0)))
			{
				iVar39 = func_34(2082, iParam10, 0);
				iVar40 = func_34(2083, iParam10, 0);
				iVar41 = func_34(2084, iParam10, 0);
				uVar42 = func_543(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar39, iVar40, iVar41, 0f, uVar42, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar39, iVar40, iVar41, 0f, fVar42, 0f, 0);
				}
				iVar43 = 0;
				while (iVar43 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar43, 0f);
					iVar43++;
				}
			}
			else
			{
				func_527(iParam0, Global_10A08);
			}
			iVar44 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar45 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("FORCE_PROP"), 0))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar45, joaat("FORCE_PROP"), 0))
				{
					iVar46 = func_479(iParam0, 1);
					iVar47 = 0;
					while (iVar47 < 9)
					{
						iVar3 = func_586(iParam0, iVar5, iParam1, iVar46, 14, iVar47);
						iVar48 = func_523(iParam0, iVar47);
						if (iVar3 == iVar48)
						{
							PED::CLEAR_PED_PROP(iParam0, iVar47);
						}
						iVar47++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_423(iParam1), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_423(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_423(iParam1), Global_10A0A[1 /*14*/].f_3, Global_10A0A[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_10A09 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_586(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_504(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (func_522(iParam0))
				{
					iVar49 = -99;
					iVar49 = func_521(iVar5, iParam2);
					if (iVar49 > 0)
					{
						iVar49 = (iVar49 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_520(iParam0, 9, iVar49))
						{
							func_504(iParam0, 9, iVar49, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_504(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_504(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar50 = func_34(2024, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, func_517(iParam0, iVar50), func_516(iParam0, iVar50), func_515(iParam0, iVar50));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_517(PLAYER::PLAYER_PED_ID(), iVar50), func_516(PLAYER::PLAYER_PED_ID(), iVar50), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_515(PLAYER::PLAYER_PED_ID(), iVar50));
					func_512(PLAYER::PLAYER_ID(), iVar50);
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar51 = func_593(iParam0, 4, -1);
					iVar52 = iParam2;
				}
				else
				{
					iVar51 = iParam2;
					iVar52 = func_593(iParam0, 11, -1);
				}
				if (func_511(iVar5, 11, iVar52))
				{
					if (!func_510(iVar5, 4, iVar51))
					{
						if (func_509(iVar5, 4, iVar51, &uVar53))
						{
							func_504(iParam0, 4, uVar53, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (func_510(iVar5, 4, iVar51))
				{
					if (func_508(iVar5, 4, iVar51, &uVar53))
					{
						func_504(iParam0, 4, uVar53, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_506(iParam0);
				iVar54 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar55 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar56 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar54, iVar55);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar56, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_586(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_504(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = func_586(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_504(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_505(iParam0, &uVar4))
		{
			func_504(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_504(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_504(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_504(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar57 = func_583(iVar5, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), iVar11);
		if (iVar57 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_491(iVar5, iVar57, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_491(iVar5, iVar57, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_504(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_10A09 = (Global_10A09 - 1);
	return 1;
}

int func_505(int iParam0, var uParam1)//Position - 0x3B19F
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_593(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (func_34(741, Global_10A08, 0) != -99 && func_134())
	{
		if (func_251() == 4)
		{
			return 1;
		}
		if (func_34(741, Global_10A08, 0) == 0 && func_34(742, Global_10A08, 0) == 0)
		{
			if (func_131(161, Global_10A08))
			{
				if (func_34(2035, Global_10A08, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_34(740, Global_10A08, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_34(741, Global_10A08, 0);
		iVar1 = func_34(742, Global_10A08, 0);
		if (!func_520(iParam0, iVar1, iVar0))
		{
			if (func_131(161, Global_10A08))
			{
				*uParam1 = func_34(2035, Global_10A08, 0);
			}
			else
			{
				*uParam1 = func_34(740, Global_10A08, 0);
			}
			func_632(741, -99, Global_10A08, 1);
			func_632(742, 2, Global_10A08, 1);
			return 1;
		}
	}
	return 0;
}

void func_506(int iParam0)//Position - 0x3B2B1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("HOODED_JACKET"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("HOOD_COMPAT"), 0))
		{
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("HOOD_UP"), 0))
			{
				iVar1 = (iVar1 - 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("HOOD_UP"), 0))
		{
			iVar1++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, iVar1, iVar2, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
	}
	bVar10 = false;
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("HEIST_DRAW_14"), 0))
		{
			bVar10 = true;
		}
		switch (iVar8)
		{
			case joaat("DLC_MP_HEIST_M_BERD_21_0"):
			case joaat("DLC_MP_HEIST_M_BERD_21_1"):
			case joaat("DLC_MP_HEIST_M_BERD_21_2"):
			case joaat("DLC_MP_HEIST_M_BERD_21_3"):
			case joaat("DLC_MP_HEIST_M_BERD_21_4"):
			case joaat("DLC_MP_HEIST_M_BERD_21_5"):
			case joaat("DLC_MP_HEIST_M_BERD_21_6"):
			case joaat("DLC_MP_HEIST_M_BERD_21_7"):
			case joaat("DLC_MP_HEIST_M_BERD_21_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_0"):
			case joaat("DLC_MP_HEIST_M_BERD_14_1"):
			case joaat("DLC_MP_HEIST_M_BERD_14_2"):
			case joaat("DLC_MP_HEIST_M_BERD_14_3"):
			case joaat("DLC_MP_HEIST_M_BERD_14_4"):
			case joaat("DLC_MP_HEIST_M_BERD_14_5"):
			case joaat("DLC_MP_HEIST_M_BERD_14_6"):
			case joaat("DLC_MP_HEIST_M_BERD_14_7"):
			case joaat("DLC_MP_HEIST_M_BERD_14_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_9"):
			case joaat("DLC_MP_HEIST_M_BERD_14_10"):
			case joaat("DLC_MP_HEIST_M_BERD_14_11"):
			case joaat("DLC_MP_HEIST_M_BERD_14_12"):
			case joaat("DLC_MP_HEIST_M_BERD_14_13"):
			case joaat("DLC_MP_HEIST_M_BERD_14_14"):
			case joaat("DLC_MP_HEIST_M_BERD_14_15"):
			case joaat("DLC_MP_HEIST_M_BERD_14_16"):
			case joaat("DLC_MP_HEIST_M_BERD_14_17"):
			case joaat("DLC_MP_HEIST_M_BERD_14_18"):
			case joaat("DLC_MP_HEIST_M_BERD_14_19"):
			case joaat("DLC_MP_HEIST_M_BERD_14_20"):
			case joaat("DLC_MP_HEIST_M_BERD_14_21"):
			case joaat("DLC_MP_HEIST_M_BERD_14_22"):
			case joaat("DLC_MP_HEIST_M_BERD_14_23"):
			case joaat("DLC_MP_HEIST_M_BERD_14_24"):
			case joaat("DLC_MP_HEIST_M_BERD_14_25"):
			case joaat("DLC_MP_IND_M_BERD_4_0"):
			case joaat("DLC_MP_IND_M_BERD_4_1"):
			case joaat("DLC_MP_IND_M_BERD_3_0"):
			case joaat("DLC_MP_IND_M_BERD_3_1"):
				bVar10 = true;
				break;
		}
	}
	else
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("HEIST_DRAW_15"), 0))
		{
			bVar10 = true;
		}
		switch (iVar8)
		{
			case joaat("DLC_MP_HEIST_F_BERD_23_0"):
			case joaat("DLC_MP_HEIST_F_BERD_23_1"):
			case joaat("DLC_MP_HEIST_F_BERD_23_2"):
			case joaat("DLC_MP_HEIST_F_BERD_23_3"):
			case joaat("DLC_MP_HEIST_F_BERD_23_4"):
			case joaat("DLC_MP_HEIST_F_BERD_23_5"):
			case joaat("DLC_MP_HEIST_F_BERD_23_6"):
			case joaat("DLC_MP_HEIST_F_BERD_23_7"):
			case joaat("DLC_MP_HEIST_F_BERD_23_8"):
			case joaat("DLC_MP_HEIST_F_BERD_23_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_0"):
			case joaat("DLC_MP_HEIST_F_BERD_22_1"):
			case joaat("DLC_MP_HEIST_F_BERD_22_2"):
			case joaat("DLC_MP_HEIST_F_BERD_22_3"):
			case joaat("DLC_MP_HEIST_F_BERD_22_4"):
			case joaat("DLC_MP_HEIST_F_BERD_22_5"):
			case joaat("DLC_MP_HEIST_F_BERD_22_6"):
			case joaat("DLC_MP_HEIST_F_BERD_22_7"):
			case joaat("DLC_MP_HEIST_F_BERD_22_8"):
			case joaat("DLC_MP_HEIST_F_BERD_22_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_10"):
			case joaat("DLC_MP_HEIST_F_BERD_22_11"):
			case joaat("DLC_MP_HEIST_F_BERD_22_12"):
			case joaat("DLC_MP_HEIST_F_BERD_22_13"):
			case joaat("DLC_MP_HEIST_F_BERD_22_14"):
			case joaat("DLC_MP_HEIST_F_BERD_22_15"):
			case joaat("DLC_MP_HEIST_F_BERD_22_16"):
			case joaat("DLC_MP_HEIST_F_BERD_22_17"):
			case joaat("DLC_MP_HEIST_F_BERD_22_18"):
			case joaat("DLC_MP_HEIST_F_BERD_22_19"):
			case joaat("DLC_MP_HEIST_F_BERD_22_20"):
			case joaat("DLC_MP_HEIST_F_BERD_22_21"):
			case joaat("DLC_MP_HEIST_F_BERD_21_0"):
			case joaat("DLC_MP_HEIST_F_BERD_21_1"):
			case joaat("DLC_MP_HEIST_F_BERD_21_2"):
			case joaat("DLC_MP_HEIST_F_BERD_21_3"):
			case joaat("DLC_MP_HEIST_F_BERD_21_4"):
			case joaat("DLC_MP_HEIST_F_BERD_21_5"):
			case joaat("DLC_MP_HEIST_F_BERD_21_6"):
			case joaat("DLC_MP_HEIST_F_BERD_21_7"):
			case joaat("DLC_MP_HEIST_F_BERD_21_8"):
			case joaat("DLC_MP_HEIST_F_BERD_20_0"):
			case joaat("DLC_MP_HEIST_F_BERD_20_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_0"):
			case joaat("DLC_MP_HEIST_F_BERD_19_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_2"):
			case joaat("DLC_MP_HEIST_F_BERD_19_3"):
			case joaat("DLC_MP_HEIST_F_BERD_19_4"):
			case joaat("DLC_MP_HEIST_F_BERD_19_5"):
			case joaat("DLC_MP_HEIST_F_BERD_19_6"):
			case joaat("DLC_MP_HEIST_F_BERD_19_7"):
			case joaat("DLC_MP_HEIST_F_BERD_19_8"):
			case joaat("DLC_MP_HEIST_F_BERD_19_9"):
			case joaat("DLC_MP_HEIST_F_BERD_19_10"):
			case joaat("DLC_MP_HEIST_F_BERD_18_0"):
			case joaat("DLC_MP_HEIST_F_BERD_18_1"):
			case joaat("DLC_MP_HEIST_F_BERD_18_2"):
			case joaat("DLC_MP_HEIST_F_BERD_18_3"):
			case joaat("DLC_MP_HEIST_F_BERD_18_4"):
			case joaat("DLC_MP_HEIST_F_BERD_18_5"):
			case joaat("DLC_MP_HEIST_F_BERD_18_6"):
			case joaat("DLC_MP_HEIST_F_BERD_18_7"):
			case joaat("DLC_MP_HEIST_F_BERD_18_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_0"):
			case joaat("DLC_MP_HEIST_F_BERD_17_1"):
			case joaat("DLC_MP_HEIST_F_BERD_17_2"):
			case joaat("DLC_MP_HEIST_F_BERD_17_3"):
			case joaat("DLC_MP_HEIST_F_BERD_17_4"):
			case joaat("DLC_MP_HEIST_F_BERD_17_5"):
			case joaat("DLC_MP_HEIST_F_BERD_17_6"):
			case joaat("DLC_MP_HEIST_F_BERD_17_7"):
			case joaat("DLC_MP_HEIST_F_BERD_17_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_9"):
			case joaat("DLC_MP_HEIST_F_BERD_17_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_0"):
			case joaat("DLC_MP_HEIST_F_BERD_14_1"):
			case joaat("DLC_MP_HEIST_F_BERD_14_2"):
			case joaat("DLC_MP_HEIST_F_BERD_14_3"):
			case joaat("DLC_MP_HEIST_F_BERD_14_4"):
			case joaat("DLC_MP_HEIST_F_BERD_14_5"):
			case joaat("DLC_MP_HEIST_F_BERD_14_6"):
			case joaat("DLC_MP_HEIST_F_BERD_14_7"):
			case joaat("DLC_MP_HEIST_F_BERD_14_8"):
			case joaat("DLC_MP_HEIST_F_BERD_14_9"):
			case joaat("DLC_MP_HEIST_F_BERD_14_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_11"):
			case joaat("DLC_MP_HEIST_F_BERD_14_12"):
			case joaat("DLC_MP_HEIST_F_BERD_14_13"):
			case joaat("DLC_MP_HEIST_F_BERD_14_14"):
			case joaat("DLC_MP_HEIST_F_BERD_14_15"):
			case joaat("DLC_MP_HEIST_F_BERD_14_16"):
			case joaat("DLC_MP_HEIST_F_BERD_14_17"):
			case joaat("DLC_MP_HEIST_F_BERD_14_18"):
			case joaat("DLC_MP_HEIST_F_BERD_14_19"):
			case joaat("DLC_MP_HEIST_F_BERD_14_20"):
			case joaat("DLC_MP_HEIST_F_BERD_14_21"):
			case joaat("DLC_MP_HEIST_F_BERD_14_22"):
			case joaat("DLC_MP_HEIST_F_BERD_14_23"):
			case joaat("DLC_MP_HEIST_F_BERD_14_24"):
			case joaat("DLC_MP_HEIST_F_BERD_14_25"):
			case joaat("DLC_MP_HEIST_F_BERD_13_0"):
			case joaat("DLC_MP_HEIST_F_BERD_13_1"):
			case joaat("DLC_MP_HEIST_F_BERD_13_2"):
			case joaat("DLC_MP_HEIST_F_BERD_13_3"):
			case joaat("DLC_MP_HEIST_F_BERD_12_0"):
			case joaat("DLC_MP_HEIST_F_BERD_12_1"):
			case joaat("DLC_MP_HEIST_F_BERD_12_2"):
			case joaat("DLC_MP_HEIST_F_BERD_12_3"):
			case joaat("DLC_MP_HEIST_F_BERD_7_0"):
			case joaat("DLC_MP_HEIST_F_BERD_7_1"):
			case joaat("DLC_MP_HEIST_F_BERD_5_0"):
			case joaat("DLC_MP_HEIST_F_BERD_5_1"):
			case joaat("DLC_MP_HEIST_F_BERD_4_0"):
			case joaat("DLC_MP_HEIST_F_BERD_4_1"):
			case joaat("DLC_MP_HEIST_F_BERD_2_0"):
			case joaat("DLC_MP_HEIST_F_BERD_0_0"):
			case -840010097:
			case joaat("DLC_MP_LTS_F_BERD_0_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_1"):
			case joaat("DLC_MP_LTS_F_BERD_0_2"):
			case joaat("DLC_MP_LTS_F_BERD_0_3"):
			case joaat("DLC_MP_LTS_F_BERD_0_4"):
			case joaat("DLC_MP_IND_F_BERD_4_0"):
			case joaat("DLC_MP_IND_F_BERD_4_1"):
			case joaat("DLC_MP_IND_F_BERD_3_0"):
			case joaat("DLC_MP_IND_F_BERD_3_1"):
				bVar10 = true;
				break;
			}
	}
	if (bVar10)
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_UP"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_DOWN"), 0))
		{
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				iVar5 = 15;
				iVar6 = 0;
			}
			else
			{
				iVar5 = 14;
				iVar6 = 0;
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("HAZ_MASK"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_DOWN"), 0))
		{
			iVar5++;
		}
		else
		{
			iVar5 = func_507(iParam0, 1);
			iVar6 = iVar2;
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_UP"), 0))
	{
		iVar5 = (iVar5 - 1);
	}
	else
	{
		iVar5 = func_507(iParam0, 0);
		iVar6 = iVar2;
	}
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
}

int func_507(int iParam0, bool bParam1)//Position - 0x3B866
{
	struct<4> Var0;
	bool bVar1;
	
	bVar1 = ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01");
	Var0.f_3 = -1;
	if (bVar1)
	{
		if (bParam1)
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var0);
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var0);
		}
	}
	else if (bParam1)
	{
		FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var0);
	}
	else
	{
		FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var0);
	}
	return Var0.f_3;
}

int func_508(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x3B8C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_483(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_491(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_509(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x3B972
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_483(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_491(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_510(int iParam0, int iParam1, int iParam2)//Position - 0x3BA1A
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iParam0, iParam2, 4, 4), joaat("DRESS_LEGS"), 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_511(int iParam0, int iParam1, int iParam2)//Position - 0x3BA66
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_483(iParam0, iParam2, 11, 4), joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_512(int iParam0, int iParam1)//Position - 0x3BAAF
{
	if (func_514())
	{
		if (iParam1 > 46)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
		}
	}
	else if (func_513())
	{
		if (iParam1 > 0)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
		}
	}
}

bool func_513()//Position - 0x3BB26
{
	return DLC::IS_DLC_PRESENT(1428761799);
}

bool func_514()//Position - 0x3BB37
{
	return DLC::IS_DLC_PRESENT(-1005876368);
}

int func_515(int iParam0, int iParam1)//Position - 0x3BB48
{
	return 0;
}

int func_516(int iParam0, int iParam1)//Position - 0x3BB51
{
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

int func_517(int iParam0, int iParam1)//Position - 0x3BB8F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("OVER_JACKET"), 8))
	{
		if (iParam1 > 46)
		{
			return 51;
		}
		else if (iParam1 > 26)
		{
			return 50;
		}
		else if (iParam1 > 0)
		{
			return 49;
		}
		else
		{
			return 48;
		}
	}
	iVar4 = 0;
	if (iParam1 > 46)
	{
		iVar4 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar4 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar4 = 9;
	}
	else
	{
		iVar4 = 0;
	}
	if (iVar0 > 15)
	{
		iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_519(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar4);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_578(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar4);
						break;
					
					default:
						iVar0 = func_578(iVar5);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_SWEAT"), 0))
		{
			return (6 + iVar4);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_518(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_578(iVar5);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1086258388, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (6 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (1 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else
		{
			iVar0 = func_578(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar4);
				}
				else
				{
					return (6 + iVar4);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (5 + iVar4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar4);
				}
				else
				{
					return (5 + iVar4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 9:
				return (2 + iVar4);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{