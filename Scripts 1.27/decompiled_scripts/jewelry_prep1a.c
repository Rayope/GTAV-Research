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
	struct<110> Local_27[4];
	struct<94> Local_28 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = -1;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = -1;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<8> Local_45[5];
	int iLocal_46[1] = { 0 };
	struct<4> Local_47 = { 0, 0, 0, 0 } ;
	char cLocal_48[64] = "";
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	char cLocal_58[24] = "";
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 30;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
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
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 10;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 10;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
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
	var uLocal_342 = 20;
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
	var uLocal_443 = 20;
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
	var uLocal_544 = 30;
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
	var uLocal_612 = 0;
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
	var uLocal_725 = 5;
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
	var uLocal_756 = 7;
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
	var uLocal_806 = 5;
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
	var uLocal_832 = 3;
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
	var uLocal_848 = 15;
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
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 10;
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
	var uLocal_962 = 0;
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
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 5;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 5;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 3;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 1092616192;
	var uLocal_1057 = 1101004800;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 3;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	struct<8> Local_1074[5];
	struct<32> Local_1075[20];
	char cLocal_1076[32] = "";
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 16;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	bool bLocal_1246 = 0;
	int iLocal_1247 = 0;
	int iLocal_1248 = 0;
	var uLocal_1249 = 0;
	int iLocal_1250 = 0;
	int iLocal_1251 = 0;
	int iLocal_1252 = 0;
	struct<2> Local_1253 = { 0, 0 } ;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	char cLocal_1256[16] = "";
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	int iLocal_1259 = 0;
	float fLocal_1260 = 0f;
	int iLocal_1261 = 0;
	int iLocal_1262 = 0;
	int iLocal_1263 = 0;
	int iLocal_1264 = 0;
	int iLocal_1265 = 0;
	int iLocal_1266 = 0;
	char cLocal_1267[16] = "";
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	int iLocal_1270 = 0;
	int iLocal_1271 = 0;
	bool bLocal_1272 = 0;
	int iLocal_1273 = 0;
	int iLocal_1274 = 0;
	int iLocal_1275 = 0;
	int iLocal_1276 = 0;
	struct<2> Local_1277 = { 0, 0 } ;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	struct<2> Local_1280 = { 0, 0 } ;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	int iLocal_1283 = 0;
	bool bLocal_1284 = 0;
	int iLocal_1285 = 0;
	int iLocal_1286 = 0;
	int iLocal_1287 = 0;
	bool bLocal_1288 = 0;
	int iLocal_1289 = 0;
	int iLocal_1290 = 0;
	int iLocal_1291 = 0;
	int iLocal_1292 = 0;
	int iLocal_1293 = 0;
	int iLocal_1294 = 0;
	int iLocal_1295 = 0;
	int iLocal_1296 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
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
	StringCopy(&Local_47, "JHP1ADS", 16);
	StringCopy(&cLocal_48, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	Local_57 = { 154.9478f, -3092.523f, 4.911984f };
	StringCopy(&cLocal_58, "jhp1a_sec_arrive", 24);
	iLocal_62 = 0;
	iLocal_68 = 6;
	iLocal_1247 = -1;
	iLocal_1251 = -1;
	iLocal_1252 = -1;
	StringCopy(&Local_1253, "", 16);
	StringCopy(&cLocal_1256, "", 16);
	fLocal_1260 = 1E+08f;
	iLocal_1263 = 1;
	iLocal_1266 = -1;
	StringCopy(&cLocal_1267, "", 16);
	iLocal_1270 = -1;
	iLocal_1271 = 1;
	iLocal_1275 = -1;
	iLocal_1276 = -1;
	StringCopy(&Local_1277, "", 16);
	StringCopy(&Local_1280, "", 16);
	iLocal_1283 = 1;
	iLocal_1285 = 1;
	iLocal_1289 = -1;
	iLocal_1291 = -1;
	iLocal_1292 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_266(6);
	}
	MISC::SET_MISSION_FLAG(1);
	func_259();
	func_218();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_JewelStoreJobPrep1A", 0);
		if (bLocal_67)
		{
			func_216();
		}
		func_213(&uLocal_69);
		func_176();
		if (!bLocal_65)
		{
			func_174();
			func_163();
			func_162(&Local_1074);
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x140
{
	switch (iLocal_62)
	{
		case 0:
			if (func_25())
			{
				func_24(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0x172
{
	int iVar0;
	
	if ((iLocal_1292 != -1 && ENTITY::DOES_ENTITY_EXIST(Local_45[iLocal_1292 /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iLocal_1292 /*8*/], 0))
	{
		iVar0 = ENTITY::GET_ENTITY_HEALTH(Local_45[iLocal_1292 /*8*/]);
		func_23(Local_45[iLocal_1292 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_15308 = 1000;
	}
	else
	{
		Global_15308 = iVar0;
	}
	if (!func_22(&(Local_1074[3 /*8*/])))
	{
		func_21(699);
	}
	func_8(0);
	if (func_7(88))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(bool bParam0, int iParam1)//Position - 0x219
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
		if ((func_6(0) && Global_10B8B.f_1 == 1) && func_5(Global_10B8B))
		{
		}
		else
		{
			Global_D5DE = 1;
		}
	}
	if (Global_17C49.f_1CAD || func_6(0))
	{
		iVar0 = func_4();
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

int func_4()//Position - 0x2EF
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

int func_5(int iParam0)//Position - 0x324
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

bool func_6(bool bParam0)//Position - 0x362
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

int func_7(int iParam0)//Position - 0x38D
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_148[iParam0 /*6*/];
}

void func_8(bool bParam0)//Position - 0x3B9
{
	int iVar0;
	int iVar1;
	
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	if (bParam0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	func_18(&Local_1074);
	func_13(&uLocal_1049, 1, 0);
	bLocal_1246 = false;
	iLocal_1247 = -1;
	iLocal_1286 = 0;
	iLocal_1287 = 0;
	bLocal_1288 = false;
	iLocal_1289 = -1;
	iLocal_1291 = -1;
	iLocal_1292 = -1;
	iLocal_1293 = 0;
	iLocal_1294 = 0;
	iLocal_1290 = 0;
	if (bParam0)
	{
		func_11();
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		MISC::CLEAR_AREA_OF_PEDS(158.78f, -3100.44f, 6.0019f, 100f, 0);
		MISC::CLEAR_AREA_OF_COPS(158.78f, -3100.44f, 6.0019f, 100f, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(158.78f, -3100.44f, 6.0019f, 100f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(158.78f, -3100.44f, 6.0019f, 100f, 0, 0, 0, 0, 0);
		MISC::CLEAR_AREA_OF_PROJECTILES(158.78f, -3100.44f, 6.0019f, 100f, 0);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_46)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46[iVar0]))
		{
			if (bParam0)
			{
				OBJECT::DELETE_OBJECT(&(iLocal_46[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_46[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_27)
	{
		func_10(&(Local_27[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_28, bParam0);
	iVar0 = 0;
	while (iVar0 < Local_45)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					PED::DELETE_PED(&(Local_45[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_45[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_45[iVar0 /*8*/]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_45[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (AUDIO::IS_ALARM_PLAYING(&cLocal_48))
	{
		AUDIO::STOP_ALARM(&cLocal_48, bParam0);
	}
	if (iLocal_1296 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1296, 0);
	}
	func_9();
}

void func_9()//Position - 0x60F
{
	Global_150CE = 0;
}

void func_10(var uParam0, bool bParam1)//Position - 0x61C
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (bParam1)
		{
			PED::DELETE_PED(uParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_27 = 0;
	uParam0->f_29 = 0;
	uParam0->f_5D = 1;
	uParam0->f_66 = 0;
	uParam0->f_2F = 0;
	uParam0->f_2E = 0;
	uParam0->f_30 = 0;
	uParam0->f_25 = -1;
	uParam0->f_67 = -1;
	uParam0->f_28 = 0;
	uParam0->f_5C = -1;
	uParam0->f_2B = { 0f, 0f, 0f };
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_5B = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_69))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_69, 1, 1);
		}
		if (bParam1)
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_69));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_69));
		}
	}
	uParam0->f_6A = -1;
	uParam0->f_6B = 0;
	uParam0->f_6D = 0;
	uParam0->f_68 = 0;
}

void func_11()//Position - 0x6EB
{
	Global_38DE = 0;
	func_12();
}

void func_12()//Position - 0x6FB
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_13(var uParam0, bool bParam1, bool bParam2)//Position - 0x71C
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(uParam0->f_D, 30))
	{
		bParam1 = true;
	}
	func_17(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
		}
		func_16(iVar0, uParam0);
		func_15(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			MISC::CLEAR_BIT(&(uParam0->f_D), iVar0);
			MISC::CLEAR_BIT(&(uParam0->f_E), iVar0);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_C = 0;
	uParam0->f_F = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_11[iVar0], 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_11[iVar0], 1);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_11[iVar0], 32, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_11[iVar0], 305, 0);
			}
			PED::SET_PED_CONFIG_FLAG(uParam0->f_11[iVar0], 268, 0);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()) && uParam0->f_11[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
				}
			}
			if (!MISC::IS_BIT_SET(uParam0->f_D, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_11[iVar0], 0, -1, 0);
			}
			uParam0->f_11[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		}
	}
	uParam0->f_15 = 0;
}

var func_14()//Position - 0x8CD
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_15(int iParam0, var uParam1)//Position - 0x8DD
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(uParam1->f_D), 17);
			break;
		
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_D), 18);
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_D), 19);
			break;
	}
}

void func_16(int iParam0, var uParam1)//Position - 0x925
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(uParam1->f_D), 14);
			break;
		
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_D), 15);
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_D), 16);
			break;
	}
}

void func_17(var uParam0)//Position - 0x96D
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_5));
	}
}

void func_18(var uParam0)//Position - 0x988
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_19(var uParam0)//Position - 0x9AE
{
	if (!func_20(uParam0))
	{
		*uParam0 = 0;
	}
}

int func_20(var uParam0)//Position - 0x9C4
{
	if (*uParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)//Position - 0x9DB
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

int func_22(var uParam0)//Position - 0xA4C
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0, int iParam1)//Position - 0xA7A
{
	int iVar0;
	
	Global_D5EB = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_1051D)
	{
		if (iParam1 == -1 || Global_1051E[iVar0 /*9*/] == iParam1)
		{
			if (Global_1051E[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_1051E[iVar0 /*9*/].f_6 = iParam0;
				Global_1051E[iVar0 /*9*/].f_7 = 1;
				Global_1051E[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)//Position - 0xAE5
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_63 = 0;
		bLocal_64 = false;
		iLocal_62 = iParam0;
	}
}

int func_25()//Position - 0xB03
{
	bool bVar0;
	
	if (!bLocal_64)
	{
		func_161(&uLocal_69, "SCRIPT\JWL_HA_RAID_STORE");
		func_160(&uLocal_69, joaat("s_m_m_security_01"));
		func_159(&(Local_1074[1 /*8*/]), 0, 0, 1);
		func_159(&(Local_1074[0 /*8*/]), 0, 0, 1);
		func_159(&(Local_1074[4 /*8*/]), 0, 0, 1);
		func_105(0f, 0f, 0f, 0f, 1, func_155());
		Global_15308 = 1000;
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		func_104("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_64 = true;
	}
	if (bLocal_64)
	{
		switch (iLocal_63)
		{
			case 0:
				if (func_99(1) == 0)
				{
					func_13(&uLocal_1049, 1, 0);
					func_23(0, -1);
					func_98(0, -1);
				}
				else if ((func_97() && ENTITY::DOES_ENTITY_EXIST(Local_45[func_96() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[func_96() /*8*/], 0))
				{
					VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
					if (iLocal_1292 != func_96())
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
						func_23(Local_45[func_96() /*8*/], -1);
						func_98(Local_45[func_96() /*8*/], -1);
						iLocal_1292 = func_96();
					}
					if (func_94(&uLocal_1049, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_45[func_96() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_63++;
					}
				}
				else if (func_93())
				{
					VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
					func_49(&uLocal_1049, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_1293, "", "", "", 1, 0, 1, -1);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_45[func_48() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0))
					{
						iLocal_63++;
					}
				}
				else
				{
					func_17(&uLocal_1049);
					func_23(0, -1);
					func_98(0, -1);
				}
				break;
			
			case 1:
				if (func_97())
				{
					if (func_47(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 5f, 1, 1056964608, 0, 1))
					{
						bVar0 = true;
					}
				}
				else if (func_93())
				{
					if (func_47(iLocal_1293, 5f, 1, 1056964608, 0, 1))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (func_7(88))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
						ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
						func_46(1);
						func_45(1, 0);
						iLocal_63 = 1000;
					}
					else
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
						iLocal_63++;
					}
					if (func_97())
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_45[iLocal_1292 /*8*/], 0);
					}
					else if (func_93())
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_45[func_48() /*8*/], 0);
						VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_45[func_48() /*8*/], 1);
						VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Local_45[func_48() /*8*/]);
					}
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
				break;
			
			case 1000:
				func_45(1, 0);
				if (!func_43())
				{
					func_41();
				}
				else
				{
					func_40(&uLocal_1081, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_1081, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_63++;
					}
				}
				break;
			
			case 1001:
				func_45(1, 0);
				if (func_27())
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
					iLocal_63++;
				}
				break;
			
			case 1002:
				func_45(1, 0);
				if (!func_27())
				{
					func_26();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_26()//Position - 0xEB3
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_156B8[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_156B8[iVar0]))
			{
				ENTITY::SET_ENTITY_PROOFS(Global_156B8[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_156B8[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_8861 != 0 && Global_8861 != 3) && Global_8861 != 2)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
}

int func_27()//Position - 0xF64
{
	if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0xF8D
{
	func_39(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2)//Position - 0xFEC
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
					func_38();
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
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_36();
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
				func_34();
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
				if (func_33())
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
			if (func_32())
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
			func_31();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_30();
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
		func_38();
	}
	return 0;
}

void func_30()//Position - 0x12B8
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

void func_31()//Position - 0x12E9
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

int func_32()//Position - 0x137E
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_33()//Position - 0x13A5
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

void func_34()//Position - 0x143E
{
	if (func_35(14))
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
		Global_3839 = func_155();
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

bool func_35(int iParam0)//Position - 0x14DF
{
	return Global_8861 == iParam0;
}

void func_36()//Position - 0x14ED
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

bool func_37(int iParam0, int iParam1)//Position - 0x1544
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

void func_38()//Position - 0x157F
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

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x15D6
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

void func_40(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x162C
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

void func_41()//Position - 0x16C7
{
	Global_38DE = 0;
	func_42();
}

void func_42()//Position - 0x16D7
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

int func_43()//Position - 0x16FB
{
	if (func_44())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 0;
		}
	}
	return 1;
}

int func_44()//Position - 0x1721
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_45(bool bParam0, bool bParam1)//Position - 0x1743
{
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam1)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

void func_46(bool bParam0)//Position - 0x17FC
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		if (bParam0)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
		}
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
}

int func_47(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x1877
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

int func_48()//Position - 0x19F9
{
	int iVar0;
	
	if (func_93())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iVar0 /*8*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1293, Local_45[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_49(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x1A50
{
	return func_50(uParam0, Param1, Param2, func_92(), func_92(), iParam3, 5, 0, 0, 0, iParam4, sParam5, func_91(), func_91(), func_91(), func_91(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_50(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)//Position - 0x1A9F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_11[0] = iParam7;
	uParam0->f_11[1] = iParam8;
	uParam0->f_11[2] = iParam9;
	uParam0->f_10 = iParam7;
	func_90(uParam0);
	func_89(uParam0);
	func_88();
	if (func_72(uParam0, uParam0->f_11[0], uParam0->f_11[1], uParam0->f_11[2], sParam12, sParam13, sParam14, sParam15, uParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_71(sParam12);
		func_71(sParam13);
		func_71(sParam14);
		func_71(sParam15);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))
				{
					MISC::SET_BIT(&(uParam0->f_D), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_D, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_D), 4);
					}
					if (MISC::IS_BIT_SET(uParam0->f_D, 23))
					{
						MISC::CLEAR_BIT(&(uParam0->f_D), 23);
					}
					MISC::SET_BIT(&(uParam0->f_D), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_69(uParam0, iParam21))
				{
					MISC::SET_BIT(&(uParam0->f_D), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_D, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_D), 4);
					}
					MISC::SET_BIT(&(uParam0->f_D), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_71(sParam16);
				func_71(sParam19);
				func_71("MORE_SEATS");
				if (bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						func_71(sParam11);
					}
					if (HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(uParam0);
					}
					if ((!func_66(uParam0, 1) && !func_65(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_64(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_11[0]))
							{
								func_62(uParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_D), 0);
						MISC::CLEAR_BIT(&(uParam0->f_D), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_D, 0))
					{
						func_71("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_D), 0);
						MISC::SET_BIT(&(uParam0->f_D), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_D, 1))
					{
						if (!func_66(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_11[0]))
							{
								func_62(uParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_D), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*uParam0))
						{
							HUD::REMOVE_BLIP(uParam0);
						}
						uParam0->f_5 = func_61(Var3, 0);
						if (!iParam23 == -1)
						{
							HUD::SET_BLIP_SPRITE(uParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_60(uParam0->f_5, uParam0);
						}
					}
					else if (!func_59(Var3, HUD::GET_BLIP_COORDS(uParam0->f_5), 0.1f))
					{
						HUD::SET_BLIP_COORDS(uParam0->f_5, Var3);
						if (bParam27)
						{
							func_60(uParam0->f_5, uParam0);
						}
					}
					if (!func_66(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_D, 2))
						{
							func_64(uParam0, sParam11, 0);
							MISC::SET_BIT(&(uParam0->f_D), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (MISC::IS_BIT_SET(uParam0->f_D, 13))
						{
							iParam5 = 0;
						}
					}
					bVar1 = false;
					iVar4 = 0;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						iVar4 = 1;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, iParam5, iVar4, iVar5);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param3, Param4, fParam28, 0, iVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, iParam5, iVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_11[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_11[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_11[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar2], func_14()) || !func_57(uParam0->f_11[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_54(uParam0))
							{
								func_71(sParam11);
								func_71(sParam16);
								func_71(sParam12);
								func_71(sParam13);
								func_71(sParam14);
								func_71(sParam15);
								func_71("LOSE_WANTED");
								func_71("MORE_SEATS");
								func_71(sParam19);
								func_13(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam10))
			{
				if ((bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!MISC::IS_BIT_SET(uParam0->f_D, 9) && !MISC::IS_BIT_SET(uParam0->f_D, 22)))
				{
					func_71(sParam16);
					func_71(sParam19);
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5) || HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						HUD::REMOVE_BLIP(uParam0);
						func_71(sParam11);
					}
					if ((!func_66(uParam0, 1) && !func_65(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_64(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_11[0]))
							{
								func_62(uParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_D), 0);
						MISC::CLEAR_BIT(&(uParam0->f_D), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_D, 0))
					{
						func_71("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_D), 0);
						MISC::SET_BIT(&(uParam0->f_D), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_D, 1))
					{
						if (!func_66(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_11[0]))
							{
								func_62(uParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_D), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(*uParam0))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_5));
								func_71(sParam11);
							}
							*uParam0 = func_51(iParam10, 0, 0);
							HUD::SET_BLIP_DISPLAY(*uParam0, 2);
							if (!MISC::IS_BIT_SET(uParam0->f_D, 4))
							{
								func_60(*uParam0, uParam0);
							}
						}
						if (!func_66(uParam0, 2))
						{
							if (!MISC::IS_BIT_SET(uParam0->f_D, 3))
							{
								func_64(uParam0, sParam16, 0);
								MISC::SET_BIT(&(uParam0->f_D), 3);
								MISC::CLEAR_BIT(&(uParam0->f_D), 4);
							}
							else if (MISC::IS_BIT_SET(uParam0->f_D, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam19))
								{
									if (!MISC::IS_BIT_SET(uParam0->f_D, 4))
									{
										func_64(uParam0, sParam19, 0);
										MISC::SET_BIT(&(uParam0->f_D), 4);
									}
								}
								else if (!MISC::IS_BIT_SET(uParam0->f_D, 4))
								{
									func_64(uParam0, sParam16, 0);
									MISC::SET_BIT(&(uParam0->f_D), 4);
								}
								if (!MISC::IS_BIT_SET(uParam0->f_D, 23))
								{
									if (!PED::IS_PED_INJURED(uParam0->f_11[0]))
									{
										func_62(uParam0->f_11[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(uParam0->f_D), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_5));
					func_71(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_66(uParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_D, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(uParam0->f_11[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
									if (!PED::IS_PED_INJURED(uParam0->f_11[iVar7]))
									{
										func_62(uParam0->f_11[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_64(uParam0, "MORE_SEATS", 0);
									MISC::SET_BIT(&(uParam0->f_D), 13);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_D, 3))
							{
								func_64(uParam0, sParam16, 0);
								MISC::SET_BIT(&(uParam0->f_D), 3);
								MISC::CLEAR_BIT(&(uParam0->f_D), 4);
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_D, 4))
							{
								if (MISC::IS_BIT_SET(uParam0->f_D, 9))
								{
									func_64(uParam0, sParam19, 0);
									MISC::SET_BIT(&(uParam0->f_D), 4);
								}
							}
						}
					}
					else if (!func_66(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_D, 3))
						{
							func_64(uParam0, sParam16, 0);
							MISC::SET_BIT(&(uParam0->f_D), 3);
							MISC::CLEAR_BIT(&(uParam0->f_D), 4);
						}
						else if (MISC::IS_BIT_SET(uParam0->f_D, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam19))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_D, 4))
								{
									func_64(uParam0, sParam19, 0);
									MISC::SET_BIT(&(uParam0->f_D), 4);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_D, 4))
							{
								func_64(uParam0, sParam16, 0);
								MISC::SET_BIT(&(uParam0->f_D), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(uParam0->f_D, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_D), 0);
		}
		func_71(sParam11);
		func_71(sParam16);
		func_71(sParam19);
		func_71(sParam16);
		func_71("LOSE_WANTED");
		if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*uParam0))
		{
			HUD::REMOVE_BLIP(uParam0);
		}
	}
	MISC::CLEAR_BIT(&(uParam0->f_D), 11);
	MISC::CLEAR_BIT(&(uParam0->f_D), 12);
	return 0;
}

int func_51(int iParam0, bool bParam1, bool bParam2)//Position - 0x23F7
{
	return func_52(iParam0, !bParam1, bParam2);
}

int func_52(int iParam0, bool bParam1, bool bParam2)//Position - 0x240A
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_53(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_53(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_53(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_53(bool bParam0, float fParam1, float fParam2)//Position - 0x24AE
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_54(var uParam0)//Position - 0x24C5
{
	if (MISC::IS_BIT_SET(uParam0->f_D, 12))
	{
		if (func_56(PLAYER::PLAYER_PED_ID()))
		{
			if (func_55(1, 0, 1) || MISC::IS_BIT_SET(uParam0->f_D, 7))
			{
				return 1;
			}
		}
	}
	else if (func_55(1, 0, 1) || MISC::IS_BIT_SET(uParam0->f_D, 7))
	{
		return 1;
	}
	return 0;
}

int func_55(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2523
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0)//Position - 0x2603
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_57(int iParam0, int iParam1)//Position - 0x263A
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && iParam1)
		{
			if (func_58(PLAYER::PLAYER_PED_ID(), iParam0))
			{
				PED::SET_GROUP_SEPARATION_RANGE(func_14(), 50f);
				return 1;
			}
		}
		else if (PED::IS_PED_GROUP_MEMBER(iParam0, func_14()))
		{
			PED::SET_GROUP_SEPARATION_RANGE(func_14(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0, int iParam1)//Position - 0x26A5
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_59(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x26ED
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

void func_60(var uParam0, var uParam1)//Position - 0x2739
{
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if (HUD::DOES_BLIP_EXIST(uParam1->f_6))
		{
			HUD::SET_BLIP_ROUTE(uParam1->f_6, 0);
		}
		HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		uParam1->f_6 = uParam0;
		HUD::SET_BLIP_ROUTE(uParam0, 1);
	}
}

var func_61(struct<3> Param0, int iParam1)//Position - 0x2774
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_53(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

void func_62(var uParam0, char* sParam1, int iParam2)//Position - 0x27A0
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_63(iParam2), 1);
}

int func_63(int iParam0)//Position - 0x27B7
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

void func_64(var uParam0, char* sParam1, bool bParam2)//Position - 0x29AC
{
	if (!bParam2)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_104(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_A = MISC::GET_GAME_TIMER();
}

int func_65(var uParam0)//Position - 0x29E3
{
	if (!PED::IS_PED_INJURED(uParam0->f_10))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_10))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(var uParam0, int iParam1)//Position - 0x2A07
{
	if (iParam1 != 1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
		if (func_68(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_44() && !func_67())
		{
			return 1;
		}
	}
	return 0;
}

int func_67()//Position - 0x2A5F
{
	if (Global_413F == 1)
	{
		return 1;
	}
	return 0;
}

int func_68(var uParam0)//Position - 0x2A76
{
	int iVar0;
	int iVar1;
	
	iVar1 = MISC::GET_GAME_TIMER();
	iVar0 = (iVar1 - uParam0->f_A);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_69(var uParam0, int iParam1)//Position - 0x2A99
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_70(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0, var uParam1, int iParam2)//Position - 0x2ACA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_71(char* sParam0)//Position - 0x2B5E
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		HUD::CLEAR_THIS_PRINT(sParam0);
	}
}

int func_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x2B76
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<3> Var19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_11[0] = uParam1;
	uParam0->f_11[1] = uParam2;
	uParam0->f_11[2] = uParam3;
	uParam0->f_10 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
		{
			iVar3++;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_D, 29) && !MISC::IS_BIT_SET(uParam0->f_D, 28))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
				{
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_11[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					MISC::SET_BIT(&(uParam0->f_D), 28);
				}
			}
		}
		else if (!MISC::IS_BIT_SET(uParam0->f_D, 29) && MISC::IS_BIT_SET(uParam0->f_D, 28))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_11[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				MISC::CLEAR_BIT(&(uParam0->f_D), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(uParam0->f_D, 26))
	{
		bVar14 = false;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0, iVar16);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar15, 0))
			{
				uParam0->f_15 = iVar15;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_15, 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_15, 1)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17)
					{
						if (func_70(uParam0->f_15, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_11[iVar0], 1f);
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], -1794415470) == 7 && !func_87(uParam0->f_11[iVar0], uParam0->f_15))
									{
										if (!PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_11[iVar0]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_11[iVar0], 1);
											TASK::TASK_ENTER_VEHICLE(uParam0->f_11[iVar0], uParam0->f_15, 60000, iVar0, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_11[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			MISC::CLEAR_BIT(&(uParam0->f_D), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_11[iVar0]) && !uParam0->f_F)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_11[iVar0]);
					}
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()))
					{
						if (func_85(uParam0, uParam0->f_11[iVar0], uParam8, 1))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_11[iVar0], func_14());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_D, 26))
	{
		if ((!func_84(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar10 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, 0))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_D, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_66(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar17);
						if (!PED::IS_PED_INJURED(uParam0->f_11[iVar18]))
						{
							func_62(uParam0->f_11[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_64(uParam0, "MORE_SEATS", 0);
						MISC::SET_BIT(&(uParam0->f_D), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			MISC::CLEAR_BIT(&(uParam0->f_D), 13);
			func_71("MORE_SEATS");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(uParam0->f_11[0]) || !PED::IS_PED_INJURED(uParam0->f_11[1])) || !PED::IS_PED_INJURED(uParam0->f_11[2]))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_D, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_66(uParam0, 2))
					{
						iVar10 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (func_83(iVar10, uParam0))
						{
							func_64(uParam0, "CMN_VEHSUIT", 0);
							MISC::SET_BIT(&(uParam0->f_D), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::CLEAR_BIT(&(uParam0->f_D), 31);
					func_71("CMN_VEHSUIT");
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 75))
				{
					MISC::SET_BIT(&(uParam0->f_D), 21);
				}
			}
			else if (MISC::IS_BIT_SET(uParam0->f_D, 21))
			{
				MISC::CLEAR_BIT(&(uParam0->f_D), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()))
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_11[iVar0], 1);
					}
					else
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_11[iVar0], 0);
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar10 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, 0))
						{
							if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()))
							{
								if (!func_84(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (!func_82(uParam0->f_11[iVar0]))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar10))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_11[iVar0], iVar10))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(iVar10) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar10))
								{
									Var19 = { ENTITY::GET_ENTITY_COORDS(iVar10, 1) };
									if (Var19.f_2 < -1f)
									{
										TASK::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_11[iVar0]))
						{
							iVar10 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_11[iVar0], 0);
							if (!ENTITY::IS_ENTITY_DEAD(iVar10))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar10))
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar10) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iVar20 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar10) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()))
					{
						iVar21 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (ENTITY::DOES_ENTITY_EXIST(iVar21))
						{
							if (func_70(iVar21, uParam0, 0))
							{
								if (func_81(iVar0, uParam0) || !MISC::IS_BIT_SET(uParam0->f_D, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_11[iVar0], iVar0);
									func_15(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										MISC::SET_BIT(&(uParam0->f_D), 27);
									}
								}
							}
							else if (!func_81(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar21) == joaat("sentinel2"))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_11[iVar0], 4);
								}
								else
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_11[iVar0], 2);
								}
								func_80(iVar0, uParam0);
							}
						}
					}
					if ((!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()) && !func_79(uParam0->f_11[iVar0], iParam10)) && !func_78(uParam0->f_11[iVar0], iParam10))
					{
						if (func_85(uParam0, uParam0->f_11[iVar0], uParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()))
							{
								if (((!PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_11[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_11[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_11[iVar0]))
								{
									iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_11[iVar0]);
									}
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_11[iVar0], func_14());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_B = MISC::GET_GAME_TIMER();
								uParam0->f_1[iVar0] = func_51(uParam0->f_11[iVar0], 0, 0);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_60(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (((func_57(uParam0->f_11[iVar0], 1) || func_79(uParam0->f_11[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
								func_71(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_60(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_11[iVar0], iParam10))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_11[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !MISC::IS_BIT_SET(uParam0->f_D, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_11[iVar0]))
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_11[iVar0], iParam10, 0))
									{
										if (!func_57(uParam0->f_11[iVar0], 1))
										{
											if (func_56(uParam0->f_11[iVar0]))
											{
												iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], 451360105);
												if (iVar11 == 7)
												{
													TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_11[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()))
									{
										if ((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_11[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_11[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_11[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
										}
									}
									iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], -1794415470);
									if (iVar11 == 7 && !func_87(uParam0->f_11[iVar0], iParam10))
									{
										if (((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_11[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !func_77(uParam0->f_11[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_11[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_11[iVar0], 1);
											if (MISC::IS_BIT_SET(uParam0->f_D, 10))
											{
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_11[iVar0], 1f);
											}
											TASK::TASK_ENTER_VEHICLE(uParam0->f_11[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_11[iVar0], 0);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_51(uParam0->f_11[iVar0], 0, 0);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()))
							{
								if (func_85(uParam0, uParam0->f_11[iVar0], uParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_11[iVar0]))
									{
										iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											TASK::CLEAR_PED_TASKS(uParam0->f_11[iVar0]);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_11[iVar0], 0);
										PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_11[iVar0], func_14());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_D, 21))
								{
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_11[iVar0], func_14());
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_D, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
								MISC::SET_BIT(&(uParam0->f_D), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_14()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_71(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_66(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
						{
							if (func_82(uParam0->f_11[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_11[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_11[iVar0], PLAYER::PLAYER_PED_ID(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_82(uParam0->f_11[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = MISC::GET_GAME_TIMER();
			if ((iVar5 - uParam0->f_B) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_C < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!MISC::IS_BIT_SET(uParam0->f_D, 5))
							{
								func_64(uParam0, sParam7, 0);
								MISC::SET_BIT(&(uParam0->f_D), 5);
								uParam0->f_C = iVar1;
							}
							else
							{
								uParam0->f_C = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_76(iVar0, uParam0))
									{
										if (!MISC::IS_STRING_NULL(uVar13[iVar0]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(uVar13[iVar0], ""))
											{
												func_74(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_73(iVar0, uParam0);
												uParam0->f_C = iVar1;
											}
										}
										if (!func_76(iVar0, uParam0))
										{
											func_64(uParam0, uVar12[iVar0], 0);
											func_73(iVar0, uParam0);
											uParam0->f_C = iVar1;
										}
									}
									else
									{
										uParam0->f_C = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_C = 0;
				}
			}
		}
		MISC::CLEAR_BIT(&(uParam0->f_D), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_71(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_71("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0, var uParam1)//Position - 0x3BE4
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_D), 14);
			break;
		
		case 1:
			MISC::SET_BIT(&(uParam1->f_D), 15);
			break;
		
		case 2:
			MISC::SET_BIT(&(uParam1->f_D), 16);
			break;
	}
}

void func_74(var uParam0, char* sParam1, var uParam2, bool bParam3)//Position - 0x3C2C
{
	if (!bParam3)
	{
		if (!MISC::IS_STRING_NULL(uParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_75(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_A = MISC::GET_GAME_TIMER();
}

void func_75(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x3C65
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(uParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

int func_76(int iParam0, var uParam1)//Position - 0x3C84
{
	switch (iParam0)
	{
		case 0:
			return MISC::IS_BIT_SET(uParam1->f_D, 14);
		
		case 1:
			return MISC::IS_BIT_SET(uParam1->f_D, 15);
		
		case 2:
			return MISC::IS_BIT_SET(uParam1->f_D, 16);
		
		default:
	}
	return 0;
}

int func_77(int iParam0, float fParam1)//Position - 0x3CCD
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1)//Position - 0x3D03
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(iParam0, func_14()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1)//Position - 0x3D6A
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_80(int iParam0, var uParam1)//Position - 0x3D9F
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_D), 17);
			break;
		
		case 1:
			MISC::SET_BIT(&(uParam1->f_D), 18);
			break;
		
		case 2:
			MISC::SET_BIT(&(uParam1->f_D), 19);
			break;
	}
}

int func_81(int iParam0, var uParam1)//Position - 0x3DE7
{
	switch (iParam0)
	{
		case 0:
			return MISC::IS_BIT_SET(uParam1->f_D, 17);
		
		case 1:
			return MISC::IS_BIT_SET(uParam1->f_D, 18);
		
		case 2:
			return MISC::IS_BIT_SET(uParam1->f_D, 19);
		
		default:
	}
	return 0;
}

int func_82(int iParam0)//Position - 0x3E30
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 20f, 20f, 20f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_83(int iParam0, var uParam1)//Position - 0x3EBD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam1->f_11[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if ((iVar3 == uParam1->f_11[0] || iVar3 == uParam1->f_11[1]) || iVar3 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1);
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if ((iVar4 == uParam1->f_11[0] || iVar4 == uParam1->f_11[1]) || iVar4 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2);
			if (!PED::IS_PED_INJURED(iVar5))
			{
				if ((iVar5 == uParam1->f_11[0] || iVar5 == uParam1->f_11[1]) || iVar5 == uParam1->f_11[2])
				{
					iVar1 = (iVar1 + 1);
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_84(var uParam0)//Position - 0x401B
{
	int iVar0;
	
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_70(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_85(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x404A
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
					{
						if (func_84(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_70(iVar0, uParam0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
						{
							if (func_86(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_86(int iParam0)//Position - 0x4127
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_87(int iParam0, int iParam1)//Position - 0x415E
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_88()//Position - 0x418E
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

void func_89(var uParam0)//Position - 0x41FA
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(uParam0->f_D, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_11[iVar0], 32, 0);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_11[iVar0], 305, 1);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_11[iVar0], 268, 1);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_11[iVar0], 0);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_D), 25);
	}
}

void func_90(var uParam0)//Position - 0x429D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_11[iVar0]))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_11[iVar0], 0);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_11[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
}

var func_91()//Position - 0x4333
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_92()//Position - 0x433D
{
	struct<3> Var0;
	
	return Var0;
}

int func_93()//Position - 0x4349
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1293) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1293, 0))
	{
		return 1;
	}
	return 0;
}

bool func_94(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)//Position - 0x436D
{
	return func_50(uParam0, Param1, func_95(), Param2, Param3, iParam5, 5, 0, 0, 0, iParam6, sParam7, func_91(), func_91(), func_91(), func_91(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_91(), func_91(), func_91(), 1, fParam4);
}

Vector3 func_95()//Position - 0x43C2
{
	return 0f, 0f, 2f;
}

int func_96()//Position - 0x43CD
{
	int iVar0;
	
	if (func_97())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iVar0 /*8*/], 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_45[iVar0 /*8*/], 1))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_97()//Position - 0x4434
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iVar0 /*8*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_45[iVar0 /*8*/], 0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_98(int iParam0, int iParam1)//Position - 0x4491
{
	Global_D5E9 = iParam0;
	Global_D5EA = iParam1;
}

int func_99(bool bParam0)//Position - 0x44A3
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(Local_45[iVar1 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iVar1 /*8*/], 0)) && !func_103(Local_45[iVar1 /*8*/])) && (!bParam0 || func_100(Local_45[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_100(int iParam0)//Position - 0x450E
{
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == iLocal_1250)
	{
		if (func_102(PLAYER::PLAYER_PED_ID(), Local_57, 1) < 500f)
		{
			return 1;
		}
	}
	else if (func_101(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}

float func_101(int iParam0, int iParam1, int iParam2)//Position - 0x4559
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}

float func_102(int iParam0, struct<3> Param1, int iParam2)//Position - 0x45B5
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam2);
}

int func_103(int iParam0)//Position - 0x45EE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_104(char* sParam0, int iParam1, int iParam2)//Position - 0x4632
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_105(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x464B
{
	struct<3> Var0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_164D7.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_164D7.f_4, 0))
		{
			if (func_154(24) != Global_164D7.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_151(ENTITY::GET_ENTITY_COORDS(Global_164D7.f_4, 1), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_106(Global_164D7.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_106(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4)//Position - 0x46C6
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
		func_150(iParam3);
		Var0.f_9 = 25;
		Var0.f_23 = 2;
		func_146(iParam0, &Var0);
		if (func_145(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			uParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_10A06 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_138(iParam3, Var0, Param1, uParam2, func_144(iParam0));
		func_107(iParam3, iParam0, 0);
	}
}

void func_107(int iParam0, int iParam1, int iParam2)//Position - 0x47F1
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_134(&(Global_10642.f_22B[0 /*21*/]), iParam0))
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
				Global_17C49.f_47C3.f_1099 = func_123();
			}
			if (iParam1 != Global_10642.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_154(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_108(iVar0, 145);
					}
				}
				Global_109CC = iParam1;
				Global_109CD = iParam0;
				Global_109CE = iParam2;
			}
		}
	}
}

void func_108(int iParam0, int iParam1)//Position - 0x490E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_109(iParam0))
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
	func_146(iParam0, &(Global_17C49.f_47C3.f_1286));
}

int func_109(int iParam0)//Position - 0x4B0F
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_121(iParam0, 0, 0)) || func_121(iParam0, 1, 0)) || func_121(iParam0, 2, 0)) || func_144(iParam0) != 145) || func_120(iParam0)) || func_119(iParam0)) || func_118(iParam0)) || func_117(iParam0)) || !func_110(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_119(iParam0))
		{
		}
		if (func_119(iParam0))
		{
		}
		if (func_121(iParam0, 0, 0))
		{
		}
		if (func_121(iParam0, 1, 0))
		{
		}
		if (func_121(iParam0, 2, 0))
		{
		}
		if (func_144(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_110(int iParam0)//Position - 0x4BEC
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_111(iParam0))
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

int func_111(int iParam0)//Position - 0x4D9C
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
		if (!func_116())
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
		if ((((!func_115() && !func_114()) && !func_113()) && !func_112()) && !func_116())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_113())
		{
			return 0;
		}
	}
	return 1;
}

int func_112()//Position - 0x4F6B
{
	return 0;
}

int func_113()//Position - 0x4F74
{
	return 1;
}

int func_114()//Position - 0x4F7D
{
	return 1;
}

int func_115()//Position - 0x4F86
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_116()//Position - 0x4F9F
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

int func_117(int iParam0)//Position - 0x5022
{
	int iVar0;
	var uVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	uVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_111(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0)//Position - 0x5067
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

int func_119(int iParam0)//Position - 0x50A2
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

int func_120(int iParam0)//Position - 0x511E
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

int func_121(int iParam0, int iParam1, bool bParam2)//Position - 0x5206
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_122(iParam1, iVar0, &sVar1, &iVar2))
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

int func_122(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x5277
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

var func_123()//Position - 0x534F
{
	var uVar0;
	
	func_133(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_132(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_131(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_126(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_125(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_124(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_124(var uParam0, int iParam1)//Position - 0x5395
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

void func_125(var uParam0, int iParam1)//Position - 0x541B
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_126(var uParam0, int iParam1)//Position - 0x544E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_130(*uParam0);
	iVar1 = func_128(*uParam0);
	if (iParam1 < 1 || iParam1 > func_127(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_127(int iParam0, int iParam1)//Position - 0x549F
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

var func_128(var uParam0)//Position - 0x5541
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_129(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_129(bool bParam0, int iParam1, int iParam2)//Position - 0x5566
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_130(var uParam0)//Position - 0x557D
{
	return uParam0 & 15;
}

void func_131(var uParam0, int iParam1)//Position - 0x558A
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_132(var uParam0, int iParam1)//Position - 0x55C4
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_133(var uParam0, int iParam1)//Position - 0x55FF
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_134(var uParam0, int iParam1)//Position - 0x563B
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
			uParam0->f_4 = func_135(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_135(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_135(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_135(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_135(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_135(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_135(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_135(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_135(2, 1);
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
			if (func_116())
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
			if (func_116())
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
		if (!func_145(Global_17C49.f_47C3.f_520[uParam0->f_E /*3*/], 0f, 0f, 0f))
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
		if (!func_145(Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[1 /*4*/][uParam0->f_C];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_145(Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_135(int iParam0, int iParam1)//Position - 0x6D2F
{
	struct<58> Var0;
	
	if (func_137(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 25;
		Var0.f_39 = 2;
		func_136(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_136(int iParam0, var uParam1, int iParam2)//Position - 0x6D71
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

bool func_137(int iParam0)//Position - 0x6FE9
{
	return iParam0 < 3;
}

void func_138(int iParam0, struct<54> Param1, struct<3> Param2, var uParam3, int iParam4)//Position - 0x6FF5
{
	if (func_134(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 10))
		{
			func_143(iParam0);
			func_142(Param1, &(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/]));
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
			func_139(iParam0, 1);
		}
	}
}

void func_139(int iParam0, bool bParam1)//Position - 0x70F7
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_141(iParam0, 0))
		{
			func_140(iParam0, 1, 0);
			func_140(iParam0, 2, 0);
			func_140(iParam0, 3, 0);
			func_140(iParam0, 4, 0);
			func_140(iParam0, 0, 1);
			Global_10642[iParam0] = 1;
		}
	}
	else
	{
		func_140(iParam0, 0, 0);
	}
}

void func_140(int iParam0, int iParam1, bool bParam2)//Position - 0x7154
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

bool func_141(int iParam0, int iParam1)//Position - 0x718F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_47C3[iParam0], iParam1);
}

void func_142(struct<54> Param0, var uParam1)//Position - 0x71B2
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

void func_143(int iParam0)//Position - 0x727D
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_134(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_8B[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_10642.f_8B[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_10642.f_8B[iParam0]));
			Global_10642.f_8B[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 13))
		{
			func_139(iParam0, 0);
		}
	}
}

int func_144(int iParam0)//Position - 0x72F7
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

bool func_145(struct<3> Param0, struct<3> Param1)//Position - 0x735A
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_146(int iParam0, var uParam1)//Position - 0x7383
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_149(uParam1);
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
		func_148(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_35), func_147(iVar0 + 1));
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

int func_147(int iParam0)//Position - 0x762F
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

int func_148(int iParam0, var uParam1, var uParam2)//Position - 0x76DF
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

void func_149(var uParam0)//Position - 0x77B9
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

void func_150(int iParam0)//Position - 0x7869
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_143(iParam0);
	func_139(iParam0, 0);
}

int func_151(struct<3> Param0, int iParam1, var uParam2, var uParam3)//Position - 0x7890
{
	int iVar0;
	
	iVar0 = func_152(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_152(struct<3> Param0, int iParam1, int iParam2)//Position - 0x79A6
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
				if (func_153(iVar0) || iParam2 == 0)
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

bool func_153(int iParam0)//Position - 0x7A35
{
	return MISC::IS_BIT_SET(Global_17C49.f_156E[iParam0], 0);
}

int func_154(int iParam0)//Position - 0x7A4D
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_10642.f_8B[iParam0];
}

int func_155()//Position - 0x7A69
{
	func_156();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_156()//Position - 0x7A82
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_158(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_157(PLAYER::PLAYER_PED_ID());
			if (func_137(iVar0) && (!func_35(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_137(Global_17C49.f_6C1.f_21B.f_C8D))
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

int func_157(int iParam0)//Position - 0x7B7F
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_158(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_158(int iParam0)//Position - 0x7BBC
{
	if (func_137(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_159(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7BE6
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = MISC::GET_GAME_TIMER();
		uParam0->f_5 = MISC::GET_GAME_TIMER();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

int func_160(var uParam0, int iParam1)//Position - 0x7C66
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_3D1 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		STREAMING::REQUEST_MODEL(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = MISC::GET_GAME_TIMER();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_3D1 = 1;
		return 1;
	}
	return 0;
}

int func_161(var uParam0, char* sParam1)//Position - 0x7D0F
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E1)
	{
		if (uParam0->f_2E1[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_2E1[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_2E1[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_2E1[iVar0 /*5*/].f_1)
				{
					uParam0->f_3D1 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, 0);
		uParam0->f_2E1[iVar1 /*5*/] = 1;
		uParam0->f_2E1[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_2E1[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_3D1 = 1;
		return 1;
	}
	return 0;
}

void func_162(var uParam0)//Position - 0x7DD8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_163()//Position - 0x7E48
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = false;
	if (func_102(PLAYER::PLAYER_PED_ID(), Local_57, 1) < 70f)
	{
		HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	if (iLocal_1291 == 9)
	{
		if (!iLocal_1290)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_1290 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_28))
		{
			if (func_101(Local_28, PLAYER::PLAYER_PED_ID(), 1) > 300f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_28);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1293) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1293, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iVar0 /*8*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1293, Local_45[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iLocal_1293 = 0;
		}
	}
	if (func_173())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iVar0 /*8*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Local_45[iVar0 /*8*/]))
				{
					iLocal_1293 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
			}
			iVar0++;
		}
	}
	func_166();
	if (iLocal_62 == 0)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, 0, 1, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_27)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar1 /*110*/]))
			{
				if ((Local_27[iVar1 /*110*/].f_5 == 5 && func_101(PLAYER::PLAYER_PED_ID(), Local_27[iVar1 /*110*/], 1) > 300f) && func_102(PLAYER::PLAYER_PED_ID(), Local_57, 1) > 300f)
				{
					PED::DELETE_PED(&(Local_27[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iVar0 /*8*/], 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_45[iVar0 /*8*/]));
					if (HUD::DOES_BLIP_EXIST(Local_45[iVar0 /*8*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_45[iVar0 /*8*/].f_1));
					}
					if (bVar3)
					{
						iVar4 = 1;
					}
					else
					{
						iVar4 = 2;
					}
				}
				else if (func_103(Local_45[iVar0 /*8*/]))
				{
					if (HUD::DOES_BLIP_EXIST(Local_45[iVar0 /*8*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_45[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_100(Local_45[iVar0 /*8*/]))
				{
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_45[iVar0 /*8*/]) == iLocal_1250)
					{
						if (iVar4 != 4)
						{
							iVar4 = 5;
						}
					}
					else
					{
						iVar4 = 4;
					}
				}
			}
			if (((((iLocal_1291 == 9 && func_96() != -1) && ENTITY::DOES_ENTITY_EXIST(Local_45[func_96() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[func_96() /*8*/], 0)) && !func_103(Local_45[func_96() /*8*/])) || (((iLocal_1291 == 10 && func_48() != -1) && ENTITY::DOES_ENTITY_EXIST(Local_45[func_48() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[func_48() /*8*/], 0)))
			{
				if (HUD::DOES_BLIP_EXIST(Local_45[iVar0 /*8*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_45[iVar0 /*8*/].f_1));
				}
			}
			else if ((((ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iVar0 /*8*/], 0)) && !func_103(Local_45[iVar0 /*8*/])) && func_100(Local_45[iVar0 /*8*/])) && iLocal_63 == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_45[iVar0 /*8*/].f_1))
				{
					Local_45[iVar0 /*8*/].f_1 = func_165(Local_45[iVar0 /*8*/], 0, 0);
					HUD::SET_BLIP_PRIORITY(Local_45[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_1291 == 9 || iLocal_1291 == 10)
		{
			if (func_164("JHP1A_BKIN", 0, 0) || func_164("JHP1A_BKINANY", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
		}
		else if (iLocal_63 == 0)
		{
			if (!iLocal_1285)
			{
				if (func_99(1) == 1)
				{
					func_104("JHP1A_BKIN", 7500, 1);
				}
				iLocal_1285 = 1;
			}
		}
		if (func_99(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_266(iVar4);
			}
		}
	}
}

var func_164(char* sParam0, int iParam1, int iParam2)//Position - 0x828D
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_165(int iParam0, bool bParam1, bool bParam2)//Position - 0x82AB
{
	return func_52(iParam0, !bParam1, bParam2);
}

void func_166()//Position - 0x82BE
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_45[3 /*8*/], 1))
		{
			iLocal_1291 = 11;
		}
		else if (func_172())
		{
			iLocal_1291 = 7;
		}
		else if (func_171())
		{
			iLocal_1291 = 6;
		}
		else if (func_97())
		{
			iLocal_1291 = 9;
			iLocal_1285 = 0;
		}
		else if (func_93())
		{
			iLocal_1291 = 10;
		}
		else if (func_170())
		{
			iLocal_1291 = 8;
		}
		else if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1294) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1294, 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1294, 1)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1294, Local_57, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_1291 = 5;
		}
		else if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !func_169()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_57, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_1294 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_1291 = 5;
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_57, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_1291 = 2;
		}
		else if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1294) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1294, 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1294, 1)) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1294, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_1294, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)))
		{
			iLocal_1291 = 4;
		}
		else if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !func_169()) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)))
		{
			iLocal_1294 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_1291 = 4;
		}
		else if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !func_169()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_57, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_1294 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_1291 = 3;
		}
		else if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !func_169()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0))
		{
			iLocal_1294 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_1291 = 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))
		{
			iLocal_1291 = 1;
		}
		else
		{
			iLocal_1294 = 0;
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, 0, 1, 0))
			{
				iLocal_1291 = 0;
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))
			{
				iLocal_1291 = 0;
			}
			else
			{
				iLocal_1291 = -1;
			}
		}
		if (iLocal_1291 == 1)
		{
			if (func_168(Local_27[0 /*110*/]))
			{
				func_167(Local_27[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_168(Local_27[0 /*110*/]))
		{
			func_167(Local_27[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_1288)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 155, 1);
		}
		if ((iLocal_1291 != -1 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && PED::IS_COP_PED_IN_AREA_3D(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_167(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x8792
{
	if (!PED::IS_PED_INJURED(uParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
	}
}

int func_168(int iParam0)//Position - 0x87CE
{
	if (iParam0 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (ENTITY::GET_ENTITY_TYPE(iParam0))
		{
			case 1:
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!ENTITY::IS_ENTITY_DEAD(iParam0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_169()//Position - 0x883B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iVar0 /*8*/], 0))
		{
			if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_45[iVar0 /*8*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_170()//Position - 0x8887
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_45[iVar0 /*8*/], PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_171()//Position - 0x88C9
{
	int iVar0;
	
	if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iVar0 /*8*/], 0)) && PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == Local_45[iVar0 /*8*/])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_172()//Position - 0x8927
{
	int iVar0;
	
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iVar0 /*8*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_45[iVar0 /*8*/], 1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_173()//Position - 0x89A0
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_174()//Position - 0x89F1
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_266(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*110*/]))
		{
			if (Local_27[iVar0 /*110*/].f_5D)
			{
				if (Local_27[iVar0 /*110*/].f_66)
				{
					func_175(Local_27[iVar0 /*110*/], &(Local_27[iVar0 /*110*/].f_5E), 3, 0, 0, 0, -1082130432, 0);
				}
				else
				{
					func_175(Local_27[iVar0 /*110*/], &(Local_27[iVar0 /*110*/].f_5E), 2, 0, 0, 0, -1082130432, 0);
				}
			}
			if (!func_168(Local_27[iVar0 /*110*/]))
			{
				if (Local_27[iVar0 /*110*/].f_67 == -1)
				{
					Local_27[iVar0 /*110*/].f_67 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - Local_27[iVar0 /*110*/].f_67) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_45)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]) && Local_45[iVar0 /*8*/].f_7)
		{
			if (!func_168(Local_45[iVar0 /*8*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_45[iVar0 /*8*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_45[iVar0 /*8*/].f_1));
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_45[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_175(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)//Position - 0x8B1F
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			HUD::SET_PED_HAS_AI_BLIP(iParam0, 1);
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, iParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, iParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("MCUSTBLIP");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_176()//Position - 0x8C3E
{
	struct<3> Var0;
	var uVar1;
	
	if (bLocal_65 == 1)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
		}
		else
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::STOP_CUTSCENE(0);
				CUTSCENE::REMOVE_CUTSCENE();
			}
			func_24(iLocal_66);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_8(1);
			if (!func_212())
			{
				func_211(iLocal_62, &Var0, &uVar1);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				func_209(&uLocal_69, Var0, 50f, 0);
			}
			func_208(&uLocal_69);
			switch (iLocal_62)
			{
				case 0:
					func_160(&uLocal_69, joaat("burrito2"));
					func_160(&uLocal_69, joaat("s_m_y_pestcont_01"));
					func_160(&uLocal_69, joaat("s_m_m_security_01"));
					func_160(&uLocal_69, joaat("dilettante2"));
					func_160(&uLocal_69, joaat("p_amb_clipboard_01"));
					func_207(&uLocal_69, &cLocal_58);
					func_206(&uLocal_69, "misslsdhsclipboard@base");
					func_206(&uLocal_69, "misslsdhsclipboard@idle_a");
					func_206(&uLocal_69, "misstrevor3");
					func_205(&uLocal_69, iLocal_1250);
					if (((func_204() && !VEHICLE::IS_THIS_MODEL_A_BOAT(func_203())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_203())) && !VEHICLE::IS_THIS_MODEL_A_HELI(func_203()))
					{
						func_160(&uLocal_69, func_203());
					}
					break;
				
				case 1:
					func_160(&uLocal_69, joaat("burrito2"));
					break;
			}
			while (!func_202(&uLocal_69))
			{
				SYSTEM::WAIT(0);
				func_174();
			}
			switch (iLocal_62)
			{
				case 0:
					if (((func_204() && !VEHICLE::IS_THIS_MODEL_A_BOAT(func_203())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_203())) && !VEHICLE::IS_THIS_MODEL_A_HELI(func_203()))
					{
						while (!func_201())
						{
							SYSTEM::WAIT(0);
						}
						Local_45[4 /*8*/] = func_183(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_212())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_45[4 /*8*/]))
						{
							func_180(Local_45[4 /*8*/], -1, 1);
						}
						else
						{
							func_180(0, -1, 1);
						}
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_45[4 /*8*/]))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_45[4 /*8*/], -1);
						}
					}
					while (!func_177(0))
					{
						SYSTEM::WAIT(0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(88))
					{
						Local_45[0 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_45[0 /*8*/], 0);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_45[0 /*8*/]);
					}
					if (func_212())
					{
						func_180(0, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					}
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 359.5735f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
			}
			if (CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN())
			{
				if (!func_7(88) || iLocal_62 != 1)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			bLocal_65 = false;
		}
	}
}

int func_177(bool bParam0)//Position - 0x8F90
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350[0]))
		{
			Local_45[0 /*8*/] = Global_15350[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_45[0 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350[1]))
		{
			Local_45[1 /*8*/] = Global_15350[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_45[1 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350[2]))
		{
			Local_45[2 /*8*/] = Global_15350[2];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_45[2 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[0]))
		{
			Local_27[1 /*110*/] = Global_15350.f_9[0];
			if (!PED::IS_PED_INJURED(Local_27[1 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_27[1 /*110*/], 0);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_27[1 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_1C[0]))
		{
			Local_27[1 /*110*/].f_69 = Global_15350.f_1C[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_27[1 /*110*/].f_69, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[2]))
		{
			Local_27[0 /*110*/] = Global_15350.f_9[2];
			if (!PED::IS_PED_INJURED(Local_27[0 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_27[0 /*110*/], 0);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_27[0 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[3]))
		{
			Local_27[2 /*110*/] = Global_15350.f_9[3];
			if (!PED::IS_PED_INJURED(Local_27[3 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_27[2 /*110*/], 0);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_27[2 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[4]))
		{
			Local_27[3 /*110*/] = Global_15350.f_9[4];
			if (!PED::IS_PED_INJURED(Local_27[3 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_27[3 /*110*/], 0);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_27[3 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[5]))
		{
			Local_28 = Global_15350.f_9[5];
			if (!PED::IS_PED_INJURED(Local_28))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_28, 0);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_28, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_15350[3]))
		{
			Local_45[3 /*8*/] = Global_15350[3];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_45[3 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_45[0 /*8*/]))
		{
			Local_45[0 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, 1, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_45[1 /*8*/]))
		{
			Local_45[1 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, 1, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_45[2 /*8*/]))
		{
			Local_45[2 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, 1, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_27[1 /*110*/]))
		{
			Local_27[1 /*110*/] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 1, 1);
			ENTITY::SET_ENTITY_HEALTH(Local_27[1 /*110*/], 150);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[1 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[1 /*110*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[1 /*110*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[1 /*110*/], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[1 /*110*/], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[1 /*110*/], 10, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_27[1 /*110*/], 0, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_27[1 /*110*/], 1, 0, 0, 0);
			PED::SET_PED_LOD_MULTIPLIER(Local_27[1 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_27[1 /*110*/].f_69))
		{
			Local_27[1 /*110*/].f_69 = OBJECT::CREATE_OBJECT(joaat("p_amb_clipboard_01"), PED::GET_PED_BONE_COORDS(Local_27[1 /*110*/], 60309, 0f, 0f, 0f), 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_27[1 /*110*/].f_69, Local_27[1 /*110*/], PED::GET_PED_BONE_INDEX(Local_27[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_27[0 /*110*/]))
		{
			Local_27[0 /*110*/] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[0 /*110*/], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[0 /*110*/], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[0 /*110*/], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[0 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[0 /*110*/], 10, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_27[0 /*110*/], 0, 0, 0, 0);
			PED::SET_PED_LOD_MULTIPLIER(Local_27[0 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_27[2 /*110*/]))
		{
			Local_27[2 /*110*/] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[2 /*110*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[2 /*110*/], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[2 /*110*/], 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[2 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[2 /*110*/], 10, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_27[2 /*110*/], 1, 0, 0, 0);
			PED::SET_PED_LOD_MULTIPLIER(Local_27[2 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_27[3 /*110*/]))
		{
			Local_27[3 /*110*/] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[3 /*110*/], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[3 /*110*/], 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[3 /*110*/], 4, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[3 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[3 /*110*/], 10, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_27[3 /*110*/], 0, 0, 0, 0);
			PED::SET_PED_LOD_MULTIPLIER(Local_27[3 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_28) && !ENTITY::DOES_ENTITY_EXIST(Local_45[3 /*8*/]))
		{
			if (CLOCK::GET_CLOCK_HOURS() >= 5 && CLOCK::GET_CLOCK_HOURS() < 21)
			{
				Local_45[3 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, 1, 1);
				Local_28 = PED::CREATE_PED_INSIDE_VEHICLE(Local_45[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, 1, 1);
			}
			else
			{
				Local_45[3 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, 1, 1);
				Local_28 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, 1, 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_45[0 /*8*/]))
	{
		func_179(Local_45[0 /*8*/], 0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_45[0 /*8*/], 7);
		VEHICLE::SET_VEHICLE_ALARM(Local_45[0 /*8*/], 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_45[0 /*8*/], 1);
		Local_45[0 /*8*/].f_7 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_45[1 /*8*/]))
	{
		func_179(Local_45[1 /*8*/], 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_45[1 /*8*/], 1, 1);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_45[1 /*8*/], 4, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_45[1 /*8*/], 0, 1, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_45[1 /*8*/], 4, 0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_45[1 /*8*/], 1);
		Local_45[1 /*8*/].f_7 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_45[2 /*8*/]))
	{
		func_179(Local_45[2 /*8*/], 2);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_45[2 /*8*/], 2, 1, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_45[2 /*8*/], 3, 1, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_45[2 /*8*/], 1);
		Local_45[2 /*8*/].f_7 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_27[1 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_27[1 /*110*/], &(Local_27[1 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_27[1 /*110*/], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_27[1 /*110*/], iLocal_1248);
		AUDIO::STOP_PED_SPEAKING(Local_27[1 /*110*/], 1);
		func_167(Local_27[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		PED::SET_PED_HEARING_RANGE(Local_27[1 /*110*/], 50f);
		StringCopy(&(Local_27[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_27[1 /*110*/].f_2A = 20f;
		Local_27[1 /*110*/].f_56 = 1;
		Local_27[1 /*110*/].f_57 = 1;
		Local_27[1 /*110*/].f_6B = joaat("p_amb_clipboard_01");
		Local_27[1 /*110*/].f_6A = 60309;
		Local_27[1 /*110*/].f_6C = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_27[0 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_27[0 /*110*/], &(Local_27[0 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_27[0 /*110*/], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_27[0 /*110*/], iLocal_1248);
		AUDIO::STOP_PED_SPEAKING(Local_27[0 /*110*/], 1);
		func_167(Local_27[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		PED::SET_PED_HEARING_RANGE(Local_27[0 /*110*/], 50f);
		StringCopy(&(Local_27[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_27[0 /*110*/].f_56 = 1;
		Local_27[0 /*110*/].f_57 = 1;
		Local_27[0 /*110*/].f_2A = 17.5f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_27[2 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_27[2 /*110*/], &(Local_27[2 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_27[2 /*110*/], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_27[2 /*110*/], iLocal_1248);
		func_167(Local_27[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		AUDIO::STOP_PED_SPEAKING(Local_27[2 /*110*/], 1);
		PED::SET_PED_HEARING_RANGE(Local_27[2 /*110*/], 50f);
		StringCopy(&(Local_27[2 /*110*/].f_1), "front 1", 16);
		Local_27[2 /*110*/].f_56 = 0;
		Local_27[2 /*110*/].f_57 = 0;
		Local_27[2 /*110*/].f_2A = 17.5f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_27[3 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_27[3 /*110*/], &(Local_27[3 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_27[3 /*110*/], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_27[3 /*110*/], iLocal_1248);
		PED::SET_PED_HEARING_RANGE(Local_27[3 /*110*/], 50f);
		func_167(Local_27[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		AUDIO::STOP_PED_SPEAKING(Local_27[3 /*110*/], 1);
		StringCopy(&(Local_27[3 /*110*/].f_1), "front 2", 16);
		Local_27[3 /*110*/].f_56 = 0;
		Local_27[3 /*110*/].f_57 = 0;
		Local_27[3 /*110*/].f_2A = 17.5f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_28) && ENTITY::DOES_ENTITY_EXIST(Local_45[3 /*8*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_28, &(Local_28.f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_28, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_28, iLocal_1248);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_28, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_28, 2, 0);
		WEAPON::GIVE_WEAPON_TO_PED(Local_28, joaat("weapon_nightstick"), -1, 0, 1);
		PED::SET_PED_ACCURACY(Local_28, 5);
		func_167(Local_28, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_28.f_1), "sec", 16);
		Local_28.f_56 = 1;
		Local_28.f_57 = 1;
		Local_28.f_5D = 0;
		if (Global_15350.f_165 == 1)
		{
			if (!func_178(Local_28, 242628503, 1))
			{
				if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, 1))
				{
					iLocal_1295 = 0;
					TASK::OPEN_SEQUENCE_TASK(&uVar2);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, Local_45[3 /*8*/], &cLocal_58, 786599, 0, 0, -1, -1082130432, 0, 1073741824);
					TASK::TASK_LEAVE_VEHICLE(0, Local_45[3 /*8*/], 0);
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar2);
					TASK::TASK_PERFORM_SEQUENCE(Local_28, uVar2);
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!func_178(Local_28, -1680762137, 1))
		{
			if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 1))
			{
				iLocal_1295 = 1;
				TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Local_28, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((ENTITY::DOES_ENTITY_EXIST(Local_45[0 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_45[1 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_45[2 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_45[3 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_27[1 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_27[0 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_27[2 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_27[3 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_28)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}

int func_178(var uParam0, int iParam1, bool bParam2)//Position - 0x9B45
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_179(var uParam0, int iParam1)//Position - 0x9B8B
{
	Global_15F6A.f_16[iParam1] = uParam0;
}

void func_180(int iParam0, int iParam1, int iParam2)//Position - 0x9B9F
{
	if (func_182() && func_212())
	{
		while (Global_15F65 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_181(0);
	}
}

void func_181(int iParam0)//Position - 0x9C63
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_15F6A.f_14), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_15F6A.f_14), 13);
	}
}

int func_182()//Position - 0x9C8C
{
	if (Global_15F6A == 10 || Global_15F6A == 9)
	{
		return 1;
	}
	return 0;
}

int func_183(struct<3> Param0, float fParam1)//Position - 0x9CB0
{
	return func_184(&(Global_16D94.f_877), Param0, fParam1, 0);
}

int func_184(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x9CCA
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_200(uParam0))
	{
		if (func_145(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_C.f_2A == joaat("monster") || uParam0->f_C.f_2A == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_199(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
			func_198(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_C.f_2A, Param1, fParam2, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
				}
				func_193(iVar0, &(uParam0->f_C), 0, 1);
				bVar2 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_C.f_2A) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_C.f_2A))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_192(uParam0->f_B, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_192(uParam0->f_B, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
					func_191(iVar0, uParam0->f_B);
				}
				else if ((!func_189(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = func_188(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_A = 0;
					}
					else
					{
						func_185(iVar4);
					}
				}
				if (((Global_15F6A != 13 && Global_15F6A != 10) && Global_15F6A != 11) && Global_15F6A != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_15F6A.f_3)) == Global_10A06)
					{
						if (uParam0->f_C.f_2A == Global_17C49.f_47C3.f_45[21 /*54*/].f_2A)
						{
							func_139(24, 0);
							func_185(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_108(iVar0, uParam0->f_B);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_C.f_2A);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_185(int iParam0)//Position - 0x9F75
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_134(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_8B[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_8B[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_10642.f_8B[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_10642.f_8B[iParam0], 1, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_10642.f_8B[iParam0]));
			}
		}
		Global_10642[iParam0] = 1;
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_141(iParam0, 0)) && Global_109CF.f_2A == 0) && Global_17C49.f_47C3.f_57E[Global_10642.f_22B[0 /*21*/].f_E] != 0) && Global_17C49.f_47C3.f_57E[Global_10642.f_22B[0 /*21*/].f_E] > 3) && (!func_186(0, Global_10642.f_22B[0 /*21*/].f_C) || !func_186(1, Global_10642.f_22B[0 /*21*/].f_C)))
			{
				func_142(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/], &Global_109CF);
				Global_10A05 = Global_17C49.f_47C3.f_12BF;
			}
			func_139(iParam0, 0);
		}
	}
}

int func_186(int iParam0, int iParam1)//Position - 0xA0EA
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_187(&(Global_17C49.f_47C3.f_113E[iVar0 /*109*/])))
	{
		return 0;
	}
	return func_111(Global_17C49.f_47C3.f_113E[iVar0 /*109*/][iParam0 /*54*/].f_2A);
}

int func_187(var uParam0)//Position - 0xA15B
{
	return *uParam0;
}

int func_188(int iParam0)//Position - 0xA166
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_10642.f_1E4[iVar0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[iVar0], 0))
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_10642.f_1E4[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_10642.f_1E4[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_10642.f_1E4[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_189(int iParam0, struct<3> Param1, bool bParam2)//Position - 0xA228
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_190(iParam0, Global_10642.f_8B[38], 0))
			{
				func_185(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_190(iParam0, Global_10642.f_8B[43], 1))
			{
				func_185(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_190(iParam0, uVar1[iVar3], 1) && func_59(ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 2136.133f, 4780.563f, 39.9702f, 5f))
				{
					if ((!bParam2 || func_145(Param1, 0f, 0f, 0f)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 1) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[14], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_10642.f_1E4[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_10642.f_1E4[14]))
				{
					func_185(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[20], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_10642.f_1E4[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_10642.f_1E4[20]))
				{
					func_185(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_190(int iParam0, int iParam1, bool bParam2)//Position - 0xA42E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_191(int iParam0, int iParam1)//Position - 0xA48E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			Global_15692[iVar0] = iParam0;
			Global_1569C[iVar0] = iParam1;
			Global_156A6[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_156A6[iVar0]))
			{
				Global_156C2[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_156C2[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_192(int iParam0, int iParam1)//Position - 0xA510
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			if (iParam0 == 145 || Global_1569C[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_15692[iVar0]) == func_135(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_15692[iVar0], 0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15692[iVar0], 0, 1);
						VEHICLE::DELETE_VEHICLE(&(Global_15692[iVar0]));
						Global_1569C[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_193(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xA5B1
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
		}
		if (uParam1->f_2A == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (MISC::IS_BIT_SET(uParam1->f_35, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_2F, uParam1->f_30, uParam1->f_31);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_35, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_2F, uParam1->f_30, uParam1->f_31);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_35, 15) || func_197(iParam0)) || (((uParam1->f_26 == 0 && uParam1->f_27 == 0) && uParam1->f_28 == 0) && uParam1->f_9[20] > 0)) && func_196())
		{
			uParam1->f_26 = 0;
			uParam1->f_27 = 0;
			uParam1->f_28 = 0;
		}
		else if ((uParam1->f_26 == 0 && uParam1->f_27 == 0) && uParam1->f_28 == 0)
		{
			uParam1->f_26 = 255;
			uParam1->f_27 = 255;
			uParam1->f_28 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_26, uParam1->f_27, uParam1->f_28);
		if (uParam1->f_29 == -1 && uParam1->f_2A != joaat("granger"))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_29);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !MISC::IS_BIT_SET(uParam1->f_35, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_2E);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_32, uParam1->f_33, uParam1->f_34);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_35, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_35, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_35, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_35, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_35, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_2B >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_2B);
		}
		if (uParam1->f_2D > -1 && uParam1->f_2D < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_2D == 6)
					{
						VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_2D);
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_2D);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_2C == 0 || uParam1->f_2C == 3) || uParam1->f_2C == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_194(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_2A) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_2A))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_35, func_147(iVar0 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, 0);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, 1);
				}
				iVar0++;
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_2A))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_35, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_35, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_35, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_194(int iParam0, var uParam1, var uParam2)//Position - 0xA99E
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
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_195(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
	}
	return 1;
}

int func_195(int iParam0)//Position - 0xAAD0
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_196()//Position - 0xABAC
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_197(int iParam0)//Position - 0xABBD
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					uVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return MISC::IS_BIT_SET(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_198(struct<3> Param0, float fParam1, int iParam2)//Position - 0xAC08
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_134(&(Global_10642.f_22B[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_10642.f_22B[0 /*21*/], iParam2) <= fParam1)
			{
				func_185(iVar0);
			}
		}
		iVar0++;
	}
}

int func_199(var uParam0)//Position - 0xAC58
{
	if (func_200(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_C.f_2A))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_200(var uParam0)//Position - 0xAC8D
{
	if (uParam0->f_C.f_2A == 0)
	{
		return 0;
	}
	if (!func_111(uParam0->f_C.f_2A))
	{
		return 0;
	}
	return 1;
}

bool func_201()//Position - 0xACB6
{
	return func_199(&(Global_16D94.f_877));
}

int func_202(var uParam0)//Position - 0xACC9
{
	if (func_213(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_203()//Position - 0xACE2
{
	return Global_16D94.f_877.f_C.f_2A;
}

int func_204()//Position - 0xACF5
{
	return func_200(&(Global_16D94.f_877));
}

int func_205(var uParam0, int iParam1)//Position - 0xAD08
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_VALID_INTERIOR(iParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2FB)
	{
		if (uParam0->f_2FB[iVar0 /*5*/])
		{
			if (uParam0->f_2FB[iVar0 /*5*/].f_4 == iParam1)
			{
				uParam0->f_2FB[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_2FB[iVar0 /*5*/].f_1)
				{
					uParam0->f_3D1 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam1);
		uParam0->f_2FB[iVar1 /*5*/] = 1;
		uParam0->f_2FB[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_2FB[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_3D1 = 1;
		return 1;
	}
	return 0;
}

int func_206(var uParam0, char* sParam1)//Position - 0xADCC
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_111)
	{
		if (uParam0->f_111[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_111[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_111[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_111[iVar0 /*5*/].f_1)
				{
					uParam0->f_3D1 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		STREAMING::REQUEST_ANIM_DICT(sParam1);
		uParam0->f_111[iVar1 /*5*/] = 1;
		uParam0->f_111[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_111[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_3D1 = 1;
		return 1;
	}
	return 0;
}

int func_207(var uParam0, char[4] cParam1)//Position - 0xAE93
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_176)
	{
		if (uParam0->f_176[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_176[iVar0 /*5*/].f_4, cParam1))
			{
				uParam0->f_176[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_176[iVar0 /*5*/].f_1)
				{
					uParam0->f_3D1 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(cParam1);
		uParam0->f_176[iVar1 /*5*/] = 1;
		uParam0->f_176[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_176[iVar1 /*5*/].f_4 = cParam1;
		uParam0->f_3D1 = 1;
		return 1;
	}
	return 0;
}

void func_208(var uParam0)//Position - 0xAF5A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_97[iVar0 /*5*/])
		{
			uParam0->f_97[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_CA[iVar0 /*7*/])
		{
			uParam0->f_CA[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_111[iVar0 /*5*/])
		{
			uParam0->f_111[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_176[iVar0 /*5*/])
		{
			uParam0->f_176[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_1DB[iVar0 /*6*/])
		{
			uParam0->f_1DB[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_290[iVar0 /*6*/])
		{
			uParam0->f_290[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_2AF[iVar0 /*7*/])
		{
			uParam0->f_2AF[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_2E1[iVar0 /*5*/])
		{
			uParam0->f_2E1[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_2FB[iVar0 /*5*/])
		{
			uParam0->f_2FB[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_36A[iVar0 /*5*/])
		{
			uParam0->f_36A[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_39D[iVar0 /*5*/])
		{
			uParam0->f_39D[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (uParam0->f_30B[iVar0 /*5*/])
		{
			uParam0->f_30B[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_35F)
	{
		uParam0->f_35F.f_2 = 1;
	}
	if (uParam0->f_357)
	{
		uParam0->f_357.f_2 = 1;
	}
	if (uParam0->f_35B)
	{
		uParam0->f_35B.f_2 = 1;
	}
}

int func_209(var uParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xB1B2
{
	if (func_210(Param1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_35F)
	{
		if (func_145(uParam0->f_35F.f_4, Param1) && uParam0->f_35F.f_A == fParam2)
		{
			uParam0->f_35F.f_2 = 0;
			if (!uParam0->f_35F.f_1)
			{
				uParam0->f_3D1 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param1, fParam2, iParam3);
	uParam0->f_35F = 1;
	uParam0->f_35F.f_3 = MISC::GET_GAME_TIMER();
	uParam0->f_35F.f_4 = { Param1 };
	uParam0->f_35F.f_7 = { 0f, 0f, 0f };
	uParam0->f_35F.f_A = fParam2;
	uParam0->f_3D1 = 1;
	return 1;
}

int func_210(struct<3> Param0)//Position - 0xB269
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_211(int iParam0, var uParam1, var uParam2)//Position - 0xB293
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 183.533f, -2946.199f, 5.5113f };
			*uParam2 = 177.8164f;
			break;
		
		case 1:
			*uParam1 = { 692.067f, -1004.812f, 21.9059f };
			*uParam2 = 359.5735f;
			break;
	}
}

bool func_212()//Position - 0xB2EA
{
	return MISC::IS_BIT_SET(Global_15F6A.f_14, 13);
}

int func_213(var uParam0)//Position - 0xB2FE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_3D1)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (STREAMING::HAS_MODEL_LOADED((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0[iVar1 /*5*/])->f_4);
						func_215(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_111[iVar1 /*5*/])
			{
				if (!uParam0->f_111[iVar1 /*5*/].f_1)
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_111[iVar1 /*5*/].f_4))
					{
						uParam0->f_111[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_111[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_111[iVar1 /*5*/].f_1)
					{
						STREAMING::REMOVE_ANIM_DICT(uParam0->f_111[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_111[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_176[iVar1 /*5*/])
			{
				if (!uParam0->f_176[iVar1 /*5*/].f_1)
				{
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_176[iVar1 /*5*/].f_4))
					{
						uParam0->f_176[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_176[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_176[iVar1 /*5*/].f_1)
					{
						TASK::REMOVE_WAYPOINT_RECORDING(uParam0->f_176[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_176[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_290[iVar1 /*6*/])
			{
				if (!uParam0->f_290[iVar1 /*6*/].f_1)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_290[iVar1 /*6*/].f_5))
					{
						uParam0->f_290[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_290[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_290[iVar1 /*6*/].f_1)
					{
						GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_290[iVar1 /*6*/].f_5));
						func_215(&(uParam0->f_290[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_1DB[iVar1 /*6*/])
			{
				if (!uParam0->f_1DB[iVar1 /*6*/].f_1)
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_1DB[iVar1 /*6*/].f_5, uParam0->f_1DB[iVar1 /*6*/].f_4))
					{
						uParam0->f_1DB[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_1DB[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_1DB[iVar1 /*6*/].f_1)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_1DB[iVar1 /*6*/].f_5, uParam0->f_1DB[iVar1 /*6*/].f_4);
						func_215(&(uParam0->f_1DB[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_CA[iVar1 /*7*/])
			{
				if (!uParam0->f_CA[iVar1 /*7*/].f_1)
				{
					if (WEAPON::HAS_WEAPON_ASSET_LOADED(uParam0->f_CA[iVar1 /*7*/].f_4))
					{
						uParam0->f_CA[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_CA[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_CA[iVar1 /*7*/].f_1)
					{
						WEAPON::REMOVE_WEAPON_ASSET(uParam0->f_CA[iVar1 /*7*/].f_4);
						func_215(&(uParam0->f_CA[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_97[iVar1 /*5*/])
			{
				if (!uParam0->f_97[iVar1 /*5*/].f_1)
				{
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(uParam0->f_97[iVar1 /*5*/].f_4))
					{
						uParam0->f_97[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_97[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_97[iVar1 /*5*/].f_1)
					{
						VEHICLE::REMOVE_VEHICLE_ASSET(uParam0->f_97[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_97[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_2E1[iVar1 /*5*/])
			{
				if (!uParam0->f_2E1[iVar1 /*5*/].f_1)
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam0->f_2E1[iVar1 /*5*/].f_4, 0))
					{
						uParam0->f_2E1[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_2E1[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_2E1[iVar1 /*5*/].f_1)
					{
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(uParam0->f_2E1[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_2E1[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_2FB[iVar1 /*5*/])
			{
				if (!uParam0->f_2FB[iVar1 /*5*/].f_1)
				{
					if (INTERIOR::IS_INTERIOR_READY(uParam0->f_2FB[iVar1 /*5*/].f_4))
					{
						uParam0->f_2FB[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_2FB[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_2FB[iVar1 /*5*/].f_1)
					{
						INTERIOR::UNPIN_INTERIOR(uParam0->f_2FB[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_2FB[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2AF[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_2AF[iVar1 /*7*/])
				{
					iVar2 = GRAPHICS::QUERY_MOVIE_MESH_SET_STATE(uParam0->f_2AF[iVar1 /*7*/].f_5);
					if (!uParam0->f_2AF[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0;
								func_215(&(uParam0->f_2AF[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0;
								GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_2AF[iVar1 /*7*/].f_5);
								uParam0->f_2AF[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (INTERIOR::IS_INTERIOR_READY(uParam0->f_2AF[iVar1 /*7*/].f_6))
				{
					uParam0->f_2AF[iVar1 /*7*/].f_5 = GRAPHICS::LOAD_MOVIE_MESH_SET(uParam0->f_2AF[iVar1 /*7*/].f_4);
					uParam0->f_2AF[iVar1 /*7*/].f_3 = MISC::GET_GAME_TIMER();
					uParam0->f_2AF[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_2AF[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_2AF[iVar1 /*7*/])
					{
						if (uParam0->f_2AF[iVar1 /*7*/].f_1)
						{
							GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_2AF[iVar1 /*7*/].f_5);
							func_215(&(uParam0->f_2AF[iVar1 /*7*/]));
							uParam0->f_2AF[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_215(&(uParam0->f_2AF[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_36A[iVar1 /*5*/])
			{
				if (!uParam0->f_36A[iVar1 /*5*/].f_1)
				{
					if (TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED(uParam0->f_36A[iVar1 /*5*/].f_4))
					{
						uParam0->f_36A[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_36A[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_36A[iVar1 /*5*/].f_1)
					{
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(uParam0->f_36A[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_36A[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_39D[iVar1 /*5*/])
			{
				if (!uParam0->f_39D[iVar1 /*5*/].f_1)
				{
					if (AUDIO::PREPARE_ALARM(uParam0->f_39D[iVar1 /*5*/].f_4))
					{
						uParam0->f_39D[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_39D[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_39D[iVar1 /*5*/].f_1)
					{
						func_215(&(uParam0->f_39D[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_30B)
		{
			if (uParam0->f_30B[iVar1 /*5*/])
			{
				if (!uParam0->f_30B[iVar1 /*5*/].f_1)
				{
					if (HUD::HAS_ADDITIONAL_TEXT_LOADED(iVar1))
					{
						uParam0->f_30B[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_30B[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_30B[iVar1 /*5*/].f_1)
					{
						HUD::CLEAR_ADDITIONAL_TEXT(iVar1, 1);
						func_215(&(uParam0->f_30B[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_357)
		{
			if (!uParam0->f_357.f_1)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					uParam0->f_357.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_357.f_2)
			{
				if (uParam0->f_357.f_1)
				{
					STREAMING::REMOVE_PTFX_ASSET();
					func_215(&(uParam0->f_357));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_35B)
		{
			if (!uParam0->f_35B.f_1)
			{
				if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
				{
					uParam0->f_35B.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_35B.f_2)
			{
				if (uParam0->f_35B.f_1)
				{
					PHYSICS::ROPE_UNLOAD_TEXTURES();
					func_215(&(uParam0->f_35B));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_35F && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!uParam0->f_35F.f_1)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					uParam0->f_35F.f_1 = 1;
					if (uParam0->f_3D2)
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						func_214(uParam0);
						uParam0->f_3D2 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_35F.f_2)
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				func_215(&(uParam0->f_35F));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_3B7[iVar1 /*5*/])
			{
				if (!uParam0->f_3B7[iVar1 /*5*/].f_1)
				{
					if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam0->f_3B7[iVar1 /*5*/].f_4))
					{
						uParam0->f_3B7[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_3B7[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_3B7[iVar1 /*5*/].f_1)
					{
						func_215(&(uParam0->f_3B7[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_3D1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_214(var uParam0)//Position - 0xBCCD
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		func_215(&(uParam0->f_35F));
	}
}

void func_215(var uParam0)//Position - 0xBCE9
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_216()//Position - 0xBD04
{
	if (func_217())
	{
		func_8(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

int func_217()//Position - 0xBD1C
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

void func_218()//Position - 0xBD49
{
	func_236(&(Local_1074[1 /*8*/]), 51702/*func_237*/, "AI Controller");
	func_236(&(Local_1074[0 /*8*/]), 50067/*func_228*/, "Dialogue");
	func_236(&(Local_1074[3 /*8*/]), 49093/*func_223*/, "Alarms & Wanted Level");
	func_236(&(Local_1074[4 /*8*/]), 48541/*func_219*/, "Music Manager");
}

void func_219(var uParam0)//Position - 0xBD9D
{
	if (!func_222(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((AUDIO::IS_ALARM_PLAYING(&cLocal_48) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || func_22(&(Local_1074[3 /*8*/])))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_ATTACK");
				func_221(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (func_102(PLAYER::PLAYER_PED_ID(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_START");
					func_221(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_1291 == 3 || iLocal_1291 == 2)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_WAREHOUSE");
					func_221(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_1291 == 6 || iLocal_1291 == 9)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_VAN");
					func_221(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (iLocal_1291 == 9 && func_102(PLAYER::PLAYER_PED_ID(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("JHP1A_RADIO_1"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_RADIO_1");
							func_220(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((AUDIO::IS_ALARM_PLAYING(&cLocal_48) && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && iLocal_1287)
				{
					func_221(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("JHP1A_RADIO_2"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_RADIO_2");
						func_221(uParam0, 6, 0);
						func_220(uParam0);
					}
				}
				break;
			}
	}
	if (func_222(uParam0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
}

void func_220(var uParam0)//Position - 0xBF63
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = MISC::GET_GAME_TIMER();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_221(var uParam0, int iParam1, int iParam2)//Position - 0xBF88
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = MISC::GET_GAME_TIMER();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_222(var uParam0)//Position - 0xBFAE
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

void func_223(var uParam0)//Position - 0xBFC5
{
	if (!func_222(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_221(uParam0, 2, 2000);
				break;
			
			case 2:
				if (AUDIO::PREPARE_ALARM(&cLocal_48))
				{
					AUDIO::START_ALARM(&cLocal_48, 0);
					func_226(&cLocal_1076, Local_57, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_1076, "", 32);
					func_221(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_224(&Local_28, 3, 1, "ALARM EVENT SET IT", 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
				PED::SET_CREATE_RANDOM_COPS(0);
				PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				uParam0->f_2 = MISC::GET_GAME_TIMER() + 15000;
				func_221(uParam0, 4, 0);
				break;
			
			case 4:
				if (MISC::GET_GAME_TIMER() > uParam0->f_2)
				{
					PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
					PED::SET_CREATE_RANDOM_COPS(1);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					iLocal_1287 = 1;
					func_220(uParam0);
				}
				PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				break;
			}
	}
}

int func_224(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)//Position - 0xC0DB
{
	return func_225(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_225(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0xC0F7
{
	if (func_168(*uParam0))
	{
		if (!bParam5 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_26 = MISC::GET_GAME_TIMER();
			if (iParam1 != uParam0->f_5 || !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), sParam2))
			{
				uParam0->f_6 = uParam0->f_5;
				uParam0->f_5 = iParam1;
				uParam0->f_11 = { uParam0->f_9 };
				StringCopy(&(uParam0->f_9), sParam2, 32);
				if (bParam7)
				{
					uParam0->f_24 = 1;
					uParam0->f_23 = 0;
				}
				else
				{
					uParam0->f_24 = 0;
					uParam0->f_23 = uParam6;
				}
				uParam0->f_2F = 0;
				uParam0->f_2E = 0;
				uParam0->f_30 = 0;
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				if (!func_210(Param3))
				{
					uParam0->f_58 = { Param3 };
				}
				if (iParam4 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam4))
				{
					uParam0->f_5B = iParam4;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_226(char* sParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC1CA
{
	struct<32> Var0;
	
	Var0 = -1;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_11), "", 24);
	Var0.f_1C = iParam3;
	Var0.f_1A = fParam2;
	Var0.f_1D = iParam4;
	Var0.f_1E = iParam5;
	Var0.f_1F = iParam6;
	Var0.f_17 = { Param1 };
	func_227(&Var0, 0);
}

int func_227(var uParam0, int iParam1)//Position - 0xC216
{
	int iVar0;
	int iVar1;
	
	if ((MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)) && *uParam0 != -1) && (!ENTITY::DOES_ENTITY_EXIST(Local_27[*uParam0 /*110*/]) || PED::IS_PED_INJURED(Local_27[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1075[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1075 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (MISC::IS_STRING_NULL_OR_EMPTY(iParam1) || MISC::ARE_STRINGS_EQUAL(iParam1, &(uParam0->f_11))))
		{
			Local_1075[iVar0 /*32*/] = *uParam0;
			Local_1075[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1075[iVar0 /*32*/].f_17 = { ENTITY::GET_ENTITY_COORDS(Local_27[*uParam0 /*110*/], 1) };
			}
			else
			{
				Local_1075[iVar0 /*32*/].f_17 = { uParam0->f_17 };
			}
			Local_1075[iVar0 /*32*/].f_1A = uParam0->f_1A;
			Local_1075[iVar0 /*32*/].f_1C = uParam0->f_1C;
			Local_1075[iVar0 /*32*/].f_1D = uParam0->f_1D;
			Local_1075[iVar0 /*32*/].f_1B = MISC::GET_GAME_TIMER();
			Local_1075[iVar0 /*32*/].f_1E = uParam0->f_1E;
			Local_1075[iVar0 /*32*/].f_1F = uParam0->f_1F;
			iVar1 = 1;
		}
		else
		{
			iVar1 = 0;
		}
		*uParam0 = -1;
		StringCopy(&(uParam0->f_1), "", 64);
		uParam0->f_17 = { 0f, 0f, 0f };
		uParam0->f_1A = 0f;
		uParam0->f_1C = 0;
		uParam0->f_1D = 0;
		uParam0->f_1B = 0;
		uParam0->f_1E = 0;
		uParam0->f_1F = 0;
		return iVar1;
	}
	return 0;
}

void func_228(var uParam0)//Position - 0xC393
{
	char cVar0[24];
	bool bVar1;
	struct<3> Var2;
	
	if (!func_222(uParam0))
	{
		if (func_44())
		{
			iLocal_1247 = -1;
		}
		else if (iLocal_1247 == -1)
		{
			iLocal_1247 = MISC::GET_GAME_TIMER();
			iLocal_1270 = -1;
			iLocal_1271 = 1;
		}
		if (iLocal_1251 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_1253))
		{
			if (((Local_27[iLocal_1251 /*110*/] != 0 && ENTITY::DOES_ENTITY_EXIST(Local_27[iLocal_1251 /*110*/])) && !PED::IS_PED_INJURED(Local_27[iLocal_1251 /*110*/])) && !PED::IS_CONVERSATION_PED_DEAD(Local_27[iLocal_1251 /*110*/]))
			{
				if (!PED::IS_PED_RAGDOLL(Local_27[iLocal_1251 /*110*/]))
				{
					if (func_44())
					{
						if (iLocal_1261 && (iLocal_1271 || iLocal_1252 > iLocal_1270))
						{
							if (bLocal_1272)
							{
								iLocal_1275 = iLocal_1266;
								iLocal_1276 = iLocal_1270;
								MemCopy(&Local_1277, {func_235()}, 4);
								MemCopy(&Local_1280, {func_234()}, 4);
								iLocal_1283 = iLocal_1271;
								bLocal_1284 = iLocal_1273;
							}
							if (iLocal_1262)
							{
								func_11();
							}
							else
							{
								func_41();
							}
						}
					}
					if (func_43())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1247) > iLocal_1259)
						{
							if (func_233(iLocal_1251))
							{
								MemCopy(&cVar0, {Local_47}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_1251)
							{
								case 0:
									func_40(&uLocal_1081, 4, Local_27[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								
								case 1:
									func_40(&uLocal_1081, 5, Local_27[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								
								case 2:
									func_40(&uLocal_1081, 4, Local_27[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								
								case 3:
									func_40(&uLocal_1081, 3, Local_27[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1256))
							{
								if (func_232(&uLocal_1081, &cVar0, &Local_1253, 8, 0, 0, 0))
								{
									bVar1 = true;
								}
							}
							else if (func_231(&uLocal_1081, &cVar0, &Local_1253, &cLocal_1256, 8, 0, 0))
							{
								bVar1 = true;
							}
							if (bVar1)
							{
								func_227(&(Local_27[iLocal_1251 /*110*/].f_32), &Local_1253);
								iLocal_1270 = iLocal_1252;
								iLocal_1271 = iLocal_1263;
								bLocal_1272 = iLocal_1265;
								iLocal_1273 = iLocal_1264;
								iLocal_1251 = -1;
								iLocal_1252 = -1;
								StringCopy(&Local_1253, "", 16);
								iLocal_1259 = 0;
								fLocal_1260 = 9999999f;
								iLocal_1261 = 0;
								iLocal_1262 = 0;
								iLocal_1263 = 1;
								iLocal_1265 = 0;
								iLocal_1264 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_1251 = -1;
				iLocal_1252 = -1;
				StringCopy(&Local_1253, "", 16);
				iLocal_1259 = 0;
				fLocal_1260 = 9999999f;
				iLocal_1261 = 0;
				iLocal_1262 = 0;
				iLocal_1263 = 1;
				iLocal_1264 = 0;
			}
		}
		if (((func_44() && iLocal_1266 != -1) && iLocal_1273) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1267))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(Local_27[iLocal_1266 /*110*/], 1) };
			if (func_102(PLAYER::PLAYER_PED_ID(), Var2, 1) >= 25f)
			{
				iLocal_1275 = iLocal_1266;
				iLocal_1276 = iLocal_1270;
				MemCopy(&Local_1277, {func_235()}, 4);
				MemCopy(&Local_1280, {func_234()}, 4);
				iLocal_1283 = iLocal_1271;
				bLocal_1284 = iLocal_1273;
				func_11();
				iLocal_1266 = -1;
				iLocal_1270 = -1;
				StringCopy(&cLocal_1267, "", 16);
				iLocal_1271 = 0;
				iLocal_1273 = 0;
			}
		}
		if (iLocal_1275 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_1277))
		{
			if (Local_27[iLocal_1275 /*110*/].f_5 > iLocal_1276)
			{
				iLocal_1275 = -1;
				iLocal_1276 = -1;
				StringCopy(&Local_1277, "", 16);
				StringCopy(&Local_1280, "", 16);
				iLocal_1283 = 1;
			}
		}
		if (iLocal_1251 == -1 && MISC::IS_STRING_NULL_OR_EMPTY(&Local_1253))
		{
			if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 10000)
			{
				if (iLocal_1275 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_1277))
				{
					func_230(iLocal_1275, &Local_1277, iLocal_1276, 0, 0, iLocal_1283, 0, 1, &Local_1280, bLocal_1284);
					iLocal_1275 = -1;
					iLocal_1276 = -1;
					StringCopy(&Local_1277, "", 16);
					StringCopy(&Local_1280, "", 16);
					iLocal_1283 = 1;
				}
			}
		}
	}
	func_229(bLocal_1284);
}

void func_229(bool bParam0)//Position - 0xC759
{
	if (bParam0)
	{
	}
}

int func_230(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)//Position - 0xC766
{
	float fVar0;
	bool bVar1;
	
	fVar0 = func_101(Local_27[iParam0 /*110*/], PLAYER::PLAYER_PED_ID(), 1);
	if ((iParam2 > iLocal_1252 || iParam2 == 4) || ((iParam2 == iLocal_1252 && (fVar0 < fLocal_1260 || (func_233(iParam0) && !func_233(iLocal_1251)))) && iParam2 != 5))
	{
		switch (iParam2)
		{
			case 0:
				if (fVar0 < 20f)
				{
					bVar1 = true;
				}
				break;
			
			default:
				if (fVar0 < 40f)
				{
					bVar1 = true;
				}
				break;
		}
		if (bVar1)
		{
			iLocal_1251 = iParam0;
			iLocal_1252 = iParam2;
			StringCopy(&Local_1253, sParam1, 16);
			StringCopy(&cLocal_1256, sParam8, 16);
			fLocal_1260 = fVar0;
			iLocal_1261 = iParam3;
			iLocal_1262 = iParam4;
			iLocal_1259 = iParam6;
			iLocal_1263 = iParam5;
			iLocal_1265 = iParam7;
			iLocal_1264 = iParam9;
			return 1;
		}
	}
	return 0;
}

bool func_231(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC83F
{
	func_39(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_29(sParam2, iParam4, 0);
}

bool func_232(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC893
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0);
}

int func_233(int iParam0)//Position - 0xC8E1
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

struct<6> func_234()//Position - 0xC8FF
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

struct<6> func_235()//Position - 0xC9AB
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		return Global_3BCF;
	}
	return Var0;
}

int func_236(var uParam0, int iParam1, char* sParam2)//Position - 0xC9CF
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_237(var uParam0)//Position - 0xC9F6
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	
	if (!func_222(uParam0))
	{
		bLocal_1288 = true;
		if (!iLocal_1286)
		{
			if (func_170())
			{
				iLocal_1286 = 1;
				iLocal_1289 = MISC::GET_GAME_TIMER();
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_1289) > 3000)
		{
			iLocal_1286 = 0;
			iLocal_1289 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_27)
		{
			if (func_168(Local_27[iVar0 /*110*/]))
			{
				func_257(&(Local_27[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_168(Local_28))
		{
			func_257(&Local_28);
		}
		iVar1 = 0;
		while (iVar1 < Local_1075)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1075[iVar1 /*32*/].f_1)) && Local_1075[iVar1 /*32*/].f_1B != -1)
			{
				if (Local_1075[iVar1 /*32*/].f_1C == -1 || (MISC::GET_GAME_TIMER() - Local_1075[iVar1 /*32*/].f_1B) < Local_1075[iVar1 /*32*/].f_1C)
				{
					if (Local_1075[iVar1 /*32*/].f_1D <= 0 || (MISC::GET_GAME_TIMER() - Local_1075[iVar1 /*32*/].f_1B) > Local_1075[iVar1 /*32*/].f_1D)
					{
						if (Local_1075[iVar1 /*32*/] != -1 && func_168(Local_27[Local_1075[iVar1 /*32*/] /*110*/]))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(Local_27[Local_1075[iVar1 /*32*/] /*110*/], 1) };
							Local_1075[iVar1 /*32*/].f_17 = { Var2 };
						}
						else
						{
							Var2 = { Local_1075[iVar1 /*32*/].f_17 };
						}
						if (!func_22(&(Local_1074[3 /*8*/])))
						{
							if (Local_1075[iVar1 /*32*/].f_1F && MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Local_57, 1) < 35f)
							{
								func_159(&(Local_1074[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_27)
						{
							if (Local_1075[iVar1 /*32*/] == -1 || (iVar0 != Local_1075[iVar1 /*32*/] && Local_27[Local_1075[iVar1 /*32*/] /*110*/].f_5 >= Local_27[iVar0 /*110*/].f_5))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*110*/]) && !PED::IS_PED_INJURED(Local_27[iVar0 /*110*/]))
								{
									if (func_102(Local_27[iVar0 /*110*/], Var2, 1) < (Local_1075[iVar1 /*32*/].f_1A + Local_27[iVar0 /*110*/].f_2A))
									{
										Local_27[iVar0 /*110*/].f_22 = iVar1;
										if (Local_1075[iVar1 /*32*/].f_1E)
										{
											if (!func_22(&(Local_1074[3 /*8*/])))
											{
												func_159(&(Local_1074[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_1076, {Local_1075[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - Local_1075[iVar1 /*32*/].f_1B) > Local_1075[iVar1 /*32*/].f_1C + 2000)
				{
					StringCopy(&(Local_1075[iVar1 /*32*/].f_1), "", 64);
					Local_1075[iVar1 /*32*/] = -1;
					Local_1075[iVar1 /*32*/].f_17 = { 0f, 0f, 0f };
					Local_1075[iVar1 /*32*/].f_1A = 0f;
					Local_1075[iVar1 /*32*/].f_1B = -1;
					Local_1075[iVar1 /*32*/].f_1C = -1;
					Local_1075[iVar1 /*32*/].f_1D = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_27)
		{
			if (func_168(Local_27[iVar0 /*110*/]))
			{
				func_251(&(Local_27[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_168(Local_28))
		{
			func_242(&Local_28);
		}
		iVar0 = 0;
		while (iVar0 < Local_27)
		{
			if (func_168(Local_27[iVar0 /*110*/]))
			{
				func_241(&(Local_27[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_168(Local_28))
		{
			func_239(&Local_28);
		}
		iVar0 = 0;
		while (iVar0 < Local_27)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*110*/].f_69))
			{
				if (((!ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*110*/]) || PED::IS_PED_INJURED(Local_27[iVar0 /*110*/])) || PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_27[iVar0 /*110*/])) || (Local_27[iVar0 /*110*/].f_6C && Local_27[iVar0 /*110*/].f_5 != 0))
				{
					bVar3 = true;
				}
				else if (Local_27[iVar0 /*110*/].f_5 != 0)
				{
					bVar4 = true;
				}
				if (bVar3 || bVar4)
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_27[iVar0 /*110*/].f_69, Local_27[iVar0 /*110*/]))
					{
						ENTITY::DETACH_ENTITY(Local_27[iVar0 /*110*/].f_69, 1, 1);
					}
					if (bVar3)
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_27[iVar0 /*110*/].f_69));
					}
					else if (bVar4)
					{
						OBJECT::DELETE_OBJECT(&(Local_27[iVar0 /*110*/].f_69));
					}
					Local_27[iVar0 /*110*/].f_6D = 0;
				}
			}
			else if (Local_27[iVar0 /*110*/].f_6B != 0 && Local_27[iVar0 /*110*/].f_6A != -1)
			{
				if (Local_27[iVar0 /*110*/].f_6D && STREAMING::HAS_MODEL_LOADED(Local_27[iVar0 /*110*/].f_6B))
				{
					Local_27[iVar0 /*110*/].f_69 = OBJECT::CREATE_OBJECT(Local_27[iVar0 /*110*/].f_6B, PED::GET_PED_BONE_COORDS(Local_27[iVar0 /*110*/], Local_27[iVar0 /*110*/].f_6A, 0f, 0f, 0f), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_27[iVar0 /*110*/].f_69, Local_27[iVar0 /*110*/], PED::GET_PED_BONE_INDEX(Local_27[iVar0 /*110*/], Local_27[iVar0 /*110*/].f_6A), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
					Local_27[iVar0 /*110*/].f_6D = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_27)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar1 /*110*/]) && !PED::IS_PED_INJURED(Local_27[iVar1 /*110*/]))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_27[iVar1 /*110*/]);
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_27[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_238();
	}
	if (func_222(uParam0))
	{
	}
}

void func_238()//Position - 0xCF20
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_168(Local_45[iVar0 /*8*/]))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_45[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_239(int iParam0)//Position - 0xCF53
{
	int iVar0;
	int iVar1;
	
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*iParam0);
	if (func_240(*iParam0))
	{
		Local_28.f_2E = 0;
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (CLOCK::GET_CLOCK_HOURS() >= 5 && CLOCK::GET_CLOCK_HOURS() < 21)
			{
				if ((!func_178(*iParam0, 1647992574, 1) && !func_178(*iParam0, 242628503, 1)) || iLocal_1295)
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(203.68f, -3132.46f, 4.79f, 1f, 1))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_1295 = 0;
					}
				}
			}
			else if (!func_178(*iParam0, -1680762137, 1) || !iLocal_1295)
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(162.69f, -3115.67f, 4.95f, 1f, 1))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_1295 = 1;
				}
			}
			break;
		
		case 3:
			PED::SET_PED_USING_ACTION_MODE(*iParam0, 1, -1, "DEFAULT_ACTION");
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
					if (WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_pistol"), 0))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(*iParam0, joaat("weapon_pistol"));
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_nightstick"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_nightstick"), -1, 1, 1);
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("weapon_nightstick"), 0);
						}
					}
					break;
				
				case 953441746:
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case 152436526:
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_nightstick"), 0))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(*iParam0, joaat("weapon_nightstick"));
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_pistol"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_pistol"), -1, 1, 1);
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("weapon_pistol"), 0);
						}
					}
					break;
			}
			if (!func_178(*iParam0, 780511057, 1) || func_240(*iParam0))
			{
				TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::TASK_LOOK_AT_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 686645495:
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_5B))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*iParam0, ENTITY::GET_ENTITY_COORDS(iParam0->f_5B, 1), 180f) && (MISC::GET_GAME_TIMER() - iParam0->f_25) < 5000)
						{
							if (!func_178(*iParam0, -875674219, 1) || func_240(*iParam0))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iParam0->f_5B, -1);
								TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam0->f_5B, -1, 2048, 2);
							}
						}
						else if (!func_178(*iParam0, -2015108952, 1) || func_240(*iParam0))
						{
							TASK::TASK_GOTO_ENTITY_OFFSET_XY(*iParam0, iParam0->f_5B, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (iParam0->f_29 && !func_59(iParam0->f_58, iParam0->f_2B, 1f))
					{
						iParam0->f_58 = { iParam0->f_2B };
						iVar1 = 1;
					}
					if (!func_210(iParam0->f_58))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*iParam0, iParam0->f_58, 90f) && (MISC::GET_GAME_TIMER() - iParam0->f_25) < 5000)
						{
							if ((!func_178(*iParam0, 1464580341, 1) || func_240(*iParam0)) || iVar1)
							{
								TASK::TASK_TURN_PED_TO_FACE_COORD(*iParam0, iParam0->f_58, 0);
								TASK::TASK_LOOK_AT_COORD(*iParam0, iParam0->f_58, -1, 2048, 2);
							}
						}
						else if ((!func_178(*iParam0, 713668775, 1) || func_240(*iParam0)) || iVar1)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, iParam0->f_2B, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_210(iParam0->f_58))
					{
						if (!func_178(*iParam0, 1464580341, 1) || func_240(*iParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(*iParam0, iParam0->f_58, -1);
							TASK::TASK_LOOK_AT_COORD(*iParam0, iParam0->f_58, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*iParam0, -1);
					}
					break;
				
				case 58299323:
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_5B))
					{
						if (!func_178(*iParam0, -875674219, 1) || func_240(*iParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iParam0->f_5B, -1);
							TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam0->f_5B, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_240(struct<26> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84)//Position - 0xD44D
{
	if (Param0.f_5 != Param0.f_7 || !MISC::ARE_STRINGS_EQUAL(&(Param0.f_9), &(Param0.f_19)))
	{
		return 1;
	}
	return 0;
}

void func_241(var uParam0)//Position - 0xD479
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*uParam0);
	if (func_240(*uParam0))
	{
		uParam0->f_2E = 0;
	}
	switch (uParam0->f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_27)
			{
				if (Local_27[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						if (!func_178(*uParam0, 1647992574, 1))
						{
							if (TASK::DOES_SCENARIO_EXIST_IN_AREA(155.74f, -3098.89f, 4.93f, 0.5f, 1))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!func_178(*uParam0, 242628503, 1) || func_240(*uParam0)) && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base"))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1249);
								if (!func_59(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 126.8496f, -3089.249f, 4.9141f, 0.75f))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, 0, 264.2812f);
								}
								TASK::TASK_ACHIEVE_HEADING(0, 264.2812f, 0);
								TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1249);
								TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_1249);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1249);
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_45[2 /*8*/]))
							{
								TASK::TASK_LOOK_AT_COORD(*uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_45[2 /*8*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_45[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_2E = 0;
						}
						else if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_2E)
							{
								case 0:
								case 2:
									if (uParam0->f_2E == 0 && TASK::GET_SEQUENCE_PROGRESS(*uParam0) == 2)
									{
										uParam0->f_6D = 1;
									}
									if (((uParam0->f_2E == 0 && TASK::GET_SEQUENCE_PROGRESS(*uParam0) == 2) || uParam0->f_2E == 2) && MISC::GET_GAME_TIMER() > uParam0->f_25)
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_1249);
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											
											case 1:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											
											case 2:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_1249);
										TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_1249);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_1249);
										uParam0->f_2E = 1;
									}
									break;
								
								case 1:
									if (TASK::GET_SEQUENCE_PROGRESS(*uParam0) == 1)
									{
										uParam0->f_2E++;
									}
									break;
								}
						}
						break;
					
					case 2:
					case 3:
						if (!func_178(*uParam0, 1647992574, 1))
						{
							if (TASK::DOES_SCENARIO_EXIST_IN_AREA(159.82f, -3085.93f, 5f, 0.1f, 1))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (TASK::DOES_SCENARIO_EXIST_IN_AREA(160.15f, -3084.79f, 4.99f, 0.1f, 1))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (TASK::DOES_SCENARIO_EXIST_IN_AREA(159.09f, -3085.02f, 5.01f, 0.1f, 1))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (MISC::GET_HASH_KEY(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5B))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*uParam0, ENTITY::GET_ENTITY_COORDS(uParam0->f_5B, 1), 180f) && (MISC::GET_GAME_TIMER() - uParam0->f_25) < 5000)
						{
							if (!func_178(*uParam0, -875674219, 1) || func_240(*uParam0))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, uParam0->f_5B, -1);
								TASK::TASK_LOOK_AT_ENTITY(*uParam0, uParam0->f_5B, -1, 2048, 2);
							}
						}
						else if (!func_178(*uParam0, -2015108952, 1) || func_240(*uParam0))
						{
							TASK::TASK_GOTO_ENTITY_OFFSET_XY(*uParam0, uParam0->f_5B, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (uParam0->f_29 && !func_59(uParam0->f_58, uParam0->f_2B, 1f))
					{
						uParam0->f_58 = { uParam0->f_2B };
						iVar3 = 1;
					}
					if (!func_210(uParam0->f_58))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*uParam0, uParam0->f_58, 90f) && (MISC::GET_GAME_TIMER() - uParam0->f_25) < 5000)
						{
							if ((!func_178(*uParam0, 1464580341, 1) || func_240(*uParam0)) || iVar3)
							{
								TASK::TASK_TURN_PED_TO_FACE_COORD(*uParam0, uParam0->f_58, 0);
								TASK::TASK_LOOK_AT_COORD(*uParam0, uParam0->f_58, -1, 2048, 2);
							}
						}
						else if ((!func_178(*uParam0, 713668775, 1) || func_240(*uParam0)) || iVar3)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, uParam0->f_2B, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_210(uParam0->f_58))
					{
						if (!func_178(*uParam0, 1464580341, 1) || func_240(*uParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(*uParam0, uParam0->f_58, -1);
							TASK::TASK_LOOK_AT_COORD(*uParam0, uParam0->f_58, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5B))
					{
						if (!func_178(*uParam0, -875674219, 1) || func_240(*uParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, uParam0->f_5B, -1);
							TASK::TASK_LOOK_AT_ENTITY(*uParam0, uParam0->f_5B, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "ENT_FOOT_LEAVE") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "ENT_VEH_LEAVE")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "WH_FOOT_LEAVE")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_178(*uParam0, 242628503, 1) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_240(*uParam0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1249);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1249, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1249);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_1249);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1249);
					TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1294) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1294, 0))
				{
					fVar6 = func_101(PLAYER::PLAYER_PED_ID(), iLocal_1294, 1);
				}
				if ((iLocal_1291 == 3 || iLocal_1291 == 2) || iLocal_1291 == 8)
				{
					iVar4 = PLAYER::PLAYER_PED_ID();
					fVar7 = 2f;
				}
				else if (iLocal_1291 == 0 || iLocal_1291 == 1)
				{
					iVar4 = PLAYER::PLAYER_PED_ID();
					fVar7 = 1f;
				}
				else if (iLocal_1291 == 5 && ENTITY::DOES_ENTITY_EXIST(iLocal_1294))
				{
					if (fVar6 > 10f)
					{
						iVar4 = PLAYER::PLAYER_PED_ID();
						fVar7 = 2f;
					}
					else
					{
						iVar4 = iLocal_1294;
						fVar7 = 2f;
					}
				}
				else if (iLocal_1291 == 4 && ENTITY::DOES_ENTITY_EXIST(iLocal_1294))
				{
					iVar4 = iLocal_1294;
					fVar7 = 1f;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					fVar5 = func_101(*uParam0, iVar4, 1);
				}
				if (fVar5 <= 7.5f)
				{
					if (((!func_178(*uParam0, 242628503, 1) && !func_178(*uParam0, 1227113341, 1)) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_240(*uParam0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1249);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 2000);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1249, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1249);
						TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_1249);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1249);
						TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					}
				}
				else if (!func_178(*uParam0, 1227113341, 1) || func_240(*uParam0))
				{
					if (fVar7 > 1f)
					{
						fVar8 = 6f;
					}
					else
					{
						fVar8 = 3f;
					}
					TASK::TASK_GO_TO_ENTITY(*uParam0, iVar4, -1, fVar8, fVar7, 1073741824, 0);
					TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (MISC::GET_HASH_KEY(&(uParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar9, 1))
					{
						if (iVar9 != joaat("weapon_unarmed"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), 0);
						}
					}
					if (!func_178(*uParam0, 780511057, 1))
					{
						TASK::TASK_COMBAT_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!func_178(*uParam0, 242628503, 1) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_240(*uParam0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1249);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 2000);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1249, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1249);
						TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_1249);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1249);
						TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (func_102(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!func_178(*uParam0, 1805844857, 1))
				{
					TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				}
			}
			else if ((!func_178(*uParam0, 1805844857, 1) && !func_178(*uParam0, 713668775, 1)) || func_240(*uParam0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 0.25f, 1, 40000f);
			}
			break;
		
		case 4:
			switch (MISC::GET_HASH_KEY(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!func_178(*uParam0, -1519143300, 1) || func_240(*uParam0))
					{
						TASK::TASK_HANDS_UP(*uParam0, -1, PLAYER::PLAYER_PED_ID(), 0, 1);
					}
					break;
			}
			break;
	}
}

void func_242(int iParam0)//Position - 0xDF62
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, 1);
	fVar1 = func_101(PLAYER::PLAYER_PED_ID(), *iParam0, 1);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0))
	{
		iVar3 = 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_249(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_224(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_224(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((PED::HAS_PED_RECEIVED_EVENT(*iParam0, 122) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 123)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 22)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 23)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 86))
	{
		func_224(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (iParam0->f_27 && func_248(4))
	{
		func_224(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_27 && func_247(*iParam0, 2))
	{
		func_224(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((iParam0->f_27 && fVar1 < 8f) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 5))
	{
		func_224(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1291 == 11)
	{
		if (iParam0->f_27)
		{
			func_224(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_246(iParam0, 1, "HEARD_SEC_CAR", Local_45[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1291 == 6)
	{
		if (iParam0->f_27)
		{
			func_224(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_246(iParam0, 1, "HEARD_VAN", Local_45[func_96() /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1291 == 10)
	{
		if (iParam0->f_27)
		{
			func_246(iParam0, 3, "STEALING_VAN", Local_45[func_48() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_246(iParam0, 1, "HEARD_VAN", Local_45[func_48() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 41)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 112)) || func_244(*iParam0, 0))
	{
		func_224(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 101)) || func_244(*iParam0, 1))
	{
		func_224(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_54) && (iParam0->f_27 || iParam0->f_29)) && (fVar1 < 8f || func_102(PLAYER::PLAYER_PED_ID(), Local_57, 1) < 40f))
	{
		if (iParam0->f_27)
		{
			func_224(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_243(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_224(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_224(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (iParam0->f_22 > -1 && iParam0->f_22 < (Local_1075 - 1))
	{
		bVar8 = Local_1075[iParam0->f_22 /*32*/].f_1E;
		switch (MISC::GET_HASH_KEY(&(Local_1075[iParam0->f_22 /*32*/].f_1)))
		{
			case 953441746:
			case 1518302817:
			case -1298712083:
			case 185995093:
			case -1645534839:
			case 880647822:
			case 1921975061:
			case 1376342146:
			case 1681313069:
			case 1156217463:
			case 1682434916:
			case -924218668:
			case 152436526:
			case 600040296:
				func_224(iParam0, 3, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar8);
				break;
			
			case -1225951737:
				func_243(iParam0, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, bVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_246(iParam0, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), Local_45[func_96() /*8*/], 1, 0, bVar8);
				break;
			}
	}
	iParam0->f_22 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!MISC::ARE_STRINGS_EQUAL(&(iParam0->f_19), &(iParam0->f_9)))
	{
		iParam0->f_21 = 1;
	}
	else
	{
		iParam0->f_21 = 0;
	}
	iParam0->f_19 = { iParam0->f_9 };
	switch (iParam0->f_5)
	{
		case 0:
			break;
		
		case 1:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 58299323:
					if ((MISC::GET_GAME_TIMER() - iParam0->f_25) > 3000)
					{
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if (((MISC::GET_GAME_TIMER() - iParam0->f_25) > 4000 && func_102(*iParam0, iParam0->f_58, 1) < 3f) && TASK::IS_PED_STILL(*iParam0))
					{
						func_224(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if ((MISC::GET_GAME_TIMER() - iParam0->f_25) > 4000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
					if ((((MISC::GET_GAME_TIMER() - iParam0->f_26) > 8000 && func_102(PLAYER::PLAYER_PED_ID(), Local_57, 1) > 65f) && (func_101(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 10f || (MISC::GET_GAME_TIMER() - iParam0->f_26) > 16000)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_224(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
				
				case 953441746:
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case 152436526:
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (func_102(PLAYER::PLAYER_PED_ID(), Local_57, 1) > 300f && func_101(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 150f)
					{
						func_224(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_243(int iParam0, int iParam1, char* sParam2, struct<3> Param3, bool bParam4, int iParam5, bool bParam6)//Position - 0xE686
{
	return func_225(iParam0, iParam1, sParam2, Param3, 0, bParam4, iParam5, bParam6);
}

int func_244(struct<110> Param0, int iParam1)//Position - 0xE6A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_27)
	{
		if (func_245(Param0, Local_27[iVar0 /*110*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_245(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220)//Position - 0xE6DA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam110) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam110, PLAYER::PLAYER_PED_ID(), iParam220))
	{
		if (func_101(iParam0, iParam110, 1) < 15f)
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_246(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0xE71E
{
	return func_225(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_247(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)//Position - 0xE73B
{
	if ((iParam0 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam0)) && !PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam110) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_248(int iParam0)//Position - 0xE792
{
	if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam0) && (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())))
	{
		return 1;
	}
	return 0;
}

int func_249(struct<110> Param0, var uParam1, var uParam2, var uParam3)//Position - 0xE7C7
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_27)
	{
		if (func_250(Param0, Local_27[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_27[iVar0 /*110*/].f_55 = 1;
			}
			if (!bVar1)
			{
				bVar1 = true;
				*uParam1 = bVar2;
				*uParam2 = bVar3;
				*uParam3 = bVar4;
			}
			else
			{
				if (bVar2)
				{
					*uParam1 = 1;
				}
				if (bVar3)
				{
					*uParam2 = 1;
				}
				if (bVar4)
				{
					*uParam3 = 1;
				}
			}
			if (Local_27[iVar0 /*110*/].f_55)
			{
				*uParam2 = 1;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_250(struct<40> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, struct<104> Param71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80)//Position - 0xE870
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Param71) && PED::IS_PED_INJURED(Param71))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Param71, 0) };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Param0, 1), Var0, 1) < 10f)
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Param0, Param71))
			{
				if ((MISC::GET_GAME_TIMER() - Param71.f_67) < 3000)
				{
					*uParam78 = 1;
				}
				else
				{
					*uParam78 = 0;
				}
				if (*uParam78)
				{
					iVar1 = PED::GET_PED_SOURCE_OF_DEATH(Param71);
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if ((iVar2 == PLAYER::PLAYER_PED_ID() && !PED::IS_PED_INJURED(iVar2)) && Param0.f_27)
						{
							*uParam79 = 1;
						}
						else
						{
							*uParam79 = 0;
						}
					}
					else
					{
						*uParam79 = 0;
					}
				}
				else
				{
					*uParam79 = 0;
				}
				iVar3 = PED::GET_PED_CAUSE_OF_DEATH(Param71);
				if (iVar3 == joaat("weapon_unarmed") || (iVar3 != joaat("weapon_unarmed") && WEAPON::GET_WEAPON_DAMAGE_TYPE(iVar3) == 2))
				{
					*uParam80 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_251(int iParam0)//Position - 0xE963
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	var uVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<6> Var12;
	bool bVar13;
	var uVar14;
	float fVar15;
	struct<3> Var16;
	struct<3> Var17;
	struct<4> Var18;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, 1);
	fVar1 = func_101(PLAYER::PLAYER_PED_ID(), *iParam0, 1);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0))
	{
		iVar3 = 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar5 = func_249(*iParam0, &uVar6, &bVar7, &bVar8);
	if (((iParam0->f_5 != 5 && uVar5) && uVar6) && !bVar8)
	{
		if (bVar7)
		{
			func_224(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_224(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((PED::HAS_PED_RECEIVED_EVENT(*iParam0, 122) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 123)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 22)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 23)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 86))
	{
		func_224(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((iParam0->f_27 && iParam0->f_5 != 4) && func_248(4))
	{
		func_224(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_27 && func_247(*iParam0, 2))
	{
		func_224(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((iParam0->f_27 && fVar1 < 8f) && iParam0->f_5 != 4) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 5))
	{
		func_224(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1291 == 7)
	{
		if (iParam0->f_27)
		{
			func_224(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_243(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1291 == 6)
	{
		if (iParam0->f_27)
		{
			func_224(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_243(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1291 == 10)
	{
		if (iParam0->f_27)
		{
			func_246(iParam0, 3, "STEALING_VAN", Local_45[func_48() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_246(iParam0, 1, "HEARD_VAN", Local_45[func_48() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 41)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 112)) || func_244(*iParam0, 0))
	{
		func_224(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 101)) || func_244(*iParam0, 1))
	{
		func_224(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_54) && (iParam0->f_27 || iParam0->f_29)) && (fVar1 < 8f || func_102(PLAYER::PLAYER_PED_ID(), Local_57, 1) < 40f))
	{
		if (iParam0->f_27)
		{
			func_224(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_243(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar5)
	{
		if ((uVar6 && bVar7) && bVar8)
		{
			func_224(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar7)
		{
			func_224(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((iParam0->f_27 || iParam0->f_29) && (iParam0->f_56 || iParam0->f_57)) && iLocal_1291 == 9) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "CHECK_DRIVER")) && func_102(PLAYER::PLAYER_PED_ID(), Local_57, 1) < 15f)
	{
		if (iParam0->f_27)
		{
			func_246(iParam0, 1, "SEE_VAN_LEAVING", Local_45[func_96() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_246(iParam0, 1, "HEARD_VAN", Local_45[func_96() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_1291 != 9)
	{
		if ((iParam0->f_56 && (((iLocal_1291 == 0 || iLocal_1291 == 1) || iLocal_1291 == 4) || iParam0->f_5 == 1)) || (iParam0->f_57 && ((iLocal_1291 == 3 || iLocal_1291 == 2) || iLocal_1291 == 5)))
		{
			if ((iLocal_1291 == 5 || iLocal_1291 == 4) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(*iParam0, iLocal_1294, 19))
			{
				switch (iLocal_1291)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_224(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_27)
			{
				switch (iLocal_1291)
				{
					case 0:
						StringCopy(&Var4, "ENT_FOOT", 64);
						break;
					
					case 1:
						StringCopy(&Var4, "ENT_VEH", 64);
						break;
					
					case 2:
						StringCopy(&Var4, "WH_FOOT", 64);
						break;
					
					case 3:
						StringCopy(&Var4, "WH_VEH", 64);
						break;
					
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
					
					case -1:
						if (iParam0->f_5 == 1)
						{
							StringCopy(&Var4, "ENT_FOOT", 64);
						}
						break;
				}
				func_224(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_29)
			{
				func_243(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
			}
		}
	}
	if (iParam0->f_22 > -1 && iParam0->f_22 < (Local_1075 - 1))
	{
		bVar9 = Local_1075[iParam0->f_22 /*32*/].f_1E;
		switch (MISC::GET_HASH_KEY(&(Local_1075[iParam0->f_22 /*32*/].f_1)))
		{
			case 953441746:
			case 1518302817:
			case -1298712083:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 5, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 185995093:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 3, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1645534839:
				if (iParam0->f_5 != 4)
				{
					if (func_102(*iParam0, Local_1075[iParam0->f_22 /*32*/].f_17, 1) < 5f)
					{
						func_224(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar9);
					}
					else
					{
						func_224(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar9);
					}
				}
				break;
			
			case 880647822:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 5, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1921975061:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 5, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1376342146:
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 3, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((iParam0->f_5 != 4 && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "STEALING_VAN")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "GET_IN_VAN")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_224(iParam0, 3, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 152436526:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 5, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -426892158:
				if (iParam0->f_56)
				{
					func_224(iParam0, 2, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1461435341:
				if (iParam0->f_56)
				{
					func_224(iParam0, 2, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -972653884:
				if (iParam0->f_57)
				{
					func_224(iParam0, 2, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -520621538:
				if (iParam0->f_57)
				{
					func_224(iParam0, 2, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1349994105:
				if (iParam0->f_57)
				{
					func_224(iParam0, 2, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1225951737:
				if (iParam0->f_57)
				{
					func_243(iParam0, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, bVar9);
				}
				break;
			
			case 2074432461:
				if (iParam0->f_57)
				{
					func_246(iParam0, 1, &(Local_1075[iParam0->f_22 /*32*/].f_1), Local_45[func_96() /*8*/], 1, 0, bVar9);
				}
				break;
			}
	}
	iParam0->f_22 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!MISC::ARE_STRINGS_EQUAL(&(iParam0->f_19), &(iParam0->f_9)))
	{
		iParam0->f_21 = 1;
	}
	else
	{
		iParam0->f_21 = 0;
	}
	iParam0->f_19 = { iParam0->f_9 };
	iVar10 = 0;
	while (iVar10 < Local_27)
	{
		if (Local_27[iVar10 /*110*/] == *iParam0)
		{
			iVar11 = iVar10;
		}
		iVar10++;
	}
	switch (iParam0->f_5)
	{
		case 5:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 152436526:
				case 1921975061:
				case 880647822:
				case 953441746:
				case 1518302817:
				case -1298712083:
					if ((func_256(*iParam0) || (iParam0->f_30 % 2) == 0) || !func_168(Local_28))
					{
						if ((MISC::GET_HASH_KEY(&(iParam0->f_9)) == 152436526 || MISC::GET_HASH_KEY(&(iParam0->f_9)) == 1921975061) || MISC::GET_HASH_KEY(&(iParam0->f_9)) == 880647822)
						{
							if (func_233(iVar11))
							{
								Var12 = { func_255(iVar11, "JS_GUN1") };
								if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_30 == 0)
								{
									func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_ARM1", 24);
										break;
									
									case 3:
										StringCopy(&Var12, "SOL1_ARM2", 24);
										break;
								}
								if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_30 == 0)
								{
									func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((MISC::GET_HASH_KEY(&(iParam0->f_9)) == 953441746 || MISC::GET_HASH_KEY(&(iParam0->f_9)) == 1518302817) || MISC::GET_HASH_KEY(&(iParam0->f_9)) == -1298712083)
						{
							if (func_233(iVar11))
							{
								Var12 = { func_255(iVar11, "JS_KILL") };
								if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_30 == 0)
								{
									func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (iParam0->f_30 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						iParam0->f_30++;
					}
					else
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_GETSEC") };
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_30 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SECIN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SECIN2", 24);
									break;
							}
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_30 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						iParam0->f_30++;
					}
					break;
			}
			break;
		
		case 4:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 1224761252:
					if (func_247(*iParam0, 4))
					{
						func_224(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((MISC::GET_GAME_TIMER() - iParam0->f_25) > 1000)
					{
						func_224(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_247(*iParam0, 4))
					{
						func_224(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((MISC::GET_GAME_TIMER() - iParam0->f_25) > 15000 || (MISC::GET_GAME_TIMER() - iParam0->f_26) > 3000) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_224(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_256(*iParam0) || iParam0->f_30 == 0)
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_HND1") };
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_30 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_30 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_30++;
					}
					else
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_HND1") };
							if (func_230(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_30 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_230(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_30 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_30++;
					}
					break;
			}
			break;
		
		case 0:
			switch (iVar11)
			{
				case 1:
					if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 5000)
					{
						switch (iLocal_1274)
						{
							case 0:
								func_230(iVar11, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1274++;
								break;
							
							case 1:
								func_230(iVar11, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1274++;
								break;
							
							case 2:
								func_230(iVar11, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1274++;
								break;
							
							case 3:
								func_230(iVar11, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1274++;
								break;
							
							case 4:
								func_230(iVar11, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1274++;
								break;
							
							case 5:
								func_230(iVar11, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1274++;
								break;
							
							case 6:
								func_230(iVar11, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1274++;
								break;
							
							case 7:
								func_230(iVar11, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1274++;
								break;
							
							case 8:
								func_230(iVar11, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1274++;
								break;
							
							case 9:
								func_230(iVar11, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1274++;
								break;
							
							case 10:
								func_230(iVar11, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1274 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!iParam0->f_31)
					{
						if (func_230(iVar11, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							func_40(&uLocal_1081, 4, Local_27[2 /*110*/], "CONSTRUCTION1", 0, 1);
							func_40(&uLocal_1081, 3, Local_27[3 /*110*/], "CONSTRUCTION2", 0, 1);
							iParam0->f_31 = 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				Var16 = { func_253(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1f, 0f) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
				Var17 = { func_253(ENTITY::GET_ENTITY_COORDS(Local_27[iVar11 /*110*/], 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
				uVar14 = func_252(Var16, Var17);
				fVar15 = MISC::ACOS(uVar14);
				if ((fVar15 < 90f && fVar1 < 8f) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
				{
					bVar13 = true;
				}
			}
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_256(*iParam0) && MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_VAN_LVE1") };
							func_230(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar13)
					{
						func_246(iParam0, 1, "CHECK_DRIVER", Local_45[func_96() /*8*/], 0, 1, 0);
					}
					else if (func_102(PLAYER::PLAYER_PED_ID(), Local_57, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_224(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_256(*iParam0))
					{
						Var12 = { func_255(iVar11, "JS_VAN_LVE2") };
						func_230(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((MISC::GET_GAME_TIMER() - iParam0->f_25) > 3000)
					{
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (bVar13)
					{
						if ((MISC::GET_GAME_TIMER() - iParam0->f_25) > 2000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
						{
							func_224(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_246(iParam0, 1, "SEE_VAN_LEAVING_1", Local_45[func_96() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if (((MISC::GET_GAME_TIMER() - iParam0->f_25) > 4000 && func_102(*iParam0, iParam0->f_58, 1) < 3f) && TASK::IS_PED_STILL(*iParam0))
					{
						func_224(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_256(*iParam0))
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_SND_INV") };
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if ((MISC::GET_GAME_TIMER() - iParam0->f_25) > 4000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_SNDLOST2") };
							func_230(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_256(*iParam0))
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_SNDLOST1") };
							func_230(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((MISC::GET_GAME_TIMER() - iParam0->f_26) > 8000 && func_102(PLAYER::PLAYER_PED_ID(), Local_57, 1) > 65f) && (func_101(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 10f || (MISC::GET_GAME_TIMER() - iParam0->f_26) > 16000)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_224(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_256(*iParam0) && iParam0->f_23)
					{
						if (!iParam0->f_54)
						{
							if (func_233(iVar11))
							{
								Var12 = { func_255(iVar11, "JS_MELE_1") };
								if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_FIGHT1", 24);
										break;
									
									case 3:
										StringCopy(&Var12, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							iParam0->f_54 = 1;
						}
						else if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_MELE_2") };
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_FIGHT1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if ((MISC::GET_GAME_TIMER() - iParam0->f_25) > 4000)
					{
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_256(*iParam0))
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_MELE_ESC") };
							func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if (((((MISC::GET_GAME_TIMER() - iParam0->f_25) > 2000 && iParam0->f_27) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)) && iLocal_1291 != 9) && iLocal_1291 != 10)
					{
						func_224(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_256(*iParam0))
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_VAN_IN2") };
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 2000)
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_VAN_TK") };
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_256(*iParam0))
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_VAN_IN1") };
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 2000)
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_VAN_TK") };
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_256(*iParam0))
					{
						if (func_233(iVar11))
						{
							Var12 = { func_255(iVar11, "JS_VAN_IN2") };
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_26) > 5000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
			{
				if (iVar11 == 1)
				{
					func_230(iVar11, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_1274 = 0;
				}
				func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (iParam0->f_27)
				{
					if ((MISC::GET_GAME_TIMER() - iParam0->f_26) > 1000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						if (((MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "ENT_FOOT") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "ENT_VEH")) || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_FOOT")) || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_VEH"))
						{
							Var18 = { iParam0->f_9 };
							StringConCat(&Var18, "_LEAVE", 32);
							func_224(iParam0, 2, 0, &Var18, 1, 0);
						}
					}
					if ((MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_FOOT") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_VEH")) || (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_DITCH_VEH") && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)))
					{
						if (((iParam0->f_68 >= 6 && iLocal_1247 != -1) && (MISC::GET_GAME_TIMER() - iLocal_1247) > 7000) && (MISC::GET_GAME_TIMER() - iParam0->f_26) == 0)
						{
							func_224(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
				{
					case -426892158:
						if (func_256(*iParam0))
						{
							if (!iParam0->f_52)
							{
								if (func_233(iVar11))
								{
									if (!iParam0->f_53)
									{
										Var12 = { func_255(iVar11, "JS_ENT_F1") };
										func_230(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var12 = { func_255(iVar11, "JS_ENT_F1_P") };
										func_230(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_233(iVar11))
							{
								if (!iParam0->f_53)
								{
									Var12 = { func_255(iVar11, "JS_ENT_F2") };
									func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var12 = { func_255(iVar11, "JS_ENT_F2_P") };
									func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							iParam0->f_52 = 1;
						}
						else if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 5000)
						{
							if (func_233(iVar11))
							{
								if (!iParam0->f_53)
								{
									Var12 = { func_255(iVar11, "JS_ENT_F") };
									func_230(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var12 = { func_255(iVar11, "JS_ENT_F_P") };
									func_230(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_256(*iParam0) || iParam0->f_30 == 0)
						{
							if (!iParam0->f_52)
							{
								if (func_233(iVar11))
								{
									Var12 = { func_255(iVar11, "JS_ENT_V1") };
									if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										iParam0->f_30++;
									}
								}
								iParam0->f_52 = 1;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_11), "WH_VEH"))
							{
								if (func_233(iVar11))
								{
									Var12 = { func_255(iVar11, "JS_ENT_V") };
									if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										iParam0->f_30++;
									}
								}
							}
							else if (func_233(iVar11))
							{
								Var12 = { func_255(iVar11, "JS_ENT_V3") };
								if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									iParam0->f_30++;
								}
							}
						}
						else if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 5000)
						{
							if (func_233(iVar11))
							{
								Var12 = { func_255(iVar11, "JS_ENT_V3") };
								func_230(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_256(*iParam0))
						{
							if (iParam0->f_68 == 0)
							{
								if (func_233(iVar11))
								{
									Var12 = { func_255(iVar11, "JS_WH1") };
									if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
							else if (iParam0->f_68 > 0)
							{
								if (func_233(iVar11))
								{
									Var12 = { func_255(iVar11, "JS_WH2") };
									if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
							iParam0->f_52 = 1;
						}
						else if (iParam0->f_68 < 6)
						{
							if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 5000)
							{
								if (func_233(iVar11))
								{
									if (iParam0->f_68 < 5)
									{
										Var12 = { func_255(iVar11, "JS_WH") };
									}
									else
									{
										Var12 = { func_255(iVar11, "JS_WH_F") };
									}
									if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_256(*iParam0))
						{
							if (iParam0->f_68 == 0)
							{
								if (func_233(iVar11))
								{
									Var12 = { func_255(iVar11, "JS_WH1") };
									if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
							else if (iParam0->f_68 > 0)
							{
								if (func_233(iVar11))
								{
									Var12 = { func_255(iVar11, "JS_WH2") };
									if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
							iParam0->f_52 = 1;
						}
						else if (iParam0->f_68 < 6)
						{
							if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 5000)
							{
								if (func_233(iVar11))
								{
									if (iParam0->f_68 < 5)
									{
										if (((iParam0->f_68 - 1) % 2) == 0)
										{
											Var12 = { func_255(iVar11, "JS_ENT_V4") };
										}
										else
										{
											Var12 = { func_255(iVar11, "JS_ENT_V3") };
										}
									}
									else
									{
										Var12 = { func_255(iVar11, "JS_WH_F") };
									}
									if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_256(*iParam0))
						{
							if (iParam0->f_68 == 0)
							{
								if (func_233(iVar11))
								{
									Var12 = { func_255(iVar11, "JS_WH1") };
									if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
							else if (iParam0->f_68 > 0)
							{
								if (func_233(iVar11))
								{
									Var12 = { func_255(iVar11, "JS_WH2") };
									if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
							iParam0->f_52 = 1;
						}
						else if (iParam0->f_68 < 6)
						{
							if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 5000)
							{
								if (func_233(iVar11))
								{
									if (iParam0->f_68 < 5)
									{
										if (((iParam0->f_68 - 1) % 2) == 0)
										{
											Var12 = { func_255(iVar11, "JS_ENT_V3") };
										}
										else
										{
											Var12 = { func_255(iVar11, "JS_WH") };
										}
									}
									else
									{
										Var12 = { func_255(iVar11, "JS_WH_F") };
									}
									if (func_230(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
						}
						break;
					
					case 778765338:
						if (iParam0->f_30 == 0)
						{
							if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 1000)
							{
								if (func_233(iVar11))
								{
									Var12 = { func_255(iVar11, "JS_ENT_V4") };
									func_230(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_30++;
							}
						}
						else if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 5000)
						{
							if (((iParam0->f_30 - 1) % 3) == 0)
							{
								Var12 = { func_255(iVar11, "JS_ENT_V4") };
							}
							else
							{
								Var12 = { func_255(iVar11, "JS_ENT_V3") };
							}
							func_230(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							iParam0->f_30++;
						}
						break;
					
					case 1580556320:
						if (iParam0->f_30 == 0)
						{
							if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 1000)
							{
								if (func_233(iVar11))
								{
									if (!iParam0->f_53)
									{
										Var12 = { func_255(iVar11, "JS_ENT_F3") };
										func_230(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var12 = { func_255(iVar11, "JS_ENT_F3_P") };
										func_230(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
								}
								iParam0->f_30++;
							}
						}
						break;
					
					case -1697689838:
					case -628260985:
					case -1891358342:
						if (iParam0->f_30 == 0)
						{
							if (func_43() && (MISC::GET_GAME_TIMER() - iLocal_1247) > 1000)
							{
								if (func_233(iVar11))
								{
									Var12 = { func_255(iVar11, "JS_ENT_V5") };
									func_230(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_30++;
							}
						}
						break;
					}
			}
			break;
	}
}

float func_252(struct<3> Param0, struct<3> Param1)//Position - 0x11036
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_253(struct<3> Param0)//Position - 0x11057
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

void func_254(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x11096
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_27)
	{
		if (Local_27[iVar0 /*110*/] == *iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	iParam0->f_32 = iVar1;
	StringCopy(&(iParam0->f_32.f_1), sParam1, 64);
	StringCopy(&(iParam0->f_32.f_11), sParam2, 24);
	iParam0->f_32.f_1C = iParam4;
	iParam0->f_32.f_1A = fParam3;
	iParam0->f_32.f_1D = iParam5;
	iParam0->f_32.f_1E = iParam7;
	iParam0->f_32.f_1F = iParam8;
	if (bParam6)
	{
		func_227(&(iParam0->f_32), 0);
	}
}

struct<6> func_255(int iParam0, char* sParam1)//Position - 0x11112
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_256(struct<34> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76)//Position - 0x11132
{
	if (Param0.f_8 || Param0.f_21)
	{
		return 1;
	}
	return 0;
}

void func_257(int iParam0)//Position - 0x11150
{
	if (PED::CAN_PED_SEE_HATED_PED(*iParam0, PLAYER::PLAYER_PED_ID()))
	{
		iParam0->f_28 = MISC::GET_GAME_TIMER();
		iParam0->f_27 = 1;
	}
	else if ((MISC::GET_GAME_TIMER() - iParam0->f_28) > 2000 || !PED::IS_PED_FACING_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 90f))
	{
		iParam0->f_28 = MISC::GET_GAME_TIMER();
		iParam0->f_27 = 0;
	}
	if (iParam0->f_27)
	{
		bLocal_1288 = false;
	}
	if (bLocal_1288)
	{
		PED::SET_PED_RESET_FLAG(*iParam0, 188, 1);
	}
	if (!func_258())
	{
		iParam0->f_29 = PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), *iParam0);
		if (iParam0->f_29)
		{
			iParam0->f_2B = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
	}
	else
	{
		iParam0->f_29 = 0;
	}
	switch (iParam0->f_5)
	{
		case 5:
		case 4:
		case 3:
			iParam0->f_66 = 1;
			break;
		
		default:
			iParam0->f_66 = 0;
			break;
	}
}

int func_258()//Position - 0x11225
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45[iVar0 /*8*/], 0))
		{
			if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(Local_45[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_259()//Position - 0x11271
{
	struct<3> Var0;
	var uVar1;
	
	PED::ADD_RELATIONSHIP_GROUP("BUGSTAR", &iLocal_1248);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1862763509, iLocal_1248);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1248, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1248);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1248, joaat("COP"));
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f));
	MISC::CLEAR_AREA(138.43f, -3092.47f, 4.9f, 28.375f, 1, 0, 0, 0);
	if (func_182() || func_6(0))
	{
		iLocal_66 = 0;
		if (func_182())
		{
			if (Global_14A40)
			{
				iLocal_66++;
			}
		}
		if (func_182())
		{
			func_211(iLocal_66, &Var0, &uVar1);
			func_265(Var0, uVar1, 1, 0);
		}
		bLocal_65 = true;
	}
	else
	{
		while (!func_177(1))
		{
			SYSTEM::WAIT(0);
			func_264(&uLocal_69);
		}
	}
	func_263(&uLocal_69, "JHP1A", 0);
	func_206(&uLocal_69, "misslsdhsclipboard@base");
	func_206(&uLocal_69, "misslsdhsclipboard@idle_a");
	func_206(&uLocal_69, "misstrevor3");
	func_160(&uLocal_69, joaat("p_amb_clipboard_01"));
	func_205(&uLocal_69, iLocal_1250);
	func_207(&uLocal_69, &cLocal_58);
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.15f);
	func_261(87);
	func_40(&uLocal_1081, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	func_40(&uLocal_1081, 3, 0, "LESTER", 0, 1);
	func_229(bLocal_1246);
	func_260();
	iLocal_1250 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_57, "po1_08_warehouseint1");
	AUDIO::PREPARE_ALARM(&cLocal_48);
	iLocal_1296 = PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_260()//Position - 0x114A8
{
	Global_14A41 = 1;
}

void func_261(int iParam0)//Position - 0x114B5
{
	Global_150CE = 0;
	switch (iParam0)
	{
		case 72:
			func_262(2);
			func_262(4);
			break;
		
		case 73:
			func_262(0);
			func_262(1);
			func_262(7);
			break;
		
		case 92:
			func_262(10);
			func_262(9);
			func_262(13);
			func_262(6);
			break;
		
		case 68:
			func_262(11);
			break;
		
		case 78:
			func_262(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_262(3);
			break;
		
		default:
			break;
	}
}

void func_262(int iParam0)//Position - 0x11543
{
	MISC::SET_BIT(&Global_150CE, iParam0);
}

int func_263(var uParam0, char* sParam1, int iParam2)//Position - 0x11555
{
	if (uParam0->f_30B[iParam2 /*5*/].f_1 || uParam0->f_30B[iParam2 /*5*/])
	{
		if (MISC::ARE_STRINGS_EQUAL(uParam0->f_30B[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_30B[iParam2 /*5*/].f_2 = 0;
			uParam0->f_3D1 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 10)
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(sParam1, iParam2);
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
		}
		uParam0->f_30B[iParam2 /*5*/] = 1;
		uParam0->f_30B[iParam2 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_30B[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_3D1 = 1;
		return 1;
	}
	return 0;
}

void func_264(var uParam0)//Position - 0x115F9
{
	func_213(uParam0);
}

void func_265(struct<3> Param0, var uParam1, int iParam2, int iParam3)//Position - 0x11608
{
	if (func_182())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		MISC::CLEAR_BIT(&(Global_15F6A.f_14), 2);
		MISC::SET_GAME_PAUSED(1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		Global_15F66 = { Param0 };
		Global_15F69 = uParam1;
		Global_15F65 = 1;
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(Global_15F6A.f_14), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_15F6A.f_14), 14);
		}
		if (iParam3 == 1)
		{
			MISC::SET_BIT(&(Global_15F6A.f_14), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_15F6A.f_14), 24);
		}
		func_181(1);
	}
}

void func_266(int iParam0)//Position - 0x1169D
{
	struct<3> Var0;
	char[] cVar1[8];
	
	if (iParam0 == 6)
	{
		func_278();
		func_8(0);
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (!bLocal_67)
	{
		bLocal_67 = true;
		iLocal_68 = iParam0;
		switch (iLocal_68)
		{
			case 1:
				StringCopy(&Var0, "JHP1A_VAN_DEAD", 24);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP1A_VAN_STUCK", 24);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP1A_VANS_DEAD", 24);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP1A_VAN_ABAN", 24);
				break;
			
			case 5:
				StringCopy(&Var0, "JHP1A_ABAN", 24);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP1A_FF", 24);
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
			func_276(&Var0);
		}
		else
		{
			func_267(&Var0, &cVar1);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
	}
}

void func_267(char* sParam0, char* sParam1)//Position - 0x11763
{
	func_275(sParam0, sParam1);
	func_268(0);
}

void func_268(int iParam0)//Position - 0x11778
{
	int iVar0;
	
	if (Global_17C49.f_1CAD || func_6(0))
	{
		iVar0 = func_4();
		if (!func_269(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 5);
		Global_15F8E = iParam0;
	}
}

int func_269(int iParam0)//Position - 0x117BD
{
	int iVar0;
	int iVar1;
	
	func_274();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_13CDF[iParam0 /*5*/];
	iVar1 = Global_10BA2.f_6D[iVar0 /*4*/];
	func_273(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_270(&(Global_17C49.f_6C1.f_21B), iVar1);
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

void func_270(var uParam0, int iParam1)//Position - 0x118D4
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
			if (!func_272(Global_17C49.f_4193[iVar0], &Var2, &fVar3))
			{
				Global_17C49.f_4193[iVar0] = 318;
				func_271(&(uParam0->f_5F4[iVar0]));
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

void func_271(var uParam0)//Position - 0x11A9D
{
	*uParam0 = -15;
}

int func_272(int iParam0, var uParam1, float fParam2)//Position - 0x11AAB
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
			return func_272(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_272(8, uParam1, fParam2);
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

void func_273(int iParam0, bool bParam1)//Position - 0x1241A
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

void func_274()//Position - 0x12458
{
	Global_15F8D = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_155())
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
			switch (func_155())
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

void func_275(char* sParam0, char* sParam1)//Position - 0x12545
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1) <= 16)
			{
				StringCopy(&Global_10B7D, sParam0, 16);
				StringCopy(&Global_10B81, sParam1, 16);
			}
		}
	}
}

void func_276(char* sParam0)//Position - 0x12583
{
	func_277(sParam0);
	func_268(0);
}

void func_277(char* sParam0)//Position - 0x12596
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

void func_278()//Position - 0x125D5
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_17C49.f_1CAD || func_6(0))
	{
		if (!func_279())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_269(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_274();
		}
	}
}

int func_279()//Position - 0x12646
{
	if (((Global_15F6A == 13 || Global_15F6A == 10) || Global_15F6A == 11) || Global_15F6A == 12)
	{
		return 0;
	}
	return 1;
}

