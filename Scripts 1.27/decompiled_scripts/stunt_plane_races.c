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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	struct<3> Local_29 = { 0, 0, 0 } ;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<304> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 4;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 4;
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
	var uLocal_90 = 4;
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
	var uLocal_105 = 4;
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
	var uLocal_120 = 4;
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
	var uLocal_135 = 4;
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
	var uLocal_150 = 4;
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
	var uLocal_165 = 4;
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
	struct<3> Local_183 = { 0, 0, 0 } ;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	bool bLocal_189 = 0;
	bool bLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195[5] = { 0, 0, 0, 0, 0 };
	float fLocal_196 = 0f;
	float fLocal_197 = 0f;
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
	var uLocal_212 = 8;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 2;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 8;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 8;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	float fLocal_242 = 0f;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	bool bLocal_245 = 0;
	var uLocal_246 = 35;
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
	var uLocal_271 = 0;
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
	var uLocal_562 = 50;
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
	var uLocal_666 = 40;
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
	var uLocal_994 = 0;
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
	var uLocal_1020 = 0;
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
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
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
	var uLocal_1222 = 1;
	var uLocal_1223 = 0;
	var uLocal_1224 = 1;
	var uLocal_1225 = 1;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 1;
	var uLocal_1230 = 1;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 3;
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
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 4;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 2;
	var uLocal_1347 = 0;
	var uLocal_1348 = 4;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 4;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 12;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 3;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	int iLocal_1670 = 0;
	var uLocal_1671 = 0;
	int iLocal_1672 = 0;
	int iLocal_1673 = 0;
	int iLocal_1674 = 0;
	int iLocal_1675 = 0;
	int iLocal_1676 = 0;
	int iLocal_1677 = 0;
	int iLocal_1678 = 0;
	int iLocal_1679 = 0;
	int iLocal_1680 = 0;
	int iLocal_1681 = 0;
	int iLocal_1682 = 0;
	int iLocal_1683 = 0;
	int iLocal_1684 = 0;
	int iLocal_1685 = 0;
	int iLocal_1686 = 0;
	int iLocal_1687 = 0;
	int iLocal_1688 = 0;
	int iLocal_1689 = 0;
	int iLocal_1690 = 0;
	int iLocal_1691 = 0;
	int iLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	int iLocal_1736[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1737[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1738[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	int iLocal_1741 = 0;
	float fLocal_1742 = 0f;
	int iLocal_1743 = 0;
	int iLocal_1744 = 0;
	int iLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 16;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	char* sLocal_1915 = NULL;
	float fLocal_1916 = 0f;
	float fLocal_1917 = 0f;
	bool bLocal_1918 = 0;
	bool bLocal_1919 = 0;
	struct<3> Local_1920 = { 0, 0, 0 } ;
	struct<3> Local_1921 = { 0, 0, 0 } ;
	struct<3> Local_1922 = { 0, 0, 0 } ;
	float fLocal_1923 = 0f;
	float fLocal_1924 = 0f;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = -1;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 1000;
	var uLocal_1935 = 1000;
	var uLocal_1936 = 0;
	char[] cLocal_1937[8] = 0;
	char* sLocal_1938 = NULL;
	bool bLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	bool bLocal_1949 = 0;
	int iLocal_1950 = 0;
	int iLocal_1951 = 0;
	struct<7> Local_1952 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	int iLocal_1958 = 0;
	var uLocal_1959 = 0;
	char* sLocal_1960 = NULL;
	char* sLocal_1961 = NULL;
	char* sLocal_1962 = NULL;
	struct<3> Local_1963 = { 0, 0, 0 } ;
	struct<3> Local_1964 = { 0, 0, 0 } ;
	int iLocal_1965 = 0;
	int iLocal_1966 = 0;
	int iLocal_1967 = 0;
	int iLocal_1968 = 0;
	int iLocal_1969 = 0;
	int iLocal_1970 = 0;
	int iLocal_1971 = 0;
	int iLocal_1972 = 0;
	struct<7> Local_1973 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 1132396544;
	var uLocal_1978 = 1132396544;
	var uLocal_1979 = 1132396544;
	var uLocal_1980 = 0;
	var uLocal_1981 = -1082130432;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 8;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = -1;
	var uLocal_2042 = 1092616192;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	int iLocal_2051 = 0;
	int iLocal_2052 = 0;
	bool bLocal_2053 = 0;
	bool bLocal_2054 = 0;
	var uLocal_2055 = 0;
	bool bLocal_2056 = 0;
	int iLocal_2057 = 0;
	struct<2863> Local_2058 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2059 = 1;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	struct<3> Local_2064 = { 0, 0, 0 } ;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	iLocal_27 = 3;
	fLocal_28 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_36 = 1;
	iLocal_37 = 65;
	iLocal_38 = 49;
	iLocal_39 = 64;
	Local_42 = { 1691.228f, 3251.785f, 44.2574f };
	Local_43 = { 2.5652f, 0f, -4.1481f };
	Local_183 = { 500f, 500f, 500f };
	iLocal_184 = -1;
	iLocal_193 = 1;
	fLocal_196 = 0.008f;
	fLocal_197 = 0.013f;
	fLocal_242 = ((0.05f + 0.275f) - 0.01f);
	fLocal_1742 = -1f;
	iLocal_1743 = 1;
	fLocal_1916 = 0.2f;
	fLocal_1917 = 0.2f;
	fLocal_1924 = 0f;
	cLocal_1937 = "SPR_UI_FAILD";
	sLocal_1938 = "SPR_UI_FRETRY";
	sLocal_1960 = "CHECKPOINT_NORMAL";
	sLocal_1961 = "CHECKPOINT_MISSED";
	sLocal_1962 = "CHECKPOINT_PERFECT";
	Local_1963 = { 1694.74f, 3276.502f, 41.2796f };
	Local_1964 = { 8.79494f, 0.59893f, 154.8464f };
	bLocal_2053 = true;
	bLocal_2054 = true;
	bLocal_2056 = true;
	Local_2064 = { -1497.708f, -3449.576f, 7.3477f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114))
	{
		func_567();
	}
	MISC::SET_MISSION_FLAG(1);
	Local_1973.f_1 = 0;
	Local_1973.f_5 = 0;
	Local_1973.f_6 = 0;
	while (true)
	{
		func_566();
		switch (Local_1973.f_1)
		{
			case 0:
				if (!func_555())
				{
					Local_1973.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_1973.f_1 = 2;
				}
				break;
			
			case 2:
				func_567();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x1CA
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_44.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_44.f_1))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_44.f_1, 0))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					Local_44.f_1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		Local_44.f_1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		Local_44.f_1 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, joaat("stunt"), 0);
	}
	if (Local_2058.f_B2D != 0)
	{
		Local_2058.f_B2E = (Local_2058.f_B2E - 25);
		if (Local_2058.f_B2E <= 0)
		{
			GRAPHICS::DELETE_CHECKPOINT(Local_2058.f_B2D);
			Local_2058.f_B2D = 0;
			bLocal_1939 = false;
		}
		else
		{
			if (bLocal_1939)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			func_552(func_553(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(Local_2058.f_B2D, uVar0, uVar1, uVar2, func_551(SYSTEM::CEIL((1.5f * IntToFloat(Local_2058.f_B2E))), 255));
			GRAPHICS::SET_CHECKPOINT_RGBA2(Local_2058.f_B2D, uVar0, uVar1, uVar2, Local_2058.f_B2E);
		}
	}
	func_550();
	TASK::SET_EXCLUSIVE_SCENARIO_GROUP("AMMUNATION");
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	if (Local_1973.f_6 == 4)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44.f_1, 0))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(Local_44.f_1))
			{
				FIRE::STOP_ENTITY_FIRE(Local_44.f_1);
			}
		}
	}
	switch (Local_1973.f_6)
	{
		case 0:
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			Local_1973 = -1;
			Local_44.f_A = 0;
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1734.802f, 3224.105f, 41.3709f, 1762.067f, 3258.69f, 40.5188f, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_44.f_1))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_44.f_1, 1);
				Local_2058.f_B2B = 0;
				Local_1973.f_6 = 3;
			}
			else
			{
				Local_1973.f_6 = 1;
			}
			break;
		
		case 1:
			Local_1973.f_6 = 18;
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_44.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 512);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_44.f_1, 1);
				Local_2058.f_B2B = 0;
				Local_1973.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2058)
			{
			}
			else if ((CAM::DOES_CAM_EXIST(uLocal_1729) && CAM::IS_CAM_ACTIVE(uLocal_1729)) && CAM::IS_SCREEN_FADED_IN())
			{
				if (CAM::DOES_CAM_EXIST(Local_2058.f_B2A))
				{
					CAM::DESTROY_CAM(Local_2058.f_B2A, 0);
				}
				GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionOut");
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, 1);
				Local_2058.f_B2A = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_42, Local_43, 34.9705f, 1, 2);
				CAM::SET_CINEMATIC_MODE_ACTIVE(0);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, 0);
				CAM::SET_CAM_COORD(uLocal_1729, Local_42.x, Local_42.f_1, (Local_42.f_2 + 1000f));
				CAM::SET_CAM_ROT(uLocal_1729, 90f, Local_43.f_1, Local_43.f_2, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_2058.f_B2A, uLocal_1729, 500, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			else
			{
				func_549(500);
				if (CAM::DOES_CAM_EXIST(Local_2058.f_B2A))
				{
					CAM::DESTROY_CAM(Local_2058.f_B2A, 0);
				}
				Local_2058.f_B2A = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_42, Local_43, 34.9705f, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			func_548(&uLocal_1953);
			func_547(1);
			STREAMING::CLEAR_FOCUS();
			Local_1973.f_6 = 4;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_44.f_1))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_44.f_1, 1, 0);
			}
			if (MISC::IS_PC_VERSION())
			{
				PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
			}
			PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
			HUD::DISPLAY_RADAR(0);
			Local_2058.f_2 = Local_2058;
			if (Local_2058)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2058.f_166[0 /*189*/].f_9))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2058.f_166[0 /*189*/].f_9, 4);
				}
				iLocal_1673 = 0;
				Local_2058 = 0;
				func_516();
				Local_1973.f_6 = 8;
			}
			else if (Local_2058.f_B2B)
			{
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					if ((Local_2058.f_B2B && PAD::IS_CONTROL_JUST_RELEASED(2, 202)) && SYSTEM::TIMERA() > 500)
					{
						AUDIO::PLAY_SOUND(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2058.f_B2B = 0;
						Local_2058.f_B2C = 1;
						func_515(&(Local_44.f_77));
						SYSTEM::SETTIMERA(0);
					}
					if (!Local_2058.f_B2C && func_514(&uLocal_1233))
					{
						Local_2058.f_B2C = 1;
						func_512(Local_2058.f_B2C);
					}
					func_450(&(Local_44.f_76), Global_1787F, &(Local_44.f_18[Global_1787F /*8*/]));
				}
				else if (func_440(&iLocal_1670, 0))
				{
					Local_2058.f_B2B = 0;
					iLocal_1670 = 0;
					func_515(&(Local_44.f_77));
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if ((func_407(&Local_2058, 0) && !iLocal_191) && !bLocal_190)
				{
					func_515(&(Local_44.f_77));
				}
				if (iLocal_194 && PLAYER::IS_PLAYER_ONLINE())
				{
					func_515(&(Local_44.f_77));
					iLocal_194 = 0;
				}
				if ((((!Local_2058.f_B2B && !iLocal_191) && !bLocal_190) && (iLocal_193 || !PLAYER::IS_PLAYER_ONLINE())) && (PAD::IS_CONTROL_JUST_RELEASED(2, 211) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 211)))
				{
					Local_2058.f_B2B = 1;
					AUDIO::PLAY_SOUND(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					func_406(&uLocal_1233);
					Local_2058.f_B2C = func_514(&uLocal_1233);
					func_512(Local_2058.f_B2C);
					SYSTEM::SETTIMERA(0);
				}
				if (func_347(&uLocal_2059, &(Local_2058.f_1)))
				{
					iLocal_1673 = 0;
					if (Local_44.f_A != -1)
					{
						func_339();
						func_516();
						if (ENTITY::IS_ENTITY_AT_COORD(Local_44.f_1, Local_1963, 5f, 5f, 5f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_44.f_1))
							{
								func_338(&uLocal_2061);
								Local_1973.f_6 = 8;
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(Local_44.f_1))
						{
							Local_1973.f_6 = 8;
						}
					}
					else
					{
						Local_1973.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44.f_1, 0))
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				Local_1973.f_6 = 18;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2058.f_166[0 /*189*/].f_9))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_2058.f_166[0 /*189*/].f_9, 0);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1963, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), Local_1964, 2, 1);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2058.f_166[0 /*189*/].f_9))
				{
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_START(Local_1963, ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), 500f, 0);
					}
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						Local_1973.f_6 = 18;
					}
				}
				else
				{
					Local_1973.f_6 = 18;
				}
			}
			break;
		
		case 8:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (Local_44.f_A == 0)
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_44.f_1);
				if (func_337(iLocal_1950, 16))
				{
					func_335(&iLocal_1950, 16);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_44.f_1, 1, 1);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_44.f_1, -1);
				VEHICLE::SET_VEHICLE_FIXED(Local_44.f_1);
				func_334();
				uLocal_1729 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1702.487f, 3279.545f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, 1, 2);
				CAM::SET_CAM_ACTIVE(Local_2058.f_B2A, 0);
				Local_1973.f_6 = 9;
			}
			else if (func_333(1000))
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				VEHICLE::SET_VEHICLE_FIXED(Local_44.f_1);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_44.f_1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_334();
					Local_1973.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((CAM::IS_CAM_ACTIVE(uLocal_1729) && CAM::IS_CAM_INTERPOLATING(uLocal_1729)) || (CAM::IS_CAM_ACTIVE(Local_2058.f_B2A) && CAM::IS_CAM_INTERPOLATING(Local_2058.f_B2A))))
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(1, 0, 3, 0);
				func_334();
				Local_1973.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2058.f_19 = 0;
			Local_1973.f_6 = 11;
			break;
		
		case 11:
			if (!func_319(&Local_2058))
			{
				func_547(1);
				if (Local_2058.f_2)
				{
					STREAMING::NEW_LOAD_SCENE_START(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), 500f, 0);
				}
				if (Local_44.f_A == 0)
				{
					func_318("SPR_TAXI_GATE", 10000, 1);
					if (!func_337(iLocal_1950, 16))
					{
						func_310(&Local_2058, 0, 1);
						func_309(&iLocal_1950, 16);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					}
					HUD::DISPLAY_HUD(1);
					HUD::DISPLAY_RADAR(1);
					Local_1973.f_6 = 13;
				}
				else
				{
					Local_1973.f_6 = 13;
				}
				Local_2058.f_2 = 0;
			}
			break;
		
		case 13:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				CAM::SET_CINEMATIC_MODE_ACTIVE(0);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2058.f_166[0 /*189*/].f_9, 0);
				func_334();
				if (func_337(iLocal_1950, 16))
				{
					func_335(&iLocal_1950, 16);
				}
				if (Local_44.f_A == 0)
				{
					if (func_549(500))
					{
						Local_2058.f_1A = 0;
						Local_1973.f_6 = 14;
					}
				}
				else
				{
					func_308(&Local_2058);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					if (func_549(500))
					{
						Local_2058.f_1A = 0;
						Local_1973.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_1973 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2058))
			{
				return 1;
			}
			iLocal_1673 = 3;
			func_23();
			func_13();
			if (!Local_2058)
			{
				func_10(&(Local_2058.f_6));
				func_9(&(Local_2058.f_166[0 /*189*/]), Local_44.f_3, Local_44.f_6, 0f);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2058.f_166[0 /*189*/].f_9))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2058.f_166[0 /*189*/].f_9);
				}
				if (STREAMING::NEW_LOAD_SCENE_START(Local_42, func_8(Local_43), 4500f, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && func_5(&(Local_2058.f_6)) < 20f)
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_42, func_8(Local_43));
					func_4(&(Local_2058.f_6));
					Local_1973.f_6 = 15;
				}
				else if (func_2(&(Local_2058.f_6), 20f))
				{
					func_4(&(Local_2058.f_6));
					Local_1973.f_6 = 15;
				}
			}
			else
			{
				Local_1973.f_6 = 3;
			}
			break;
		
		case 15:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
			}
			Local_2058.f_B2B = 0;
			Local_1973.f_6 = 3;
			break;
		
		case 18:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
			}
			func_407(&Local_2058, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_549(1000);
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_2(var uParam0, float fParam1)//Position - 0xCCD
{
	if (func_3(uParam0))
	{
		if (func_5(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(var uParam0)//Position - 0xCEF
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_4(var uParam0)//Position - 0xCFF
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_5(var uParam0)//Position - 0xD15
{
	if (func_3(uParam0))
	{
		if (func_7(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_6(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_6(bool bParam0)//Position - 0xD54
{
	var uVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(uVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_7(var uParam0)//Position - 0xD9C
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

Vector3 func_8(struct<3> Param0)//Position - 0xDAC
{
	return (-SYSTEM::SIN(Param0.f_2) * SYSTEM::COS(Param0.x)), (SYSTEM::COS(Param0.f_2) * SYSTEM::COS(Param0.x)), SYSTEM::SIN(Param0.x);
}

void func_9(var uParam0, struct<3> Param1, var uParam2, float fParam3)//Position - 0xDD9
{
	ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Param1, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_9, uParam2);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_9, fParam3);
}

void func_10(var uParam0)//Position - 0xE05
{
	if (!func_3(uParam0))
	{
		func_338(uParam0);
	}
	else
	{
		func_11(uParam0);
	}
}

void func_11(var uParam0)//Position - 0xE26
{
	func_12(uParam0, 0f);
}

void func_12(var uParam0, float fParam1)//Position - 0xE35
{
	uParam0->f_1 = (func_6(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_13()//Position - 0xE63
{
	if (Global_17C49.f_4391.f_C[4 /*8*/].f_4 == 1)
	{
		if (Global_17C49.f_4391.f_6[4] > 0f)
		{
			if (Global_17C49.f_4391.f_6[4] <= func_22(4))
			{
				func_14(125, 0, 0);
			}
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2)//Position - 0xEB4
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_20((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_17C49.f_2100[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_17C49.f_2100[iParam0 /*12*/].f_6 == 11 || Global_17C49.f_2100[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_17C49.f_2100[iParam0 /*12*/].f_5 = 1;
		Global_17C49.f_2100[iParam0 /*12*/].f_A = iParam1;
		Global_17C49.f_2100[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_15();
	}
}

void func_15()//Position - 0xF9C
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_17B41 = 0;
	Global_17B42 = 0;
	Global_17B43 = 0;
	Global_17B44 = 0;
	Global_17B45 = 0;
	Global_17B46 = 0;
	Global_17B47 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_17C49.f_2100.f_F0D;
	Global_17C49.f_2100.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_17C49.f_2100[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_17C49.f_2100[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_17B41++;
					fVar1 = (fVar1 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_17B42++;
					fVar2 = (fVar2 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_17B43++;
					fVar3 = (fVar3 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_17B44++;
					fVar4 = (fVar4 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_17B45++;
					fVar5 = (fVar5 + (Global_17C49.f_2100[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_17B46++;
					fVar6 = (fVar6 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_17B47++;
					fVar7 = (fVar7 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_17B30 > 0)
	{
		if (Global_17B41 == Global_17B30)
		{
			fVar1 = 55f;
		}
	}
	if (Global_17B31 > 0)
	{
		if (Global_17B42 == Global_17B31)
		{
			fVar2 = 10f;
		}
	}
	if (Global_17B32 > 0)
	{
		if (Global_17B43 == Global_17B32)
		{
			fVar3 = 0f;
		}
	}
	if (Global_17B33 > 0)
	{
		if (Global_17B44 == Global_17B33)
		{
			fVar4 = 10f;
		}
	}
	if (Global_17B34 > 0)
	{
		if (((Global_17B45 == Global_17B34 || (Global_17B34 * 10 / Global_17B45) < 41) || Global_17B45 > Global_17B37) || Global_17B45 == Global_17B37)
		{
			if (!MISC::IS_BIT_SET(Global_17C49.f_2100.f_F10, 14))
			{
				if (Global_17B45 == Global_17B34)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_17B34, 0);
					MISC::SET_BIT(&(Global_17C49.f_2100.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_17B35 > 0)
	{
		if (Global_17B46 == Global_17B35)
		{
			fVar6 = 15f;
		}
	}
	if (Global_17B36 > 0)
	{
		if (Global_17B47 == Global_17B36)
		{
			fVar7 = 5f;
		}
	}
	Global_17C49.f_2100.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_17B45 > Global_17B37 || Global_17B45 == Global_17B37)
	{
		iVar9 = Global_17B37;
	}
	else
	{
		iVar9 = Global_17B45;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_17B41, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_17B30, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_17B42, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_17B31, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_17B43, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_17B32, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_17B44, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_17B33, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_17B37, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_17B47 + Global_17B46), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_17B36 + Global_17B35), 1);
	Global_17B48 = (Global_17B41 * 100 / Global_17B30);
	Global_17B4A = ((Global_17B43 + Global_17B42) * 100 / (Global_17B32 + Global_17B31));
	Global_17B49 = ((Global_17B44 + iVar9) * 100 / (Global_17B33 + Global_17B37));
	Global_17B4B = ((Global_17B46 + Global_17B47) * 100 / (Global_17B35 + Global_17B36));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_17C49.f_2100.f_F0D, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_17B48, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_17B49, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_17B4A, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D))
	{
		func_19(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_18() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_16();
				}
			}
		}
	}
}

int func_16()//Position - 0x145D
{
	if (func_17(0))
	{
		return 0;
	}
	if (Global_15F91.f_8)
	{
		if (Global_15F91.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_15F91.f_A > 1)
	{
		return 0;
	}
	Global_15F91.f_A++;
	return 1;
}

bool func_17(bool bParam0)//Position - 0x14A8
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

int func_18()//Position - 0x14D3
{
	return Global_5F7C;
}

int func_19(int iParam0, int iParam1)//Position - 0x14DE
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

int func_20(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x152F
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_21()//Position - 0x178A
{
	return Global_1407E1;
}

float func_22(int iParam0)//Position - 0x1796
{
	switch (iParam0)
	{
		case 0:
			return 130f;
			break;
		
		case 1:
			return 120f;
			break;
		
		case 2:
			return 120f;
			break;
		
		case 3:
			return 170f;
			break;
		
		case 4:
			return 180f;
			break;
	}
	return -1f;
}

void func_23()//Position - 0x17FB
{
	iLocal_1965 = 0;
	iLocal_1966 = 0;
	iLocal_1967 = 0;
	iLocal_1968 = 0;
	iLocal_1969 = 0;
	iLocal_1970 = 0;
	iLocal_1971 = 0;
	iLocal_1972 = 0;
}

int func_24(var uParam0)//Position - 0x1823
{
	switch (uParam0->f_1A)
	{
		case 0:
			func_335(&iLocal_1950, 4);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_307(uParam0);
			uParam0->f_11 = func_306();
			if (Local_44.f_A == 0)
			{
				if (!func_337(iLocal_1950, 16))
				{
					func_310(uParam0, 0, 1);
					func_310(uParam0, 1, 0);
					func_309(&iLocal_1950, 16);
				}
			}
			else
			{
				func_308(uParam0);
				if (!func_337(iLocal_1950, 16))
				{
					func_310(uParam0, 0, 1);
					func_310(uParam0, 1, 0);
					func_309(&iLocal_1950, 16);
				}
			}
			func_4(&(uParam0->f_E));
			iLocal_1958 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			uParam0->f_1A = 1;
			break;
		
		case 1:
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (Local_44.f_A == 0)
			{
				if (func_337(iLocal_1950, 16))
				{
					func_335(&iLocal_1950, 16);
				}
				func_304(uParam0);
				uParam0->f_1A = 7;
			}
			else
			{
				func_308(uParam0);
				if (!func_280(&(uParam0->f_E)))
				{
					if (!CAM::_0x3044240D2E0FA842())
					{
						CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
					}
					if (func_337(iLocal_1950, 16))
					{
						func_335(&iLocal_1950, 16);
					}
					HUD::DISPLAY_HUD(1);
					func_304(uParam0);
					if (Local_44.f_A == 0 && (Global_17C49.f_4391.f_6[0] > Local_44.f_70[0] || Global_17C49.f_4391.f_6[0] == 0f))
					{
						func_279("SPR_HELP_GATE", 10000);
					}
					uParam0->f_1A = 7;
				}
			}
			break;
		
		case 2:
			if (!func_337(iLocal_1950, 1))
			{
				SYSTEM::SETTIMERA(0);
				func_240(uParam0);
				func_239(&(Local_44.f_77), 0, 0, 1, 1);
				func_238(&(Local_44.f_77), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_237(&(Local_44.f_77), 1);
				func_309(&iLocal_1950, 1);
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_236("SPR_RETR_FAIL", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_236("SPR_RETR_FAIL", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			SYSTEM::SETTIMERA(0);
			func_234();
			func_233(0);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			func_232(1);
			uParam0->f_1A = 4;
			break;
		
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			func_230();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[0 /*189*/].f_9))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_166[0 /*189*/].f_9) && CAM::DOES_CAM_EXIST(uLocal_1730))
				{
					CAM::GET_CAM_ROT(uLocal_1730, 2);
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_166[0 /*189*/].f_9, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_166[0 /*189*/].f_9, 1);
					func_229();
				}
			}
			if (!func_215(uParam0, bLocal_2053, bLocal_2054))
			{
				func_229();
				func_214(0);
				HUD::CLEAR_HELP(1);
				if (func_337(iLocal_1950, 1))
				{
					func_335(&iLocal_1950, 1);
				}
				func_213(0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				iLocal_2057 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2057, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				func_4(&uLocal_1940);
				uParam0->f_1A = 5;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[0 /*189*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_166[0 /*189*/].f_9, Local_1963, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_166[0 /*189*/].f_9, Local_1964, 2, 1);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_166[0 /*189*/].f_9, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_166[0 /*189*/].f_9);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_166[0 /*189*/].f_9, 0);
			}
			iLocal_2052 = 0;
			uParam0->f_1A = 6;
			uParam0->f_166[0 /*189*/].f_17 = 7;
			break;
		
		case 6:
			uParam0->f_1A = 8;
			break;
		
		case 7:
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_1953, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_337(iLocal_1950, 16))
			{
				func_310(uParam0, 0, 1);
				func_310(uParam0, 1, 0);
				func_309(&iLocal_1950, 16);
				func_233(1);
				func_212(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/]);
			}
			if (uParam0->f_1)
			{
				func_185(uParam0);
				func_183(uParam0);
			}
			else
			{
				func_180(&uLocal_1925, 0);
				func_229();
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			}
			if (!func_41(uParam0, Local_44))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MGSP_END");
				func_28(uParam0);
				func_4(&(uParam0->f_E));
				uParam0->f_1A = 2;
				func_4(&(uParam0->f_16));
			}
			break;
		
		case 8:
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			func_27(&(uParam0->f_11));
			func_229();
			func_25();
			return 0;
			break;
	}
	return 1;
}

void func_25()//Position - 0x1CC7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_337(uLocal_1739, iVar0))
		{
			func_335(&uLocal_1739, iVar0);
		}
		if (func_337(uLocal_1740, iVar0))
		{
			func_335(&uLocal_1740, iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1737[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(uLocal_1737[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1738[iVar0]))
		{
			PED::DELETE_PED(&(uLocal_1738[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_1736);
	iVar0 = 0;
	while (iVar0 < iLocal_1736)
	{
		iLocal_1736[iVar0] = 0;
		iVar0++;
	}
}

void func_26(var uParam0)//Position - 0x1D60
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(var uParam0)//Position - 0x1D90
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
}

void func_28(var uParam0)//Position - 0x1DAC
{
	int iVar0;
	
	if (!func_7(&(uParam0->f_3)))
	{
		func_40(&(uParam0->f_3));
	}
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_166[0 /*189*/].f_9, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	func_39(uParam0);
	if (Local_44 == 0)
	{
		func_38(uParam0);
	}
	func_32(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		func_30(&(uParam0->f_166[iVar0 /*189*/]));
		if (iVar0 != 0)
		{
			func_29(&(uParam0->f_166[iVar0 /*189*/]));
		}
		iVar0++;
	}
}

void func_29(var uParam0)//Position - 0x1E2C
{
}

void func_30(var uParam0)//Position - 0x1E34
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (Local_44 != 0)
		{
			func_31();
		}
	}
}

void func_31()//Position - 0x1E52
{
}

void func_32(var uParam0)//Position - 0x1E5A
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[iVar0 /*189*/].f_8))
		{
			if (uParam0->f_166[iVar0 /*189*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = func_37(Local_44.f_A);
				if (iVar1 <= 0 || iVar1 > uParam0->f_166[iVar0 /*189*/].f_C)
				{
					func_36(Local_44.f_A, uParam0->f_166[iVar0 /*189*/].f_C);
				}
				fVar2 = func_35(Local_44.f_A);
				func_34(Local_44.f_A, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_166[0 /*189*/].f_D)));
				if (fVar2 == 0f || fVar2 > uParam0->f_166[0 /*189*/].f_D)
				{
					func_33(Local_44.f_A, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_166[0 /*189*/].f_D)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)//Position - 0x1F2F
{
	Global_17C49.f_4391.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)//Position - 0x1F46
{
	Local_44.f_12[iParam0] = fParam1;
}

var func_35(int iParam0)//Position - 0x1F58
{
	var uVar0;
	
	uVar0 = Global_17C49.f_4391.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)//Position - 0x1F71
{
	Global_17C49.f_4391[iParam0] = uParam1;
}

int func_37(int iParam0)//Position - 0x1F86
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_17C49.f_4391[iParam0];
	return iVar0;
}

void func_38(var uParam0)//Position - 0x1FA0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		iVar2 = 1;
		iVar1 = 0;
		while (iVar1 < uParam0->f_D)
		{
			if (iVar0 != iVar1)
			{
				if (uParam0->f_166[iVar0 /*189*/].f_D > uParam0->f_166[iVar1 /*189*/].f_D)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		uParam0->f_166[iVar0 /*189*/].f_C = iVar2;
		iVar0++;
	}
}

void func_39(var uParam0)//Position - 0x2009
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		if (uParam0->f_166[iVar0 /*189*/].f_B != uParam0->f_C)
		{
			uParam0->f_166[iVar0 /*189*/].f_D = (uParam0->f_166[0 /*189*/].f_D + (IntToFloat((uParam0->f_C - uParam0->f_166[iVar0 /*189*/].f_B)) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 2.5f)));
		}
		iVar0++;
	}
}

void func_40(var uParam0)//Position - 0x206E
{
	if (func_3(uParam0))
	{
		if (!func_7(uParam0))
		{
			uParam0->f_2 = (func_6(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
			MISC::SET_BIT(uParam0, 2);
		}
	}
}

int func_41(var uParam0, int iParam1)//Position - 0x20A8
{
	float fVar0;
	int iVar1;
	struct<10> Var2;
	struct<10> Var3;
	int iVar4;
	bool bVar5;
	int iVar6;
	char cVar7[16];
	
	if (Local_44.f_A == 0)
	{
		if (uParam0->f_166[0 /*189*/].f_B == 0)
		{
			func_11(&(uParam0->f_3));
			if (func_337(iLocal_1951, 131072))
			{
				VEHICLE::RESET_VEHICLE_STUCK_TIMER(uParam0->f_166[0 /*189*/].f_9, 4);
				func_335(&iLocal_1951, 131072);
			}
		}
		else if (uParam0->f_166[0 /*189*/].f_B == 1 && !func_337(iLocal_1951, 131072))
		{
			func_279("SPR_INFO_BON", 10000);
			func_309(&iLocal_1951, 131072);
			if (func_337(iLocal_1951, 262144))
			{
				func_335(&iLocal_1951, 262144);
			}
		}
		else if (uParam0->f_166[0 /*189*/].f_B == 4 && !func_337(iLocal_1951, 262144))
		{
			func_279("SPR_INFO_RESET", 10000);
			func_309(&iLocal_1951, 262144);
		}
	}
	if (func_3(&(uParam0->f_3)))
	{
		fVar0 = func_5(&(uParam0->f_3));
	}
	func_162(uParam0->f_166[0 /*189*/].f_B, uParam0->f_1);
	PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_D)
	{
		if (uParam0->f_166[iVar1 /*189*/].f_B < uParam0->f_C)
		{
			bVar5 = false;
			if (uParam0->f_166[iVar1 /*189*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				bVar5 = true;
			}
			iVar4 = uParam0->f_166[iVar1 /*189*/].f_B;
			if (uParam0->f_166[iVar1 /*189*/].f_B >= uParam0->f_C)
			{
				Var2 = { uParam0->f_1B[(uParam0->f_C - 1) /*10*/] };
			}
			else
			{
				Var2 = { uParam0->f_1B[iVar4 /*10*/] };
			}
			if (iVar4 < (uParam0->f_C - 1))
			{
				Var3 = { uParam0->f_1B[iVar4 + 1 /*10*/] };
			}
			else
			{
				Var3 = { Var2 };
			}
			if (iVar4 != uParam0->f_C)
			{
				uParam0->f_166[iVar1 /*189*/].f_D = (fVar0 - uParam0->f_166[iVar1 /*189*/].f_F);
				if (uParam0->f_166[iVar1 /*189*/].f_D < 0f)
				{
					uParam0->f_166[iVar1 /*189*/].f_D = 0f;
				}
			}
			if (!func_105(uParam0, &(uParam0->f_166[iVar1 /*189*/]), bVar5))
			{
				if ((bVar5 && uParam0->f_1) && (Local_44.f_A != 0 || uParam0->f_166[0 /*189*/].f_B > 0))
				{
					if (!func_3(&uLocal_2045))
					{
						func_338(&uLocal_2045);
					}
					if (func_5(&uLocal_2048) >= 6.5f)
					{
						if (!PAD::IS_CONTROL_PRESSED(2, 222))
						{
							func_11(&uLocal_2045);
						}
						else if (func_5(&uLocal_2045) >= 1.5f)
						{
							uParam0->f_1 = 0;
							func_335(&iLocal_1951, 32768);
							uParam0->f_166[0 /*189*/].f_17 = 6;
						}
					}
					else if (PAD::IS_CONTROL_PRESSED(2, 222))
					{
						if (func_5(&(uParam0->f_3)) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_1951, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_1951, 32768, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(uParam0->f_166[iVar1 /*189*/].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_44 == 0 && func_3(&uLocal_1946))
					{
						return 1;
					}
					if (bVar5)
					{
						if (uParam0->f_166[iVar1 /*189*/].f_E != 0f)
						{
							func_338(&(uParam0->f_E));
						}
						if (func_337(iLocal_1950, 8))
						{
							func_310(uParam0, iVar4, 1);
							if (iVar4 < (uParam0->f_C - 1))
							{
								func_310(uParam0, iVar4 + 1, 0);
							}
							func_335(&iLocal_1950, 8);
						}
					}
					if (uParam0->f_1)
					{
						uParam0->f_B = func_93(uParam0, &Var2, &Var3, uParam0->f_166[iVar1 /*189*/].f_8);
						func_90(&Var2, &Var3);
					}
					if (uParam0->f_B != -1)
					{
						if (iParam1 == 0)
						{
							func_85(&(uParam0->f_166[iVar1 /*189*/]), bVar5, uParam0->f_B);
						}
						bLocal_1939 = func_84(uParam0->f_B);
						uParam0->f_166[iVar1 /*189*/].f_B++;
						iVar4 = uParam0->f_166[iVar1 /*189*/].f_B;
						if (iVar4 >= (uParam0->f_C - 1))
						{
							Var2 = { uParam0->f_1B[(uParam0->f_C - 1) /*10*/] };
						}
						else
						{
							Var2 = { uParam0->f_1B[iVar4 /*10*/] };
						}
						if (bVar5)
						{
							func_78(uParam0, (iVar4 - 1));
							if (iVar4 == uParam0->f_C)
							{
								iVar6 = 0;
								if (func_3(&(uParam0->f_3)))
								{
									if (!func_7(&(uParam0->f_3)))
									{
										func_40(&(uParam0->f_3));
									}
									if (uParam0->f_166[0 /*189*/].f_D > 0f)
									{
										if (uParam0->f_166[0 /*189*/].f_D <= Local_44.f_6A[Local_44.f_A])
										{
											iVar6 = 1;
										}
										else if (uParam0->f_166[0 /*189*/].f_D <= (((Local_44.f_70[Local_44.f_A] - Local_44.f_6A[Local_44.f_A]) / 2f) + Local_44.f_6A[Local_44.f_A]))
										{
											iVar6 = 2;
										}
										else if (uParam0->f_166[0 /*189*/].f_D <= Local_44.f_70[Local_44.f_A])
										{
											iVar6 = 3;
										}
									}
								}
								if (iVar6 == 0)
								{
								}
								if (iVar6 > 0)
								{
									return 0;
								}
								else
								{
									uParam0->f_1 = 0;
									uParam0->f_166[iVar1 /*189*/].f_B = (uParam0->f_166[iVar1 /*189*/].f_B - 1);
									HUD::CLEAR_PRINTS();
									sLocal_1938 = "SPR_TIME_FAIL";
									uParam0->f_166[0 /*189*/].f_17 = 0;
								}
							}
							else
							{
								func_310(uParam0, iVar4, 1);
								if (iVar4 < (uParam0->f_C - 1))
								{
									func_310(uParam0, iVar4 + 1, 0);
								}
							}
							if (uParam0->f_166[iVar1 /*189*/].f_E == 0f)
							{
								if (func_3(&(uParam0->f_E)))
								{
									func_4(&(uParam0->f_E));
								}
							}
							if (uParam0->f_C > 0)
							{
								if (uParam0->f_A > 0f)
								{
									if (iVar4 == SYSTEM::ROUND((IntToFloat(uParam0->f_C) / 2f)))
									{
										uParam0->f_166[iVar1 /*189*/].f_E = 0f;
										func_11(&(uParam0->f_E));
									}
								}
							}
						}
						else if (uParam0->f_166[iVar1 /*189*/].f_B >= uParam0->f_C)
						{
							if (Local_44 != 2)
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[iVar1 /*189*/].f_8))
								{
									func_29(&(uParam0->f_166[iVar1 /*189*/]));
								}
							}
						}
						else
						{
							if (Local_44 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(uParam0, uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar7, "Offroad_", 16);
								StringIntConCat(&cVar7, Local_44.f_A + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar7, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (bLocal_2056)
									{
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[iVar1 /*189*/].f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_166[iVar1 /*189*/].f_9))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_166[iVar1 /*189*/].f_8, -235832601) == 1)
											{
											}
											else
											{
												TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, &cVar7, 262144, 0, 8, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_166[iVar1 /*189*/].f_9), 0, 1073741824);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(uParam0, uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/].f_7, iVar1);
									}
								}
							}
							if (Local_44 != 2)
							{
								func_75(uParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0)
					{
						if (bVar5)
						{
							func_74();
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (uParam0->f_1 == 1)
	{
		func_67(uParam0);
		func_65(uParam0, &uLocal_2055);
		func_64(uParam0, &uLocal_2055);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (uParam0->f_166[0 /*189*/].f_17 != 0)
		{
			if (Local_44.f_A == 0)
			{
				if (uParam0->f_166[0 /*189*/].f_B > 0)
				{
					func_42(uParam0);
				}
			}
			else
			{
				func_42(uParam0);
			}
		}
	}
	return 1;
}

void func_42(var uParam0)//Position - 0x2835
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(1);
	}
	if (!func_3(&uLocal_1746))
	{
		iLocal_1744 = 0;
		iLocal_1745 = 0;
		func_338(&uLocal_1746);
	}
	if (SYSTEM::CEIL((uParam0->f_166[0 /*189*/].f_F * 1000f)) != iLocal_1745)
	{
		iLocal_1744 = (SYSTEM::CEIL((uParam0->f_166[0 /*189*/].f_F * 1000f)) - iLocal_1745);
		iLocal_1745 = SYSTEM::CEIL((uParam0->f_166[0 /*189*/].f_F * 1000f));
		func_11(&uLocal_1746);
	}
	iVar0 = (SYSTEM::FLOOR((func_5(&(uParam0->f_3)) * 100f)) * 10 - SYSTEM::CEIL((uParam0->f_166[0 /*189*/].f_F * 1000f)));
	iVar1 = 0;
	if (func_5(&uLocal_1746) <= 2f)
	{
		if (uParam0->f_166[0 /*189*/].f_B > 0)
		{
			iVar1 = -iLocal_1744;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = SYSTEM::FLOOR((Global_17C49.f_4391.f_6[Local_44.f_A] * 100f)) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= (Local_44.f_6A[Local_44.f_A] * 1000f))
	{
		iVar3 = SYSTEM::FLOOR((Local_44.f_6A[Local_44.f_A] * 1000f));
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= ((((Local_44.f_70[Local_44.f_A] - Local_44.f_6A[Local_44.f_A]) / 2f) + Local_44.f_6A[Local_44.f_A]) * 1000f))
	{
		iVar6 = 2;
		iVar3 = SYSTEM::FLOOR(((((Local_44.f_70[Local_44.f_A] - Local_44.f_6A[Local_44.f_A]) / 2f) + Local_44.f_6A[Local_44.f_A]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= (Local_44.f_70[Local_44.f_A] * 1000f))
	{
		iVar6 = 1;
		iVar3 = SYSTEM::FLOOR((Local_44.f_70[Local_44.f_A] * 1000f));
		sVar4 = "SPR_BBEST";
		iVar5 = 107;
	}
	else
	{
		iVar3 = -1;
	}
	func_55();
	func_43(iVar0, "", -1, -1, "", -1, -1, "", iVar1, 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0, 1, 1, -1, "", -1f, func_54());
}

void func_43(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, var uParam30)//Position - 0x2A62
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	struct<8> Var6;
	int iVar7;
	
	if (fParam29 > -1f)
	{
		func_51(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (func_50(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_48((iParam11 - iParam10), sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (func_50(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_47(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (func_50(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (func_50(sVar4))
		{
			sVar4 = "TIMER_BESTIME";
		}
		func_44(iParam18, sVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (func_50(sVar5))
		{
			sVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0);
	}
	StringCopy(&Var6, sParam1, 64);
	if (iParam8 < 0)
	{
		StringCopy(&Var6, "TIMER_REWARD", 64);
	}
	else if (iParam8 > 0)
	{
		StringCopy(&Var6, "TIMER_PENAL", 64);
	}
	else if (func_50(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER", 64);
	}
	iParam26 = iParam26;
	iVar7 = 4;
	func_44(iParam0, &Var6, iParam8, iVar7, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2BF2
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_46(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1446E8.f_1 = 1;
		func_45(7, iVar0);
		Global_1446E8.f_C3C[iVar0] = iParam0;
		StringCopy(&(Global_1446E8.f_C3C.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1446E8.f_C3C.f_8A[iVar0] = iParam2;
		Global_1446E8.f_C3C.f_AE[iVar0] = iParam3;
		Global_1446E8.f_C3C.f_93[iVar0] = uParam4;
		Global_1446E8.f_C3C.f_9C[iVar0] = iParam5;
		Global_1446E8.f_C3C.f_C9[iVar0] = iParam6;
		Global_1446E8.f_C3C.f_D2[iVar0] = iParam7;
		Global_1446E8.f_C3C.f_A5[iVar0] = iParam8;
		Global_1446E8.f_C3C.f_FE[iVar0] = iParam9;
		Global_1446E8.f_C3C.f_107[iVar0] = iParam10;
		Global_1446E8.f_C3C.f_121[iVar0] = iParam11;
		Global_1446E8.f_C3C.f_C0[iVar0] = iParam12;
		Global_1446E8.f_C3C.f_DB[iVar0] = iParam13;
	}
}

void func_45(int iParam0, int iParam1)//Position - 0x2D0C
{
	MISC::SET_BIT(&(Global_1446E8.f_E1D[iParam0]), iParam1);
}

bool func_46(int iParam0, int iParam1)//Position - 0x2D25
{
	return MISC::IS_BIT_SET(Global_1446E8.f_E1D[iParam0], iParam1);
}

void func_47(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2D3E
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_46(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1446E8.f_1 = 1;
		func_45(5, iVar0);
		Global_1446E8.f_9A4[iVar0] = iParam0;
		Global_1446E8.f_9A4.f_8A[iVar0] = uParam1;
		StringCopy(&(Global_1446E8.f_9A4.f_9[iVar0 /*16*/]), sParam2, 64);
		Global_1446E8.f_9A4.f_9C[iVar0] = uParam3;
		Global_1446E8.f_9A4.f_93[iVar0] = uParam4;
		Global_1446E8.f_9A4.f_AE[iVar0] = iParam5;
		Global_1446E8.f_9A4.f_B7[iVar0] = iParam6;
		Global_1446E8.f_9A4.f_DA[iVar0] = iParam7;
		Global_1446E8.f_9A4.f_E3[iVar0] = iParam8;
	}
}

void func_48(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2E0B
{
	int iVar0;
	int iVar1;
	
	if (func_50(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_46(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1446E8.f_1 = 1;
		func_45(3, iVar0);
		Global_1446E8.f_730[iVar0] = iParam0;
		StringCopy(&(Global_1446E8.f_730.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1446E8.f_730.f_93[iVar0] = uParam3;
		Global_1446E8.f_730.f_8A[iVar0] = uParam2;
		Global_1446E8.f_730.f_A5[iVar0] = iParam4;
		Global_1446E8.f_730.f_AE[iVar0] = iParam5;
		StringCopy(&(Global_1446E8.f_730.f_D1[iVar0 /*16*/]), sParam6, 64);
		Global_1446E8.f_730.f_152[iVar0] = iParam7;
		Global_1446E8.f_730.f_16D[iVar0] = iParam8;
		Global_1446E8.f_730.f_15B[iVar0] = iParam9;
		Global_1446E8.f_730.f_164[iVar0] = iParam10;
	}
}

void func_49(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x2F0B
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_46(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1446E8.f_1 = 1;
		func_45(0, iVar0);
		Global_1446E8.f_301[iVar0] = iParam0;
		Global_1446E8.f_301.f_9[iVar0] = uParam1;
		StringCopy(&(Global_1446E8.f_301.f_12[iVar0 /*16*/]), sParam2, 64);
		Global_1446E8.f_301.f_9C[iVar0] = uParam3;
		Global_1446E8.f_301.f_93[iVar0] = uParam4;
		Global_1446E8.f_301.f_AE[iVar0] = iParam5;
		Global_1446E8.f_301.f_B7[iVar0 /*3*/] = fParam6;
		Global_1446E8.f_301.f_B7[iVar0 /*3*/].f_1 = fParam7;
		Global_1446E8.f_301.f_D0[iVar0] = iParam8;
		Global_1446E8.f_301.f_D9[iVar0] = iParam9;
		Global_1446E8.f_301.f_FC[iVar0] = iParam10;
		Global_1446E8.f_301.f_105[iVar0] = iParam11;
		Global_1446E8.f_301.f_10E[iVar0] = iParam12;
		Global_1446E8.f_301.f_117[iVar0] = iParam13;
		Global_1446E8.f_2FC = 1;
		Global_1446E8.f_301.f_120[iVar0] = iParam14;
	}
}

int func_50(char[4] cParam0)//Position - 0x3040
{
	if (MISC::IS_STRING_NULL(cParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(cParam0, "") || MISC::ARE_STRINGS_EQUAL(cParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x307A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_46(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1446E8.f_1 = 1;
		func_45(6, iVar0);
		Global_1446E8.f_A90[iVar0] = iParam0;
		StringCopy(&(Global_1446E8.f_A90.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1446E8.f_A90.f_93[iVar0] = uParam3;
		Global_1446E8.f_A90.f_8A[iVar0] = uParam2;
		Global_1446E8.f_A90.f_D2[iVar0] = iParam4;
		Global_1446E8.f_A90.f_DB[iVar0] = iParam5;
		StringCopy(&(Global_1446E8.f_A90.f_E4[iVar0 /*16*/]), sParam6, 64);
		Global_1446E8.f_A90.f_165[iVar0] = iParam7;
		Global_1446E8.f_A90.f_16E[iVar0] = fParam8;
		Global_1446E8.f_A90.f_191[iVar0] = iParam9;
		Global_1446E8.f_A90.f_19A[iVar0] = iParam10;
		Global_1446E8.f_A90.f_A5[iVar0] = iParam11;
		Global_1446E8.f_A90.f_AE[iVar0] = iParam12;
		Global_1446E8.f_A90.f_B7[iVar0] = iParam13;
		Global_1446E8.f_A90.f_C0[iVar0] = iParam14;
		Global_1446E8.f_A90.f_C9[iVar0] = iParam15;
		Global_1446E8.f_A90.f_1A3[iVar0] = iParam16;
		if (iParam15 == 4 && func_53())
		{
			Global_1446E8.f_2FC = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 1000)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1446E8.f_300 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1446E8.f_2FF = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1446E8.f_2FC = 1;
			}
			if (func_52())
			{
				Global_1446E8.f_300 = 1;
			}
		}
	}
}

int func_52()//Position - 0x3258
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_53()//Position - 0x327C
{
	if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		return 1;
	}
	return 0;
}

int func_54()//Position - 0x32AD
{
	return iLocal_1743;
}

void func_55()//Position - 0x32B8
{
	Global_1446E8.f_2FC = 1;
}

void func_56(var uParam0)//Position - 0x32C8
{
	if (uParam0->f_D == -1)
	{
	}
}

void func_57()//Position - 0x32D8
{
	if (Local_44 == 0)
	{
		HUD::SET_MINIMAP_COMPONENT(0, 0);
		HUD::SET_MINIMAP_COMPONENT(1, 0);
		HUD::SET_MINIMAP_COMPONENT(2, 0);
		HUD::SET_MINIMAP_COMPONENT(3, 0);
	}
}

void func_58(var uParam0)//Position - 0x3302
{
	if (func_5(&(uParam0->f_3)) > 15f)
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_166[0 /*189*/].f_9) < 5f)
		{
			if (!func_3(&uLocal_1943))
			{
				func_10(&uLocal_1943);
			}
			else if (func_5(&uLocal_1943) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_1951, 8192);
				if (uParam0->f_166[0 /*189*/].f_B <= (uParam0->f_C - 1))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_5))
					{
						HUD::SET_BLIP_DISPLAY(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_5, 0);
					}
				}
				if (uParam0->f_166[0 /*189*/].f_B + 1 <= (uParam0->f_C - 2))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/].f_5))
					{
						HUD::SET_BLIP_DISPLAY(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/].f_5, 0);
					}
				}
				func_11(&uLocal_1943);
				func_11(&uLocal_1940);
				uParam0->f_1 = 0;
				HUD::CLEAR_PRINTS();
				sLocal_1938 = "SPR_RETR_IDLE";
				uParam0->f_166[0 /*189*/].f_17 = 0;
			}
			else if (func_5(&uLocal_1943) > 30f)
			{
				if (!func_337(iLocal_1950, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_1950, 32, 0);
				}
			}
		}
		else if (func_3(&uLocal_1943))
		{
			func_335(&iLocal_1950, 32);
			func_11(&uLocal_1943);
		}
	}
	else if (func_3(&uLocal_1943))
	{
		func_335(&iLocal_1950, 32);
		func_11(&uLocal_1943);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3482
{
	if (func_62(*iParam3, iParam4))
	{
		return;
	}
	func_61(sParam0, iParam1, iParam2);
	func_60(iParam3, iParam4);
}

void func_60(var uParam0, var uParam1)//Position - 0x34AB
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_61(char* sParam0, int iParam1, int iParam2)//Position - 0x34BC
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

bool func_62(var uParam0, var uParam1)//Position - 0x34D5
{
	return (uParam0 && uParam1) != 0;
}

void func_63()//Position - 0x34E4
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

void func_64(var uParam0, var uParam1)//Position - 0x3500
{
	if (uParam0->f_1)
	{
		if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_166[0 /*189*/].f_9, 0) || ENTITY::GET_ENTITY_HEALTH(uParam0->f_166[0 /*189*/].f_9) < 5) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_11(&uLocal_1940);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::REMOVE_BLIP(uParam1);
			}
			if (uParam0->f_166[0 /*189*/].f_B <= (uParam0->f_C - 1))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_5))
				{
					HUD::SET_BLIP_DISPLAY(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_5, 0);
				}
			}
			if (uParam0->f_166[0 /*189*/].f_B + 1 <= (uParam0->f_C - 2))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/].f_5))
				{
					HUD::SET_BLIP_DISPLAY(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			HUD::CLEAR_PRINTS();
			sLocal_1938 = "SPR_RETR_DES";
			uParam0->f_166[0 /*189*/].f_17 = 0;
		}
		return;
	}
}

void func_65(var uParam0, var uParam1)//Position - 0x3607
{
	if (Local_44 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[0 /*189*/].f_9))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				HUD::CLEAR_PRINTS();
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::REMOVE_BLIP(uParam1);
					if (uParam0->f_166[0 /*189*/].f_B <= (uParam0->f_C - 1))
					{
						if (HUD::DOES_BLIP_EXIST(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_5))
						{
							HUD::SET_BLIP_DISPLAY(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_5, 0);
						}
					}
					if (uParam0->f_166[0 /*189*/].f_B + 1 <= (uParam0->f_C - 2))
					{
						if (HUD::DOES_BLIP_EXIST(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/].f_5))
						{
							HUD::SET_BLIP_DISPLAY(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				HUD::CLEAR_PRINTS();
				sLocal_1938 = "SPR_RETR_DES";
				func_66(&(Local_44.f_129), 1);
				uParam0->f_166[0 /*189*/].f_17 = 7;
			}
		}
	}
}

void func_66(var uParam0, int iParam1)//Position - 0x3708
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0);
}

void func_67(var uParam0)//Position - 0x3729
{
	if (uParam0->f_1)
	{
		func_72(uParam0);
		func_68(uParam0);
	}
}

void func_68(var uParam0)//Position - 0x3744
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_166[0 /*189*/].f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[0 /*189*/].f_9))
	{
		iVar1 = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_166[0 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_44 == 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[0 /*189*/].f_9) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_166[0 /*189*/].f_9, 0))
				{
					bLocal_1949 = true;
				}
			}
			if (bLocal_1949)
			{
				if (uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_7 == 6 || uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_7 == 10)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1951, 2);
					}
				}
			}
		}
		else
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1951, 2);
		}
	}
	if (Local_44 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1951, 2);
		}
	}
}

void func_69()//Position - 0x3874
{
	Global_38DE = 0;
	func_70();
}

void func_70()//Position - 0x3884
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

int func_71()//Position - 0x38DB
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_72(var uParam0)//Position - 0x38FD
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	
	Var0 = { uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/] };
	if (uParam0->f_166[0 /*189*/].f_B > 0)
	{
		Var1 = { uParam0->f_1B[(uParam0->f_166[0 /*189*/].f_B - 1) /*10*/] };
	}
	else
	{
		Var1 = { 0f, 0f, 0f };
	}
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, 1);
	fVar3 = fVar2;
	if (uParam0->f_166[0 /*189*/].f_B == 0)
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	else
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	Var4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_166[0 /*189*/].f_8, 1) };
	if (func_73(Var1, 0f, 0f, 0f, 1056964608))
	{
		Var5 = { Var0 };
	}
	else
	{
		Var5 = { MISC::_0x21C235BC64831E5A(Var4, Var1, Var0, 1) };
	}
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, Var4, 1);
	bVar7 = fVar6 >= fVar2;
	bVar8 = fVar6 >= fVar3;
	if (Local_44 == 1)
	{
		if (MISC::ABSF((Var5.f_2 - Var4.f_2)) > 15f)
		{
			bVar7 = true;
		}
	}
	if (bVar8)
	{
		func_11(&uLocal_1940);
		uParam0->f_1 = 0;
		HUD::CLEAR_PRINTS();
		func_232(1);
		uParam0->f_166[0 /*189*/].f_17 = 0;
		func_239(&(Local_44.f_77), 0, 0, 1, 1);
		func_238(&(Local_44.f_77), "IB_RETRY", 2, 201, 1, 1, 0);
		func_238(&(Local_44.f_77), "FE_HLP16", 2, 202, 1, 1, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("MGSP_FAIL");
		sLocal_1938 = "SPR_HELP_FAIL";
	}
	else if (bVar7)
	{
		if (fVar6 <= (fVar3 - 15f))
		{
			func_279("SPR_HELP_RESET", -1);
		}
		if (fVar6 <= (fVar3 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_1951, 4);
		}
	}
	else
	{
		HUD::CLEAR_THIS_PRINT("SPR_HELP_WARN");
		if (func_337(iLocal_1951, 4))
		{
			func_335(&iLocal_1951, 4);
		}
	}
}

int func_73(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x3ADB
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

void func_74()//Position - 0x3B27
{
	if (iLocal_1675 == 1)
	{
		if (func_3(&uLocal_1705))
		{
			if (func_5(&uLocal_1705) <= 2.5f)
			{
				iLocal_1741 = "GATEMISS";
				fLocal_1742 = 5f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1675 = 0;
			}
		}
	}
	if (iLocal_1676 == 1)
	{
		if (func_3(&uLocal_1711))
		{
			if (func_5(&uLocal_1711) <= 2.5f)
			{
				iLocal_1741 = "GATEINNER";
				fLocal_1742 = 1f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1676 = 0;
			}
		}
	}
	if (iLocal_1677 == 1)
	{
		if (func_3(&uLocal_1708))
		{
			if (func_5(&uLocal_1708) <= 2.5f)
			{
				iLocal_1741 = "GATEOUTTER";
				fLocal_1742 = 0f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1677 = 0;
			}
		}
	}
	if (iLocal_1678 == 1)
	{
		if (func_3(&uLocal_1720))
		{
			if (func_5(&uLocal_1720) <= 2.5f)
			{
				iLocal_1741 = "GATEKNIFEINNER";
				fLocal_1742 = 2.5f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1678 = 0;
			}
		}
	}
	if (iLocal_1679 == 1)
	{
		if (func_3(&uLocal_1723))
		{
			if (func_5(&uLocal_1723) <= 2.5f)
			{
				iLocal_1741 = "GATEINVERTEDIN";
				fLocal_1742 = 3f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1679 = 0;
			}
		}
	}
	if (iLocal_1680 == 1)
	{
		if (func_3(&uLocal_1714))
		{
			if (func_5(&uLocal_1714) <= 2.5f)
			{
				iLocal_1741 = "GATEKNIFEOUTTER";
				fLocal_1742 = 1.5f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1680 = 0;
			}
		}
	}
	if (iLocal_1681 == 1)
	{
		if (func_3(&uLocal_1717))
		{
			if (func_5(&uLocal_1717) <= 2.5f)
			{
				iLocal_1741 = "GATEINVERTEDOUT";
				fLocal_1742 = 2f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1681 = 0;
			}
		}
	}
	if (iLocal_1682 == 1)
	{
		if (func_3(&uLocal_1693))
		{
			if (func_5(&uLocal_1693) <= 2.5f)
			{
				iLocal_1741 = "STUNTKNIFELEFT";
				fLocal_1742 = 4f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1682 = 0;
			}
		}
	}
	if (iLocal_1683 == 1)
	{
		if (func_3(&uLocal_1693))
		{
			if (func_5(&uLocal_1693) <= 2.5f)
			{
				iLocal_1741 = "STUNTKNIFELEFTHIT";
				fLocal_1742 = 1.5f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1683 = 0;
			}
		}
	}
	if (iLocal_1684 == 1)
	{
		if (func_3(&uLocal_1693))
		{
			if (func_5(&uLocal_1693) <= 2.5f)
			{
				iLocal_1741 = "STUNTKNIFELEFTMISS";
				fLocal_1742 = 5f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1684 = 0;
			}
		}
	}
	if (iLocal_1685 == 1)
	{
		if (func_3(&uLocal_1693))
		{
			if (func_5(&uLocal_1693) <= 2.5f)
			{
				iLocal_1741 = "STUNTKNIFERIGHT";
				fLocal_1742 = 4f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1685 = 0;
			}
		}
	}
	if (iLocal_1686 == 1)
	{
		if (func_3(&uLocal_1693))
		{
			if (func_5(&uLocal_1693) <= 2.5f)
			{
				iLocal_1741 = "STUNTKNIFERIGHTHIT";
				fLocal_1742 = 1.5f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1686 = 0;
			}
		}
	}
	if (iLocal_1687 == 1)
	{
		if (func_3(&uLocal_1693))
		{
			if (func_5(&uLocal_1693) <= 2.5f)
			{
				iLocal_1741 = "STUNTKNIFERIGHTMISS";
				fLocal_1742 = 5f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1687 = 0;
			}
		}
	}
	if (iLocal_1688 == 1)
	{
		if (func_3(&uLocal_1696))
		{
			if (func_5(&uLocal_1696) <= 2.5f)
			{
				iLocal_1741 = "STUNTINVERTED";
				fLocal_1742 = 4f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1688 = 0;
			}
		}
	}
	if (iLocal_1689 == 1)
	{
		if (func_3(&uLocal_1696))
		{
			if (func_5(&uLocal_1696) <= 2.5f)
			{
				iLocal_1741 = "STUNTINVERTEDHIT";
				fLocal_1742 = 1.5f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1689 = 0;
			}
		}
	}
	if (iLocal_1690 == 1)
	{
		if (func_3(&uLocal_1696))
		{
			if (func_5(&uLocal_1696) <= 2.5f)
			{
				iLocal_1741 = "STUNTINVERTEDMISS";
				fLocal_1742 = 5f;
				iLocal_1743 = 1;
			}
			else
			{
				iLocal_1741 = 0;
				fLocal_1742 = -1f;
				iLocal_1743 = 1;
				iLocal_1690 = 0;
			}
		}
	}
}

void func_75(var uParam0, int iParam1)//Position - 0x3F73
{
	float fVar0;
	
	if (iParam1 < 0 || iParam1 > uParam0->f_166)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[iParam1 /*189*/].f_8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[iParam1 /*189*/].f_9))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_166[iParam1 /*189*/].f_8, uParam0->f_166[iParam1 /*189*/].f_9, 0))
			{
				fVar0 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_166[iParam1 /*189*/].f_9);
				if (uParam0->f_166[0 /*189*/].f_B == uParam0->f_166[iParam1 /*189*/].f_B)
				{
				}
				else if (uParam0->f_166[iParam1 /*189*/].f_B > uParam0->f_166[0 /*189*/].f_B)
				{
					fVar0 = (fVar0 * 0.69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_166[iParam1 /*189*/].f_8, uParam0->f_166[iParam1 /*189*/].f_9))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_166[iParam1 /*189*/].f_9, -1))
					{
						PED::SET_PED_INTO_VEHICLE(uParam0->f_166[iParam1 /*189*/].f_8, uParam0->f_166[iParam1 /*189*/].f_9, -1);
						TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_166[iParam1 /*189*/].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, int iParam5)//Position - 0x408A
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (Local_44 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam2))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam1, iParam2, Param3, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam2), 1, 0, 786469, 5f, -1f);
			}
		}
		else if (Local_44 == 2)
		{
			uParam4 = uParam4;
			func_77(uParam0, Param3, iParam5);
		}
	}
}

void func_77(var uParam0, struct<3> Param1, var uParam2)//Position - 0x40DF
{
	uParam0->f_C = uParam0->f_C;
	Param1 = { Param1 };
	uParam2 = uParam2;
}

void func_78(var uParam0, int iParam1)//Position - 0x40FB
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_1B[iParam1 /*10*/]));
	func_81(&(uParam0->f_1B[iParam1 /*10*/].f_6), &(uParam0->f_B2D), &(uParam0->f_B2E), uParam0->f_1B[iParam1 /*10*/].f_7 == 4);
	if (iParam1 + 1 < uParam0->f_C)
	{
		func_82(&(uParam0->f_1B[iParam1 + 1 /*10*/]));
		func_79(&(uParam0->f_1B[iParam1 + 1 /*10*/]));
	}
}

void func_79(var uParam0)//Position - 0x416F
{
	func_80(&(uParam0->f_6));
}

void func_80(var uParam0)//Position - 0x417F
{
	if (*uParam0 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(*uParam0);
		*uParam0 = 0;
	}
}

void func_81(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x4199
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	func_80(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		if (bLocal_1939)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		func_552(func_553(iVar3), &uVar0, &uVar1, &uVar2, uParam2);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam1, uVar0, uVar1, uVar2, *uParam2);
		GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam1, uVar0, uVar1, uVar2, *uParam2);
	}
}

void func_82(var uParam0)//Position - 0x4207
{
	func_83(&(uParam0->f_5));
}

void func_83(var uParam0)//Position - 0x4217
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
	}
}

int func_84(int iParam0)//Position - 0x422F
{
	if ((((((iParam0 == 9 || iParam0 == 12) || iParam0 == 15) || iParam0 == 10) || iParam0 == 13) || iParam0 == 16) || iParam0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_85(var uParam0, bool bParam1, int iParam2)//Position - 0x4285
{
	if (bParam1)
	{
		if (Local_44 == 0)
		{
			if (func_3(&uLocal_1705))
			{
				func_89(&uLocal_1705, 3f);
			}
			if (func_3(&uLocal_1699))
			{
				func_89(&uLocal_1699, 3f);
			}
			if (func_3(&uLocal_1693))
			{
				func_89(&uLocal_1693, 3f);
			}
			if (func_3(&uLocal_1702))
			{
				func_89(&uLocal_1702, 3f);
			}
			if (func_3(&uLocal_1696))
			{
				func_89(&uLocal_1696, 3f);
			}
			if (func_3(&uLocal_1708))
			{
				func_89(&uLocal_1708, 3f);
			}
			if (func_3(&uLocal_1711))
			{
				func_89(&uLocal_1711, 3f);
			}
			if (func_3(&uLocal_1714))
			{
				func_89(&uLocal_1714, 3f);
			}
			if (func_3(&uLocal_1717))
			{
				func_89(&uLocal_1717, 3f);
			}
			if (func_3(&uLocal_1720))
			{
				func_89(&uLocal_1720, 3f);
			}
			if (func_3(&uLocal_1723))
			{
				func_89(&uLocal_1723, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_1675 = 1;
					func_11(&uLocal_1705);
					break;
				
				case 1:
					iLocal_1676 = 1;
					func_11(&uLocal_1711);
					break;
				
				case 2:
					iLocal_1677 = 1;
					func_11(&uLocal_1708);
					break;
				
				case 3:
					iLocal_1678 = 1;
					func_11(&uLocal_1720);
					break;
				
				case 4:
					iLocal_1679 = 1;
					func_11(&uLocal_1723);
					break;
				
				case 5:
					iLocal_1680 = 1;
					func_11(&uLocal_1714);
					break;
				
				case 6:
					iLocal_1681 = 1;
					func_11(&uLocal_1717);
					break;
				
				case 8:
					iLocal_1682 = 1;
					func_11(&uLocal_1693);
					break;
				
				case 9:
					iLocal_1683 = 1;
					func_11(&uLocal_1702);
					break;
				
				case 10:
					iLocal_1684 = 1;
					func_11(&uLocal_1705);
					break;
				
				case 11:
					iLocal_1685 = 1;
					func_11(&uLocal_1693);
					break;
				
				case 12:
					iLocal_1686 = 1;
					func_11(&uLocal_1702);
					break;
				
				case 13:
					iLocal_1687 = 1;
					func_11(&uLocal_1705);
					break;
				
				case 14:
					iLocal_1688 = 1;
					func_11(&uLocal_1696);
					break;
				
				case 15:
					iLocal_1689 = 1;
					func_11(&uLocal_1702);
					break;
				
				case 16:
					iLocal_1690 = 1;
					func_11(&uLocal_1705);
					break;
				}
			}
	}
}

void func_86(var uParam0, int iParam1)//Position - 0x44AD
{
	switch (iParam1)
	{
		case 7:
			func_88(uParam0, 5f);
			break;
		
		case 0:
			break;
		
		case 1:
			func_87(uParam0, 1f);
			break;
		
		case 2:
			func_87(uParam0, 0f);
			break;
		
		case 5:
			func_87(uParam0, 1.5f);
			break;
		
		case 6:
			func_87(uParam0, 2f);
			break;
		
		case 3:
			func_87(uParam0, 2.5f);
			break;
		
		case 4:
			func_87(uParam0, 3f);
			break;
		
		case 8:
			func_87(uParam0, 4f);
			break;
		
		case 9:
			func_88(uParam0, 1.5f);
			break;
		
		case 10:
			func_88(uParam0, 5f);
			break;
		
		case 11:
			func_87(uParam0, 4f);
			break;
		
		case 12:
			func_88(uParam0, 1.5f);
			break;
		
		case 13:
			func_88(uParam0, 5f);
			break;
		
		case 14:
			func_87(uParam0, 4f);
			break;
		
		case 15:
			func_88(uParam0, 1.5f);
			break;
		
		case 16:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(var uParam0, float fParam1)//Position - 0x45D9
{
	uParam0->f_E = fParam1;
	uParam0->f_F = (uParam0->f_F + uParam0->f_E);
}

void func_88(var uParam0, float fParam1)//Position - 0x45F4
{
	uParam0->f_E = -fParam1;
	uParam0->f_F = (uParam0->f_F + uParam0->f_E);
}

void func_89(var uParam0, float fParam1)//Position - 0x4610
{
	if (func_3(uParam0))
	{
		func_12(uParam0, (func_5(uParam0) + fParam1));
	}
}

void func_90(var uParam0, var uParam1)//Position - 0x4633
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (uParam0->f_6 != 0)
	{
		iVar4 = func_92();
		if (uParam0->f_8 == 2 || uParam0->f_8 == 3)
		{
			iVar4 = 18;
		}
		else if (uParam0->f_8 == 1)
		{
			iVar4 = 9;
		}
		func_552(func_553(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_6, uVar0, uVar1, uVar2, func_91(*uParam0, 25, 200));
	}
	if (uParam1->f_6 != 0)
	{
		iVar5 = func_92();
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			iVar5 = 18;
		}
		else if (uParam1->f_8 == 1)
		{
			iVar5 = 9;
		}
		func_552(func_553(iVar5), &uVar0, &uVar1, &uVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam1->f_6, uVar0, uVar1, uVar2, func_91(*uParam1, 25, 200));
	}
}

int func_91(struct<3> Param0, int iParam1, int iParam2)//Position - 0x46FD
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - SYSTEM::CEIL((IntToFloat((iParam2 - iParam1)) * fVar3)));
		}
	}
	if (iVar1 < iParam1)
	{
		iVar1 = iParam1;
	}
	return iVar1;
}

int func_92()//Position - 0x4768
{
	return 12;
}

int func_93(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x4772
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	var uVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_166[0 /*189*/].f_9))
	{
		return -1;
	}
	iVar4 = func_100(uParam1, iParam3);
	if (Local_44 == 0)
	{
		if (iVar4 != 17)
		{
			if (iVar4 == 1)
			{
				if (func_99(uParam0->f_166[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 8;
							return iVar4;
						}
						if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 3;
						if (!func_337(iLocal_1972, 262144))
						{
							func_98("Gate_PK", &iLocal_1971);
							iLocal_1972 = 0;
							func_309(&iLocal_1972, 262144);
							return iVar4;
						}
						else if (!func_337(iLocal_1972, 524288))
						{
							func_98("Con_PK", &iLocal_1971);
							func_309(&iLocal_1972, 524288);
							return iVar4;
						}
						else if (!func_337(iLocal_1972, 1048576))
						{
							func_98("Con_PK", &iLocal_1971);
							func_309(&iLocal_1972, 1048576);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1971);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_166[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar4 = 11;
							return iVar4;
						}
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 3;
						if (!func_337(iLocal_1972, 262144))
						{
							func_98("Gate_PK", &iLocal_1971);
							iLocal_1972 = 0;
							func_309(&iLocal_1972, 262144);
							return iVar4;
						}
						else if (!func_337(iLocal_1972, 524288))
						{
							func_98("Con_PK", &iLocal_1971);
							func_309(&iLocal_1972, 524288);
							return iVar4;
						}
						else if (!func_337(iLocal_1972, 1048576))
						{
							func_98("Con_PK", &iLocal_1971);
							func_309(&iLocal_1972, 1048576);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1971);
							return iVar4;
						}
					}
				}
				else
				{
					ENTITY::GET_ENTITY_MATRIX(uParam0->f_166[0 /*189*/].f_9, &uVar0, &uVar1, &Var2, &uVar3);
					if (Var2.f_2 <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar4 = 14;
								return iVar4;
							}
							if (uParam1->f_8 == 2)
							{
								iVar4 = 9;
								return iVar4;
							}
							if (uParam1->f_8 == 3)
							{
								iVar4 = 12;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 4;
							if (!func_337(iLocal_1972, 32768))
							{
								func_98("Gate_PI", &iLocal_1970);
								iLocal_1972 = 0;
								func_309(&iLocal_1972, 32768);
								return iVar4;
							}
							else if (!func_337(iLocal_1972, 65536))
							{
								func_98("Con_PI", &iLocal_1970);
								func_309(&iLocal_1972, 65536);
								return iVar4;
							}
							else if (!func_337(iLocal_1972, 131072))
							{
								func_98("Con_PI", &iLocal_1970);
								func_309(&iLocal_1972, 131072);
								return iVar4;
							}
							else
							{
								func_98("Con_PI", &iLocal_1970);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 1;
						if (!func_337(iLocal_1972, 4096))
						{
							func_98("Get_Perf", &iLocal_1967);
							iLocal_1972 = 0;
							func_309(&iLocal_1972, 4096);
							return iVar4;
						}
						else if (!func_337(iLocal_1972, 8192))
						{
							func_98("Con_Perf", &iLocal_1967);
							func_309(&iLocal_1972, 8192);
							return iVar4;
						}
						else if (!func_337(iLocal_1972, 16384))
						{
							func_98("Con_Perf", &iLocal_1967);
							func_309(&iLocal_1972, 16384);
							return iVar4;
						}
						else
						{
							func_98("Con_Perf", &iLocal_1967);
							return iVar4;
						}
					}
				}
			}
			if (iVar4 == 2)
			{
				if (func_99(uParam0->f_166[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 8;
							return iVar4;
						}
						if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 5;
						if (!func_337(iLocal_1972, 64))
						{
							func_98("Gate_Kni", &iLocal_1969);
							iLocal_1972 = 0;
							func_309(&iLocal_1972, 64);
							return iVar4;
						}
						else if (!func_337(iLocal_1972, 128))
						{
							func_98("Con_Kni", &iLocal_1969);
							func_309(&iLocal_1972, 128);
							return iVar4;
						}
						else if (!func_337(iLocal_1972, 256))
						{
							func_98("Con_Kni", &iLocal_1969);
							func_309(&iLocal_1972, 256);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1969);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_166[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar4 = 11;
							return iVar4;
						}
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 5;
						if (!func_337(iLocal_1972, 64))
						{
							func_98("Gate_Kni", &iLocal_1969);
							iLocal_1972 = 0;
							func_309(&iLocal_1972, 64);
							return iVar4;
						}
						else if (!func_337(iLocal_1972, 128))
						{
							func_98("Con_Kni", &iLocal_1969);
							func_309(&iLocal_1972, 128);
							return iVar4;
						}
						else if (!func_337(iLocal_1972, 256))
						{
							func_98("Con_Kni", &iLocal_1969);
							func_309(&iLocal_1972, 256);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1969);
							return iVar4;
						}
					}
				}
				else
				{
					ENTITY::GET_ENTITY_MATRIX(uParam0->f_166[0 /*189*/].f_9, &uVar0, &uVar1, &Var2, &uVar3);
					if (Var2.f_2 <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar4 = 14;
								return iVar4;
							}
							if (uParam1->f_8 == 2)
							{
								iVar4 = 8;
								return iVar4;
							}
							if (uParam1->f_8 == 3)
							{
								iVar4 = 12;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 6;
							if (!func_337(iLocal_1972, 512))
							{
								func_98("Gate_Inv", &iLocal_1968);
								iLocal_1972 = 0;
								func_309(&iLocal_1972, 512);
								return iVar4;
							}
							else if (!func_337(iLocal_1972, 1024))
							{
								func_98("Con_Inv", &iLocal_1968);
								func_309(&iLocal_1972, 1024);
								return iVar4;
							}
							else if (!func_337(iLocal_1972, 2048))
							{
								func_98("Con_Inv", &iLocal_1968);
								func_309(&iLocal_1972, 2048);
								return iVar4;
							}
							else
							{
								func_98("Con_Inv", &iLocal_1968);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 2;
						if (!func_337(iLocal_1972, 8))
						{
							func_98("Gate_Hit", &iLocal_1966);
							iLocal_1972 = 0;
							func_309(&iLocal_1972, 8);
							return iVar4;
						}
						else if (!func_337(iLocal_1972, 16))
						{
							func_98("Con_Hit", &iLocal_1966);
							func_309(&iLocal_1972, 16);
							return iVar4;
						}
						else if (!func_337(iLocal_1972, 32))
						{
							func_98("Con_Hit", &iLocal_1966);
							func_309(&iLocal_1972, 32);
							return iVar4;
						}
						else
						{
							func_98("Con_Hit", &iLocal_1966);
							return iVar4;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, iParam3))
			{
				if (uParam1->f_8 != 0)
				{
					if (uParam1->f_8 == 2)
					{
						iVar4 = 10;
						return iVar4;
					}
					if (uParam1->f_8 == 3)
					{
						iVar4 = 13;
						return iVar4;
					}
					if (uParam1->f_8 == 1)
					{
						iVar4 = 16;
						return iVar4;
					}
				}
				else
				{
					iVar4 = 7;
					if (!func_337(iLocal_1972, 1))
					{
						func_98("Gate_Miss", &iLocal_1965);
						iLocal_1972 = 0;
						func_309(&iLocal_1972, 1);
						return iVar4;
					}
					else if (!func_337(iLocal_1972, 2))
					{
						func_98("Con_Miss", &iLocal_1965);
						func_309(&iLocal_1972, 2);
						return iVar4;
					}
					else if (!func_337(iLocal_1972, 4))
					{
						func_98("Con_Miss", &iLocal_1965);
						func_309(&iLocal_1972, 4);
						return iVar4;
					}
					else
					{
						func_98("Con_Miss", &iLocal_1965);
						return iVar4;
					}
				}
			}
			return iVar4;
		}
		if (func_94(uParam1, uParam2, iParam3))
		{
			if (uParam1->f_8 != 0)
			{
				if (uParam1->f_8 == 2)
				{
					iVar4 = 10;
					return iVar4;
				}
				if (uParam1->f_8 == 3)
				{
					iVar4 = 13;
					return iVar4;
				}
				if (uParam1->f_8 == 1)
				{
					iVar4 = 16;
					return iVar4;
				}
			}
			else
			{
				iVar4 = 7;
				if (!func_337(iLocal_1972, 1))
				{
					func_98("Gate_Miss", &iLocal_1965);
					iLocal_1972 = 0;
					func_309(&iLocal_1972, 1);
					return iVar4;
				}
				else if (!func_337(iLocal_1972, 2))
				{
					func_98("Con_Miss", &iLocal_1965);
					func_309(&iLocal_1972, 2);
					return iVar4;
				}
				else if (!func_337(iLocal_1972, 4))
				{
					func_98("Con_Miss", &iLocal_1965);
					func_309(&iLocal_1972, 4);
					return iVar4;
				}
				else
				{
					func_98("Con_Miss", &iLocal_1965);
					return iVar4;
				}
			}
			return iVar4;
		}
	}
	else if (iVar4 != 17)
	{
		return iVar4;
	}
	return -1;
}

int func_94(var uParam0, var uParam1, int iParam2)//Position - 0x50D6
{
	float fVar0;
	struct<3> Var1;
	
	if (!func_73(*uParam0, *uParam1, 1056964608))
	{
		fVar0 = (uParam0->f_3 * 5f);
		if (ENTITY::IS_ENTITY_AT_COORD(iParam2, *uParam0, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			Var1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(ENTITY::GET_ENTITY_COORDS(iParam2, 1), Var1) - func_95(*uParam0, Var1)) > 15f)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_1961, "HUD_MINI_GAME_SOUNDSET", 1);
				return 1;
			}
		}
	}
	return 0;
}

float func_95(struct<3> Param0, struct<3> Param1)//Position - 0x5158
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_96(struct<3> Param0)//Position - 0x5179
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

bool func_97(int iParam0)//Position - 0x51B8
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar0, &Var1, &Var2, &uVar3);
	if (MISC::ABSF(Var2.f_2) > 0.342f)
	{
		return 0;
	}
	return Var1.f_2 < 0f;
}

void func_98(char* sParam0, var uParam1)//Position - 0x51F6
{
	char cVar0[16];
	
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_337(*uParam1, 1))
	{
		if (!iLocal_1674)
		{
			iLocal_1674 = 1;
			func_309(uParam1, 1);
			return;
		}
		else
		{
			iLocal_1674 = 0;
			if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_337(*uParam1, 1))
	{
		if (!func_337(*uParam1, 2))
		{
			if (!iLocal_1674)
			{
				iLocal_1674 = 1;
				func_309(uParam1, 2);
				return;
			}
			else
			{
				iLocal_1674 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_337(*uParam1, 2))
	{
		if (!func_337(*uParam1, 4))
		{
			if (!iLocal_1674)
			{
				iLocal_1674 = 1;
				func_309(uParam1, 4);
				return;
			}
			else
			{
				iLocal_1674 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_337(*uParam1, 4))
	{
		if (!func_337(*uParam1, 8))
		{
			if (!iLocal_1674)
			{
				iLocal_1674 = 1;
				func_309(uParam1, 8);
				return;
			}
			else
			{
				iLocal_1674 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_337(*uParam1, 8))
	{
		if (!func_337(*uParam1, 16))
		{
			if (!iLocal_1674)
			{
				iLocal_1674 = 1;
				func_309(uParam1, 16);
				return;
			}
			else
			{
				iLocal_1674 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
}

bool func_99(int iParam0)//Position - 0x5381
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar0, &Var1, &Var2, &uVar3);
	if (MISC::ABSF(Var2.f_2) > 0.342f)
	{
		return 0;
	}
	return Var1.f_2 > 0f;
}

int func_100(var uParam0, int iParam1)//Position - 0x53BF
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	Var0 = { *uParam0 };
	ENTITY::GET_ENTITY_MATRIX(iParam1, &Var4, &Var2, &Var3, &Var1);
	Var5 = { Var0 - Var1 };
	fVar6 = MISC::ABSF(func_95(Var5, Var4));
	fVar7 = MISC::ABSF(func_95(Var5, Var3));
	fVar8 = MISC::ABSF(func_95(Var5, Var2));
	fVar9 = ((fVar7 * fVar7) + (fVar8 * fVar8));
	if (fVar6 > 6.5f)
	{
		return 17;
	}
	else
	{
		if (fVar9 > 900f)
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				func_180(&uLocal_1925, 0);
			}
			return 17;
		}
		if (fVar9 > 110f)
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				func_180(&uLocal_1925, 0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_1960, "HUD_MINI_GAME_SOUNDSET", 1);
			return 2;
		}
		else
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				func_180(&uLocal_1925, 0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_1960, "HUD_MINI_GAME_SOUNDSET", 1);
			return 1;
		}
	}
	return -1;
}

void func_101(var uParam0, int iParam1)//Position - 0x54B2
{
	int iVar0;
	int iVar1;
	struct<189> Var2;
	float fVar3;
	float fVar4;
	
	if (iParam1 < 0 || iParam1 > (uParam0->f_D - 1))
	{
		return;
	}
	iVar0 = uParam0->f_D;
	Var2 = { uParam0->f_166[iParam1 /*189*/] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_D)
	{
		if (Var2.f_8 != uParam0->f_166[iVar1 /*189*/].f_8)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[iVar1 /*189*/].f_8) && !ENTITY::IS_ENTITY_DEAD(Var2.f_8))
			{
				if (Var2.f_B > uParam0->f_166[iVar1 /*189*/].f_B)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_B == uParam0->f_166[iVar1 /*189*/].f_B)
				{
					fVar3 = func_102(Var2.f_8, uParam0->f_1B[Var2.f_B /*10*/], 1);
					fVar4 = func_102(uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], 1);
					if (fVar3 < fVar4)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	uParam0->f_166[iParam1 /*189*/].f_C = iVar0;
}

float func_102(int iParam0, struct<3> Param1, int iParam2)//Position - 0x55BF
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, iParam2);
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x55E8
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_279(sParam0, -1);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)//Position - 0x561D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_105(var uParam0, var uParam1, bool bParam2)//Position - 0x5633
{
	int iVar0;
	
	switch (uParam1->f_17)
	{
		case 0:
			func_161(uParam0);
			func_229();
			func_239(&(Local_44.f_77), 0, 0, 1, 1);
			func_238(&(Local_44.f_77), "IB_RETRY", 2, 201, 1, 1, 0);
			func_238(&(Local_44.f_77), "FE_HLP16", 2, 202, 1, 1, 0);
			func_232(1);
			AUDIO::TRIGGER_MUSIC_EVENT("MGSP_FAIL");
			uParam1->f_17 = 1;
			break;
		
		case 1:
			if (func_155(&(Local_44.f_129), &(Local_44.f_12F), &(uParam0->f_11), cLocal_1937, sLocal_1938, uParam0, 78))
			{
				iLocal_2052 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[0 /*189*/].f_9))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_166[0 /*189*/].f_9, 4);
				}
				if (func_236("SPR_HELP_DAMG", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				func_66(&(Local_44.f_129), 1);
				if (*uParam0)
				{
					func_148(0, 0);
					func_147(0, 0);
					func_146();
					if (func_236("SPR_RETR_DES", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("SPR_RETR_DES");
					}
					func_232(0);
					*uParam0 = 1;
					uParam1->f_17 = 6;
				}
				else
				{
					func_148(0, 0);
					func_147(0, 0);
					func_146();
					func_89(&uLocal_1940, 10f);
					func_232(0);
					*uParam0 = 0;
					uParam1->f_17 = 7;
				}
			}
			break;
		
		case 2:
			func_138(&(Local_44.f_77), 1128792064, 7, 1, 1, 1065353216);
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				func_148(0, 0);
				func_147(0, 0);
				func_146();
				iLocal_2057 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2057, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				if (func_236("SPR_RETR_DES", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("SPR_RETR_DES");
				}
				func_232(0);
				*uParam0 = 1;
				uParam1->f_17 = 6;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
			{
				func_148(0, 0);
				func_147(0, 0);
				func_146();
				iLocal_2057 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2057, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
				func_89(&uLocal_1940, 10f);
				func_232(0);
				*uParam0 = 0;
				uParam1->f_17 = 7;
			}
			break;
		
		case 4:
			if (*uParam0 == 1)
			{
				uParam0->f_1 = 0;
			}
			if (uParam1->f_B > 0)
			{
				uParam1->f_10 = { uParam0->f_1B[uParam1->f_B /*10*/] };
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_166[0 /*189*/].f_9, 0))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					func_239(&(Local_44.f_77), 0, 0, 1, 1);
					func_238(&(Local_44.f_77), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_238(&(Local_44.f_77), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_166[0 /*189*/].f_9, 0))
				{
					uParam1->f_17 = 5;
				}
			}
			else
			{
				uParam1->f_17 = 8;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[0 /*189*/].f_9))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_166[0 /*189*/].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (func_5(&uLocal_1940) <= 10f)
			{
				if (bParam2)
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
					func_138(&(Local_44.f_77), 1128792064, 1, 0, 1, 1065353216);
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						*uParam0 = 1;
						iLocal_2057 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2057, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_17 = 6;
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						*uParam0 = 0;
						func_89(&uLocal_1940, 10f);
						iLocal_2057 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2057, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_17 = 6;
					}
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				sLocal_1938 = "SPR_RETR_DES";
				func_66(&(Local_44.f_129), 1);
				uParam1->f_17 = 14;
			}
			break;
		
		case 6:
			if (func_333(500))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				uParam1->f_17 = 8;
			}
			break;
		
		case 7:
			if (func_3(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3));
			}
			if (func_122())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_161(uParam0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_166[0 /*189*/].f_9))
					{
						ENTITY::SET_ENTITY_VELOCITY(uParam0->f_166[0 /*189*/].f_9, 0f, 0f, 0f);
						ENTITY::SET_ENTITY_HEALTH(uParam0->f_166[0 /*189*/].f_9, ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_166[0 /*189*/].f_9));
					}
					uParam1->f_17 = 10;
				}
			}
			break;
		
		case 8:
			if (func_120(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_1A = 8;
				}
				else
				{
					if (bParam2)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						if (Local_44 == 0)
						{
							PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
						}
					}
					uParam1->f_17 = 9;
				}
			}
			break;
		
		case 9:
			iVar0 = 0;
			while (iVar0 < uParam0->f_D)
			{
				if (uParam0->f_166[iVar0 /*189*/].f_8 == uParam1->f_8)
				{
					func_118(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[0 /*189*/].f_9) && uParam0->f_166[0 /*189*/].f_B != -1)
				{
					func_117(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/], uParam0->f_166[0 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/], uParam0->f_166[0 /*189*/].f_B == 0);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				func_11(&uLocal_2048);
				uParam1->f_17 = 11;
			}
			else
			{
				uParam1->f_17 = 13;
			}
			break;
		
		case 10:
			func_148(0, 0);
			func_147(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_44.f_3, Local_44.f_6, 0f);
			SYSTEM::SETTIMERA(0);
			uParam1->f_17 = 12;
			break;
		
		case 11:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				uParam0->f_1 = 1;
				func_11(&uLocal_2048);
				func_108(&(uParam0->f_166[iVar0 /*189*/]), 60f, 0);
				if (func_549(500))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[0 /*189*/].f_9))
					{
						PED::SET_PED_INTO_VEHICLE(uParam0->f_166[0 /*189*/].f_8, uParam0->f_166[0 /*189*/].f_9, -1);
					}
					if (bParam2 && Local_44 == 0)
					{
						func_88(&(uParam0->f_166[0 /*189*/]), 5f);
					}
					uParam1->f_17 = 13;
				}
				return 0;
			}
			else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (uParam0->f_166[0 /*189*/].f_B < uParam0->f_C)
				{
					if (func_3(&uLocal_2048))
					{
						if (func_107(&uLocal_2048) >= 3f)
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					else
					{
						func_10(&uLocal_2048);
					}
				}
			}
			break;
		
		case 12:
			uParam0->f_1A = 8;
			return 0;
			break;
		
		case 13:
			if (uParam1->f_16 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8))
				{
					if (func_106(uParam1))
					{
						func_11(&uLocal_1940);
						sLocal_1938 = "SPR_RETR_STUK";
						uParam1->f_17 = 0;
						return 1;
					}
				}
			}
			return 0;
		
		case 14:
			func_161(uParam0);
			func_4(&(uParam0->f_3));
			uParam0->f_1A = 8;
			break;
	}
	return 1;
}

int func_106(var uParam0)//Position - 0x5CFF
{
	if (uParam0->f_16 != 0)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_9, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_16 == joaat("stunt"))
					{
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) < 3f || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_9))
						{
							if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_9) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 3, 10000))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_107(var uParam0)//Position - 0x5DCE
{
	if (func_3(uParam0))
	{
		if (func_7(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_6(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, float fParam1, bool bParam2)//Position - 0x5E0A
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_16))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_9, 2) };
			func_109(uParam0->f_9, fParam1, bParam2, Var0.x, 0);
		}
	}
}

void func_109(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x5E45
{
	struct<3> Var0;
	bool bVar1;
	float fVar2;
	
	PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0) < fParam1)
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, fParam1);
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	bVar1 = false;
	if (bParam2)
	{
		fVar2 = (MISC::GET_FRAME_TIME() * 45f);
		if (Var0.x < -fVar2)
		{
			bVar1 = true;
			Var0.x = (Var0.x + fVar2);
		}
		else if (Var0.x < fParam3)
		{
			bVar1 = true;
			Var0.x = fParam3;
		}
		else if (Var0.x > fVar2)
		{
			bVar1 = true;
			Var0.x = (Var0.x - fVar2);
		}
		else if (Var0.x > fParam3)
		{
			bVar1 = true;
			Var0.x = fParam3;
		}
		if (Var0.f_1 < -fVar2)
		{
			bVar1 = true;
			Var0.f_1 = (Var0.f_1 + fVar2);
		}
		else if (Var0.f_1 < fParam4)
		{
			bVar1 = true;
			Var0.f_1 = fParam4;
		}
		else if (Var0.f_1 > fVar2)
		{
			bVar1 = true;
			Var0.f_1 = (Var0.f_1 - fVar2);
		}
		else if (Var0.f_1 > fParam4)
		{
			bVar1 = true;
			Var0.f_1 = fParam4;
		}
	}
	else
	{
		if (Var0.x != fParam3)
		{
			bVar1 = true;
			Var0.x = fParam3;
		}
		if (Var0.f_1 != fParam4)
		{
			bVar1 = true;
			Var0.f_1 = fParam4;
		}
	}
	if (bVar1)
	{
		ENTITY::SET_ENTITY_ROTATION(iParam0, Var0, 2, 1);
	}
}

int func_110(var uParam0, bool bParam1)//Position - 0x5F76
{
	char cVar0[16];
	
	if (bParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_9, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, 1, 1);
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
				}
			}
			else
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_10, 1, 0, 0, 1);
				}
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
				}
				else
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, 1, 1);
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_9);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_9, uParam0->f_10, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_9, uParam0->f_13);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9);
	}
	else
	{
		if (uParam0->f_16 == 0)
		{
			return 1;
		}
		uParam0->f_9 = VEHICLE::CREATE_VEHICLE(joaat("stunt"), uParam0->f_10, uParam0->f_13, 1, 1);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4);
		}
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_9, 1);
		func_111(uParam0->f_9, &(Local_44.f_F3), 0, 1);
	}
	AUDIO::ENABLE_STALL_WARNING_SOUNDS(uParam0->f_9, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, 1, 1);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
		{
			PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, 1, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_9, &cVar0);
	if (uParam0->f_14 <= 3)
	{
		VEHICLE::_0xC50CE861B55EAB8B(uParam0->f_9, 0);
		Local_44.f_1 = uParam0->f_9;
	}
	return 1;
}

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x616A
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
		if (((MISC::IS_BIT_SET(uParam1->f_35, 15) || func_116(iParam0)) || (((uParam1->f_26 == 0 && uParam1->f_27 == 0) && uParam1->f_28 == 0) && uParam1->f_9[20] > 0)) && func_115())
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
			func_113(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_2A) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_2A))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_35, func_112(iVar0 + 1)))
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

int func_112(int iParam0)//Position - 0x6557
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

int func_113(int iParam0, var uParam1, var uParam2)//Position - 0x6607
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
	if (func_114(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
	}
	return 1;
}

int func_114(int iParam0)//Position - 0x6739
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

var func_115()//Position - 0x6815
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_116(int iParam0)//Position - 0x6826
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return MISC::IS_BIT_SET(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_117(struct<3> Param0, int iParam1, struct<3> Param2, bool bParam3)//Position - 0x6871
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (bParam3 && Local_44.f_A == 0)
		{
			ENTITY::SET_ENTITY_COORDS(iParam1, 1705.039f, 3251.13f, 40.0016f, 1, 0, 0, 1);
		}
		Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		STREAMING::REQUEST_COLLISION_AT_COORD(Var6);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var6, &fVar5);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		if (bParam3)
		{
			Var4 = { Param0 - Param2 };
		}
		else
		{
			Var4 = { Param2 - Var3 };
		}
		uVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(Var4.x, Var4.f_1);
		fVar1 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var4.x, Var4.f_2) - 270f);
		while (fVar1 > 180f)
		{
			fVar1 = (fVar1 - 360f);
		}
		while (fVar1 < -180f)
		{
			fVar1 = (fVar1 + 360f);
		}
		if (fVar1 < -90f)
		{
			fVar1 = -(180f - MISC::ABSF(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - MISC::ABSF(fVar1));
		}
		if (MISC::ABSF((Var6.f_2 - fVar5)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			Var6.f_2 = (fVar5 + 25f);
			ENTITY::SET_ENTITY_COORDS(iParam1, Var6, 1, 0, 0, 1);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, 1);
		Var2 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) };
		Var2.x = fVar1;
		Var2.f_2 = uVar0;
		ENTITY::SET_ENTITY_ROTATION(iParam1, Var2, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, 0);
		STREAMING::NEW_LOAD_SCENE_START(Var6, ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1), 500f, 0);
	}
}

void func_118(var uParam0, int iParam1, bool bParam2)//Position - 0x6A05
{
	func_119(uParam0, iParam1, (uParam0->f_166[iParam1 /*189*/].f_B - 1), bParam2);
}

void func_119(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6A24
{
	struct<3> Var0;
	var uVar1;
	float fVar2;
	
	if (iParam2 < 0 || iParam2 > (uParam0->f_C - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (uParam0->f_D - 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_166[iParam1 /*189*/].f_8))
	{
		return;
	}
	if (uParam0->f_166[iParam1 /*189*/].f_16 != 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_166[iParam1 /*189*/].f_9))
		{
			return;
		}
	}
	Var0 = { uParam0->f_1B[iParam2 + 1 /*10*/] - uParam0->f_1B[iParam2 /*10*/] };
	uVar1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1);
	fVar2 = 0f;
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_166[iParam1 /*189*/].f_16))
	{
		fVar2 = 0f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(uParam0->f_166[iParam1 /*189*/].f_16))
	{
		fVar2 = 25f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_166[iParam1 /*189*/].f_16))
	{
		fVar2 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_166[iParam1 /*189*/]), uParam0->f_1B[iParam2 /*10*/], uVar1, fVar2);
}

int func_120(var uParam0, bool bParam1)//Position - 0x6B2E
{
	if (!func_110(uParam0, bParam1) || !func_121(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_121(var uParam0)//Position - 0x6B54
{
	char cVar0[16];
	
	if (uParam0->f_15 == 0)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_8, 1000);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
			{
				PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_10, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_8, uParam0->f_13);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		uParam0->f_8 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_9, uParam0->f_14, uParam0->f_15, -1, 1, 1);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = PED::CREATE_PED(uParam0->f_14, uParam0->f_15, uParam0->f_10, uParam0->f_13, 1, 1);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			return 0;
		}
	}
	if (uParam0->f_14 > 3)
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_8))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, 1, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		PED::SET_PED_NAME_DEBUG(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_122()//Position - 0x6C68
{
	if (!MISC::IS_BIT_SET(iLocal_40, 0) && !MISC::IS_BIT_SET(iLocal_40, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_148(1, 0);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		HUD::CLEAR_PRINTS();
	}
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PED::_0x5A7F62FDA59759BD();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!MISC::IS_BIT_SET(iLocal_40, 1))
		{
			func_147(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_41 == 0)
			{
				iLocal_41 = MISC::GET_GAME_TIMER() + 1000;
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				func_137(0, 2, 1);
				func_130(1, 1, 1, 0);
				func_124(1);
				HUD::SET_FRONTEND_ACTIVE(0);
				HUD::SET_PAUSE_MENU_ACTIVE(0);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				func_148(0, 0);
				func_123(0);
			}
			else if (MISC::GET_GAME_TIMER() < iLocal_41)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_123(int iParam0)//Position - 0x6DAC
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!MISC::IS_BIT_SET(iLocal_40, 3))
			{
				MISC::SET_GAME_PAUSED(1);
				MISC::SET_BIT(&iLocal_40, 3);
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_40, 3))
		{
			MISC::SET_GAME_PAUSED(0);
			MISC::CLEAR_BIT(&iLocal_40, 3);
		}
	}
}

void func_124(bool bParam0)//Position - 0x6DF3
{
	if (bParam0)
	{
		func_129();
		if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8D8, 16);
		}
		Global_3839.f_1 = 1;
		if (func_128(0))
		{
			func_125(0);
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

void func_125(int iParam0)//Position - 0x6E56
{
	if (Global_38D7)
	{
		func_127(0, 0);
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
	if (!func_126())
	{
		Global_3839.f_1 = 3;
	}
}

int func_126()//Position - 0x6EC6
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_127(bool bParam0, bool bParam1)//Position - 0x6EED
{
	if (bParam0)
	{
		if (func_128(0))
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

int func_128(int iParam0)//Position - 0x6F61
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

void func_129()//Position - 0x6FBB
{
	if (Global_3839.f_1 == 9 || Global_3839.f_1 == 10)
	{
		Global_3D81 = 0;
		Global_3D7D = 1;
	}
}

void func_130(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x6FE4
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_136(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_126())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_135(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_136(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_135(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_131(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_131(int iParam0)//Position - 0x70B5
{
	if (func_133(iParam0, 0))
	{
		return 1;
	}
	if (func_132())
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

bool func_132()//Position - 0x70F6
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_133(int iParam0, int iParam1)//Position - 0x7107
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_134(-1, 0) == 8;
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

int func_134(int iParam0, bool bParam1)//Position - 0x7152
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

int func_135(int iParam0, var uParam1, var uParam2)//Position - 0x7193
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

void func_136(int iParam0)//Position - 0x71C4
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

void func_137(int iParam0, int iParam1, int iParam2)//Position - 0x71E7
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&iLocal_40, 2);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				MISC::SET_TIME_SCALE(0.2f);
			}
			else
			{
				MISC::SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_40, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		MISC::CLEAR_BIT(&iLocal_40, 2);
	}
}

void func_138(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x7248
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_145(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_144(uParam0->f_1, 256) || (func_144(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_144(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_7B)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_USING_KEYBOARD(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_USING_KEYBOARD(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
						{
							uVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(uVar0, uVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							func_143(sVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_142(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_144(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_141(bParam4, func_141(func_144(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_140(&(uParam0->f_1), 256);
		func_139(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_139(var uParam0, int iParam1)//Position - 0x7508
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_140(var uParam0, int iParam1)//Position - 0x751D
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_141(bool bParam0, float fParam1, float fParam2)//Position - 0x752E
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_142(char* sParam0)//Position - 0x7545
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_143(var uParam0)//Position - 0x7557
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

bool func_144(var uParam0, int iParam1)//Position - 0x7565
{
	return (uParam0 && iParam1) != 0;
}

int func_145(var uParam0)//Position - 0x7574
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_140(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_146()//Position - 0x759B
{
	iLocal_40 = 0;
	iLocal_41 = 0;
	func_130(0, 1, 1, 0);
	func_124(1);
}

void func_147(int iParam0, int iParam1)//Position - 0x75B6
{
	if (iParam0 == 1)
	{
		func_148(0, 0);
		GRAPHICS::ANIMPOSTFX_PLAY("DeathFailOut", 0, 0);
		MISC::SET_BIT(&iLocal_40, 1);
		func_137(1, 2, 0);
		CAM::_SET_CAM_EFFECT(2);
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_40, 1) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
			func_137(0, 2, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		MISC::CLEAR_BIT(&iLocal_40, 1);
	}
}

void func_148(int iParam0, int iParam1)//Position - 0x7617
{
	char* sVar0;
	
	switch (func_149())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(iLocal_40, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, 0);
			MISC::SET_BIT(&iLocal_40, 0);
			func_137(1, 1, 0);
			CAM::_SET_CAM_EFFECT(1);
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_40, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP(sVar0);
			func_137(0, 1, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		MISC::CLEAR_BIT(&iLocal_40, 0);
	}
}

int func_149()//Position - 0x76B7
{
	func_150();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_150()//Position - 0x76D0
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_154(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_153(PLAYER::PLAYER_PED_ID());
			if (func_152(iVar0) && (!func_151(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_152(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_151(int iParam0)//Position - 0x77CD
{
	return Global_8861 == iParam0;
}

bool func_152(int iParam0)//Position - 0x77DB
{
	return iParam0 < 3;
}

int func_153(int iParam0)//Position - 0x77E7
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_154(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_154(int iParam0)//Position - 0x7824
{
	if (func_152(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_155(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)//Position - 0x784E
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", 1);
			func_10(&(uParam0->f_1));
			func_146();
			func_160(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			break;
		
		case 1:
			if (func_122() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!func_337(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", 1);
					func_309(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_337(uParam0->f_4, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", 1);
					func_309(&(uParam0->f_4), 2);
				}
				func_157(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_157(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_148(0, 1);
				func_147(0, 1);
				func_146();
				if (*uParam5)
				{
					MISC::IGNORE_NEXT_RESTART(1);
				}
				else if (!uParam0->f_5)
				{
					func_156(0);
				}
				SCRIPT::SET_NO_LOADING_SCREEN(0);
				MISC::PAUSE_DEATH_ARREST_RESTART(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
				func_148(0, 1);
				func_147(0, 1);
				AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
				SCRIPT::SET_NO_LOADING_SCREEN(0);
				return 1;
			}
			break;
		
		case 4:
			SCRIPT::SET_NO_LOADING_SCREEN(0);
			return 1;
			break;
	}
	return 0;
}

void func_156(bool bParam0)//Position - 0x7A0E
{
	if ((Global_8861 == 9 || Global_8861 == 10) || Global_8861 == 5)
	{
		Global_17705 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_17705 = 0;
	}
}

int func_157(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0x7A54
{
	switch (*uParam1)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
			}
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(1);
			}
			MISC::SET_TIME_SCALE(0.2f);
			if (func_144(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", 0))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(6);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			func_142(sParam3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			if (func_144(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_86);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_88 = 1;
				}
			}
			if (!func_144(iParam5, 1))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			func_239(&(uParam1->f_A), 0, 1, 1, 1);
			func_238(&(uParam1->f_A), "IB_RETRY", 2, 201, 1, 1, 0);
			func_238(&(uParam1->f_A), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_144(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_144(iParam5, 8))
			{
				switch (func_149())
				{
					case 0:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_3(&(uParam1->f_1)))
			{
				func_338(&(uParam1->f_1));
			}
			if (func_144(iParam5, 2))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_338(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (func_144(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_86);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_88 = 1;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam6);
			func_159(uParam0, 0, 0);
			if (!func_144(iParam5, 16) && (func_5(&(uParam1->f_1)) >= uParam1->f_87 || CAM::IS_SCREEN_FADED_OUT()))
			{
				func_138(&(uParam1->f_A), 1128792064, iParam6, bParam7, 1, 1065353216);
				HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_8A = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_144(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_158(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_8A = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_144(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_158(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_144(iParam5, 2))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_8A = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_144(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_158(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_159(uParam0, 0, 0);
			MISC::SET_TIME_SCALE(1f);
			if (uParam1->f_8A || !((MISC::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || MISC::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (MISC::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (func_144(iParam5, 64) && uParam1->f_8A)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_5(&(uParam1->f_4)) <= 0.1f)
			{
				func_159(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_8A;
				return 1;
			}
			break;
	}
	return 0;
}

void func_158(var uParam0)//Position - 0x7E32
{
	if (*uParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
}

int func_159(var uParam0, bool bParam1, bool bParam2)//Position - 0x7E55
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_5(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_4(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_160(var uParam0, float fParam1, float fParam2)//Position - 0x7EE7
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_158(&(uParam0->f_A));
	uParam0->f_86 = fParam1;
	uParam0->f_87 = fParam2;
	uParam0->f_89 = 1;
	uParam0->f_88 = 0;
	*uParam0 = 0;
}

void func_161(var uParam0)//Position - 0x7F37
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_C)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_162(int iParam0, bool bParam1)//Position - 0x7F5C
{
	switch (iLocal_1673)
	{
		case 0:
			func_25();
			func_179();
			func_175();
			iLocal_1673 = 1;
			break;
		
		case 1:
			if (func_174())
			{
				iLocal_1673 = 2;
			}
			break;
		
		case 2:
			func_163(iParam0);
			break;
		
		case 3:
			if (bParam1)
			{
				iLocal_1673 = 0;
			}
			break;
	}
}

void func_163(int iParam0)//Position - 0x7FBA
{
	switch (Local_44.f_A)
	{
		case 3:
			func_173(iParam0);
			func_172(iParam0);
			break;
		
		case 0:
			func_171(iParam0);
			func_170(iParam0);
			break;
		
		case 1:
			func_169(iParam0);
			func_167(iParam0);
			break;
		
		case 2:
			func_166(iParam0);
			func_165(iParam0);
			break;
		
		case 4:
			func_164(iParam0);
			break;
	}
}

void func_164(int iParam0)//Position - 0x8031
{
	if (iParam0 == 5)
	{
		if (!func_337(uLocal_1749, 1))
		{
			func_309(&uLocal_1749, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_337(uLocal_1749, 2))
		{
			func_309(&uLocal_1749, 2);
		}
	}
}

void func_165(int iParam0)//Position - 0x806E
{
	if (iParam0 >= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1737[0]) && !func_337(uLocal_1739, 1))
		{
			uLocal_1737[0] = VEHICLE::CREATE_VEHICLE(joaat("hauler"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1);
			uLocal_1737[1] = VEHICLE::CREATE_VEHICLE(joaat("tanker"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1);
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uLocal_1737[0], uLocal_1737[1], 1065353216);
			uLocal_1738[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_1737[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			func_309(&uLocal_1739, 1);
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("SPR_Fluff_01"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_1737[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_1738[0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1738[0], -235832601) == 1)
				{
				}
				else
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_1738[0], uLocal_1737[0], "SPR_Fluff_01", 786469, 0, 8, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uLocal_1737[0]), 0, 1073741824);
				}
			}
		}
	}
}

void func_166(int iParam0)//Position - 0x8186
{
	if (iParam0 == 4)
	{
		if (!func_337(uLocal_1749, 1))
		{
			func_309(&uLocal_1749, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_337(uLocal_1749, 2))
		{
			func_309(&uLocal_1749, 2);
		}
	}
}

void func_167(int iParam0)//Position - 0x81C3
{
	if (iParam0 >= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1737[0]))
		{
			if (!func_337(uLocal_1739, 1))
			{
				if (func_168(&iLocal_1736))
				{
					uLocal_1737[0] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), -2586.901f, 386.4225f, 208.0505f, 349.0836f, 1, 1);
					func_309(&uLocal_1739, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1737[0]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1738[0]))
			{
				if (!func_337(uLocal_1739, 2))
				{
					uLocal_1738[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_1737[0], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_309(&uLocal_1739, 2);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1737[0]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_1738[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_1737[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_1738[0]))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_1737[0], -2530.873f, 608.701f, 238.9111f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1738[0], -1817882002) == 1)
					{
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_1738[0], uLocal_1737[0], -2530.873f, 608.701f, 238.9111f, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uLocal_1737[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1737[1]))
		{
			if (!func_337(uLocal_1740, 1))
			{
				if (func_168(&iLocal_1736))
				{
					uLocal_1737[1] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), -2582.93f, 384.918f, 208.5764f, 336.8248f, 1, 1);
					func_309(&uLocal_1740, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1737[1]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1738[1]))
			{
				if (!func_337(uLocal_1740, 2))
				{
					uLocal_1738[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_1737[1], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_309(&uLocal_1740, 2);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1737[1]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_1738[1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_1737[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_1738[1]))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_1737[1], -2527.712f, 609.6833f, 239.2568f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1738[1], -1817882002) == 1)
					{
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_1738[1], uLocal_1737[1], -2527.712f, 609.6833f, 239.2568f, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uLocal_1737[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_168(int iParam0)//Position - 0x8461
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_169(int iParam0)//Position - 0x84A8
{
	if (iParam0 == 9)
	{
		if (!func_337(uLocal_1749, 1))
		{
			func_309(&uLocal_1749, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_337(uLocal_1749, 2))
		{
			func_309(&uLocal_1749, 2);
		}
	}
}

void func_170(int iParam0)//Position - 0x84E6
{
	if (iParam0 == 6)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1737[0]) && !func_337(uLocal_1739, 1))
		{
			uLocal_1737[0] = VEHICLE::CREATE_VEHICLE(joaat("jetmax"), -1429.102f, 2602.645f, -1.0709f, 85.2614f, 1, 1);
			uLocal_1738[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_1737[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_1737[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_1738[0]))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_1737[0], -1552.281f, 2641.609f, -0.8283f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1738[0], -1273030092) == 1)
					{
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uLocal_1738[0], uLocal_1737[0], -1552.281f, 2641.609f, -0.8283f, 4, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uLocal_1737[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_309(&uLocal_1739, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_337(uLocal_1739, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_1738[0]))
			{
				PED::DELETE_PED(&(uLocal_1738[0]));
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_1737[0]))
			{
				VEHICLE::DELETE_VEHICLE(&(uLocal_1737[0]));
			}
		}
	}
}

void func_171(int iParam0)//Position - 0x8626
{
	if (iParam0 == 7)
	{
		if (!func_337(uLocal_1749, 1))
		{
			func_309(&uLocal_1749, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_337(uLocal_1749, 2))
		{
			func_309(&uLocal_1749, 2);
		}
	}
}

void func_172(int iParam0)//Position - 0x8663
{
	if (!func_337(uLocal_1739, 1))
	{
		if (iParam0 < 3)
		{
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "SPRStuntAF"))
			{
				STREAMING::REQUEST_COLLISION_AT_COORD(-943.8105f, -3173.692f, 12.9445f);
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1737[0]))
				{
					uLocal_1737[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), -943.8105f, -3173.692f, 12.9445f, 60.537f, 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_1737[0]);
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_1737[0], 1, 1);
					if (Local_44 == 0)
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(uLocal_1737[0]);
					}
					uLocal_1738[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_1737[0], 4, joaat("s_m_m_highsec_01"), -1, 1, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1737[0]))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(uLocal_1737[0], -943.8105f, -3173.692f, 12.9445f, 20f, 20f, 20f, 0, 1, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_1737[0]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_1737[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_1737[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_1738[0]))
						{
							if (!TASK::GET_SCRIPT_TASK_STATUS(uLocal_1738[0], -1817882002) == 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_1738[0], uLocal_1737[0], -6793.876f, -557.0385f, 781.0172f, 50f, 0, joaat("jet"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_1737[0]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_1737[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_1737[0]);
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(uLocal_1737[0]));
				func_309(&uLocal_1739, 1);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uLocal_1737[0]))
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(ENTITY::GET_ENTITY_COORDS(uLocal_1737[0], 1));
	}
}

void func_173(int iParam0)//Position - 0x882C
{
	if (iParam0 == 6)
	{
		if (!func_337(uLocal_1749, 1))
		{
			func_309(&uLocal_1749, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_337(uLocal_1749, 2))
		{
			func_309(&uLocal_1749, 2);
		}
	}
}

int func_174()//Position - 0x8869
{
	switch (Local_44.f_A)
	{
		case 3:
			if (func_168(&iLocal_1736) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_168(&iLocal_1736))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_168(&iLocal_1736))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_168(&iLocal_1736) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("SPR_Fluff_01"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			break;
	}
	return 1;
}

void func_175()//Position - 0x8918
{
	switch (Local_44.f_A)
	{
		case 3:
			func_177(&iLocal_1736, joaat("jet"));
			func_177(&iLocal_1736, joaat("s_m_m_highsec_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "SPRStuntAF");
			break;
		
		case 0:
			func_177(&iLocal_1736, joaat("jetmax"));
			func_177(&iLocal_1736, joaat("s_m_m_dockwork_01"));
			break;
		
		case 1:
			func_177(&iLocal_1736, joaat("sanchez"));
			func_177(&iLocal_1736, joaat("a_m_y_motox_01"));
			break;
		
		case 2:
			func_177(&iLocal_1736, joaat("hauler"));
			func_177(&iLocal_1736, joaat("tanker"));
			func_177(&iLocal_1736, joaat("s_m_m_dockwork_01"));
			TASK::REQUEST_WAYPOINT_RECORDING("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_176(&iLocal_1736);
}

void func_176(int iParam0)//Position - 0x89E4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_177(int iParam0, int iParam1)//Position - 0x8A14
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_178(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

int func_178(var uParam0)//Position - 0x8A71
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_179()//Position - 0x8A9D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_337(uLocal_1749, iVar0))
		{
			func_335(&uLocal_1749, iVar0);
		}
		iVar0++;
	}
}

void func_180(var uParam0, int iParam1)//Position - 0x8ACC
{
	func_181(uParam0, iParam1, 0);
}

void func_181(var uParam0, int iParam1, int iParam2)//Position - 0x8ADD
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
		if (uParam0->f_B)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_B = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
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
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_182(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_182(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

bool func_182(char* sParam0)//Position - 0x8BBA
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_183(var uParam0)//Position - 0x8BCD
{
	float fVar0;
	
	if (uParam0->f_166[0 /*189*/].f_B >= (uParam0->f_C - 2))
	{
		fVar0 = SYSTEM::VDIST(uParam0->f_1B[(uParam0->f_C - 2) /*10*/], func_184());
		if (!STREAMING::STREAMVOL_IS_VALID(uLocal_1959))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_184()) <= ((fVar0 * 1.5f) * (fVar0 * 1.5f)))
			{
				uLocal_1959 = STREAMING::STREAMVOL_CREATE_FRUSTUM(func_184(), uParam0->f_1B[(uParam0->f_C - 1) /*10*/] - func_184(), 2000f, 12, 127);
			}
		}
		else if (!SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_184()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_229();
		}
	}
}

Vector3 func_184()//Position - 0x8C7D
{
	switch (Local_44.f_A)
	{
		case 0:
			return -2591.965f, 2483.167f, 60.8904f;
			break;
		
		case 1:
			return 1827.956f, 585.8948f, 287.6289f;
			break;
		
		case 2:
			return 991.1072f, -2389.983f, 83.3701f;
			break;
		
		case 3:
			return -1721.049f, -2792.948f, 75.4149f;
			break;
		
		case 4:
			return -578.6125f, 5436.721f, 150.1292f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_185(var uParam0)//Position - 0x8D18
{
	if (func_211())
	{
		if (!Local_1952)
		{
			Local_1952 = 1;
			Local_1952.f_1 = 1;
		}
		else
		{
			Local_1952.f_1 = 0;
		}
	}
	else if (func_210())
	{
		if (!Local_1952.f_1 || func_209() >= 1f)
		{
			if (Local_1952)
			{
				Local_1952 = 0;
			}
		}
	}
	if (func_210())
	{
		func_208();
	}
	else
	{
		func_207();
	}
	if (Local_1952)
	{
		if (!func_206(Local_1952.f_2) && !func_204(Local_1952.f_2))
		{
			func_187(&uLocal_1925, Local_1952.f_2);
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(Local_1952.f_6))
			{
				CAM::DESTROY_CAM(Local_1952.f_6, 0);
			}
			if (func_204(Local_1952.f_2))
			{
				Local_1952.f_2 = { func_186(uParam0) };
			}
			func_180(&uLocal_1925, 0);
			Local_1952 = 0;
		}
	}
	else if (CAM::DOES_CAM_EXIST(Local_1952.f_6))
	{
		CAM::DESTROY_CAM(Local_1952.f_6, 0);
	}
	else
	{
		if (func_204(Local_1952.f_2))
		{
			Local_1952.f_2 = { func_186(uParam0) };
		}
		func_180(&uLocal_1925, 0);
		Local_1952 = 0;
	}
}

Vector3 func_186(var uParam0)//Position - 0x8E33
{
	if (uParam0->f_166[0 /*189*/].f_B < (Local_44.f_B - 1))
	{
		return uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_187(var uParam0, struct<3> Param1)//Position - 0x8E68
{
	func_188(uParam0, Param1, 0, 0, 1, 1, 1);
}

void func_188(var uParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x8E7F
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_181(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_189(uParam0, Param1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_189(var uParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x8EB5
{
	int iVar0;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam2;
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
	if (func_182(iVar0))
	{
		func_203();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_198(uParam0, bParam4, bParam6, 0))
		{
			func_197(uParam0, Param1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_194(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam5)
					{
						if (!func_182(iVar0))
						{
							func_279(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_193(1);
							}
						}
					}
				}
			}
		}
		else if (func_194(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam5)
				{
					if (!func_182(iVar0))
					{
						func_279(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							func_193(1);
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
			if (func_182(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
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
					func_181(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					func_181(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					func_181(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					func_181(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					func_181(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_181(uParam0, iVar0, 1);
			}
		}
		if (!func_198(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_192(uParam0))
			{
				func_190(uParam0);
			}
		}
	}
}

void func_190(var uParam0)//Position - 0x918F
{
	if (func_191(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_B)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_B = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_191(int iParam0)//Position - 0x91F8
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

int func_192(var uParam0)//Position - 0x9253
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_A / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_193(bool bParam0)//Position - 0x927E
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

int func_194(char* sParam0)//Position - 0x9328
{
	if (!func_195(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_182(sParam0)) || func_182("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_8861)
	{
		case 0:
		case 3:
			if (func_193(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_193(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_193(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_195(bool bParam0, bool bParam1, bool bParam2)//Position - 0x93C1
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
	if (func_128(0))
	{
		return 0;
	}
	if (func_196())
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

bool func_196()//Position - 0x953D
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

void func_197(var uParam0, struct<3> Param1, int iParam2)//Position - 0x9552
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
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

int func_198(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x95EE
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_202(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_201(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_201(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_202(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_192(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_202(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_201(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_201(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_202(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_202(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_201(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_201(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_202(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_200(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_199(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_199(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_200(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_192(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_195(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_203();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_199(bool bParam0, bool bParam1, bool bParam2)//Position - 0x995A
{
	if (!func_195(bParam0, bParam1, bParam2))
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

int func_200(bool bParam0, bool bParam1, bool bParam2)//Position - 0x99AC
{
	if (!func_195(bParam0, bParam1, bParam2))
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
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_201(bool bParam0, bool bParam1, bool bParam2)//Position - 0x99F5
{
	if (!func_195(bParam0, bParam1, bParam2))
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

int func_202(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9A54
{
	if (!func_195(bParam0, bParam1, bParam2))
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
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_203()//Position - 0x9AAA
{
	MISC::SET_BIT(&Global_8D8, 4);
}

int func_204(struct<3> Param0)//Position - 0x9ABA
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	if (SYSTEM::VDIST2(Param0, func_205(PLAYER::PLAYER_ID())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_205(int iParam0)//Position - 0x9AF0
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_206(struct<3> Param0)//Position - 0x9B03
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_207()//Position - 0x9B2D
{
	Local_1952.f_5 = 0f;
}

void func_208()//Position - 0x9B3B
{
	Local_1952.f_5 = (Local_1952.f_5 + MISC::GET_FRAME_TIME());
}

float func_209()//Position - 0x9B52
{
	return Local_1952.f_5;
}

bool func_210()//Position - 0x9B5F
{
	return PAD::IS_CONTROL_JUST_RELEASED(0, 80);
}

bool func_211()//Position - 0x9B6E
{
	return PAD::IS_CONTROL_PRESSED(0, 80);
}

void func_212(struct<3> Param0)//Position - 0x9B7D
{
	func_180(&uLocal_1925, 0);
	Local_1952.f_2 = { Param0 };
}

void func_213(int iParam0, int iParam1)//Position - 0x9B98
{
	Global_15F91.f_7 = iParam0;
	Global_15F91.f_8 = iParam1;
}

void func_214(int iParam0)//Position - 0x9BB0
{
	Global_10B99 = iParam0;
	Global_10B9A = iParam0;
}

int func_215(var uParam0, bool bParam1, bool bParam2)//Position - 0x9BC4
{
	PAD::STOP_PAD_SHAKE(0);
	switch (iLocal_1672)
	{
		case 0:
			iLocal_193 = 0;
			Local_1921 = { func_184() };
			Local_1922 = { func_228() };
			fLocal_1923 = func_227();
			HUD::DISPLAY_RADAR(0);
			HUD::CLEAR_HELP(1);
			HUD::CLEAR_PRINTS();
			iLocal_1672 = 1;
			break;
		
		case 1:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_149() == 0)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 0, 0);
				}
				else if (func_149() == 1)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 0, 0);
				}
				else if (func_149() == 2)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 0, 0);
				}
				uLocal_1730 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1921, Local_1922, fLocal_1923, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (bParam2)
				{
					CAM::SHAKE_CAM(uLocal_1730, "HAND_SHAKE", 0.07f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_166[0 /*189*/].f_9, 0) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_166[0 /*189*/].f_9))
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(PLAYER::PLAYER_PED_ID(), uParam0->f_166[0 /*189*/].f_9, Local_1921.x, Local_1921.f_1, (Local_1921.f_2 + 15f), 4, ENTITY::GET_ENTITY_SPEED(uParam0->f_166[0 /*189*/].f_9), 262144, 10f, 10f, 1);
				}
				CAM::POINT_CAM_AT_COORD(uLocal_1730, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				iLocal_1672 = 2;
			}
			break;
		
		case 2:
			CAM::STOP_CAM_POINTING(uLocal_1730);
			func_226(uLocal_1730);
			func_10(&uLocal_1726);
			iLocal_1672 = 3;
			break;
		
		case 3:
			if (func_225(&uLocal_1726, fLocal_1924))
			{
				func_10(&uLocal_1726);
				func_226(uLocal_1730);
				iLocal_1672 = 4;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_166[0 /*189*/].f_9) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_166[0 /*189*/].f_9))
				{
					Local_1920 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_166[0 /*189*/].f_9, 1) };
					func_10(&uLocal_1726);
				}
				func_222(uLocal_1730, Local_1920);
			}
			if (func_107(&uLocal_1726) >= 1f)
			{
				iLocal_1672 = 5;
			}
			break;
		
		case 5:
			func_11(&uLocal_1726);
			if (CAM::DOES_CAM_EXIST(uLocal_1729))
			{
				CAM::DESTROY_CAM(uLocal_1729, 0);
			}
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, 1);
			CAM::STOP_CAM_SHAKING(uLocal_1730, 0);
			Local_1921 = { CAM::GET_CAM_COORD(uLocal_1730) };
			Local_1922 = { CAM::GET_CAM_ROT(uLocal_1730, 2) };
			uLocal_1729 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1921.x, Local_1921.f_1, (Local_1921.f_2 + 1000f), 90f, Local_1922.f_1, Local_1922.f_2, fLocal_1923, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1729, uLocal_1730, 500, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_1672 = 6;
			break;
		
		case 6:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_1729) && !CAM::IS_CAM_INTERPOLATING(uLocal_1730))
			{
				if (uParam0->f_166[0 /*189*/].f_D <= Local_44.f_6A[Local_44.f_A])
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_GOLD", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_166[0 /*189*/].f_D <= (((Local_44.f_6A[Local_44.f_A] - Local_44.f_70[Local_44.f_A]) / 2f) + Local_44.f_70[Local_44.f_A]))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_SILVER", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_166[0 /*189*/].f_D <= Local_44.f_70[Local_44.f_A])
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_BRONZE", "HUD_AWARDS", 1);
				}
				else
				{
					func_221(1);
				}
				iLocal_1672 = 7;
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			}
			func_219(uParam0);
			func_66(&(Local_44.f_129), 1);
			func_11(&uLocal_1726);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_166[0 /*189*/].f_9, 0))
			{
				sLocal_1915 = AUDIO::GET_PLAYER_RADIO_STATION_NAME();
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_166[0 /*189*/].f_9, 0);
			}
			iLocal_1672 = 8;
			break;
		
		case 8:
			if (func_218(uParam0))
			{
				iLocal_1672 = 9;
			}
			break;
		
		case 9:
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, 0);
			func_217(&uLocal_1731);
			func_213(1, 0);
			func_216(uParam0);
			func_16();
			func_213(0, 0);
			iLocal_1672 = 0;
			return 0;
			break;
	}
	func_407(uParam0, 0);
	return 1;
}

int func_216(var uParam0)//Position - 0x9FE1
{
	if (uParam0->f_166[0 /*189*/].f_D <= Local_44.f_6A[Local_44.f_A])
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_44.f_18[Local_44.f_A /*8*/]));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_166[0 /*189*/].f_D <= (((Local_44.f_6A[Local_44.f_A] - Local_44.f_70[Local_44.f_A]) / 2f) + Local_44.f_70[Local_44.f_A]))
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_44.f_18[Local_44.f_A /*8*/]));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_166[0 /*189*/].f_D <= Local_44.f_70[Local_44.f_A])
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_44.f_18[Local_44.f_A /*8*/]));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_217(var uParam0)//Position - 0xA0BC
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	*uParam0 = 0;
}

int func_218(var uParam0)//Position - 0xA0CE
{
	float fVar0;
	
	fVar0 = 0f;
	if (!func_3(&(uParam0->f_11.f_2)))
	{
		func_11(&(uParam0->f_11.f_2));
	}
	else
	{
		fVar0 = func_5(&(uParam0->f_11.f_2));
	}
	if (!iLocal_1691)
	{
		if (fVar0 > 1f)
		{
			iLocal_1691 = 1;
		}
	}
	if (!iLocal_1692)
	{
		if (fVar0 > 4.25f)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_11, "TRANSITION_OUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.5f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_1692 = 1;
		}
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_11, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(&(uParam0->f_11.f_2));
		iLocal_1691 = 0;
		iLocal_1692 = 0;
		return 1;
	}
	return 0;
}

void func_219(var uParam0)//Position - 0xA16F
{
	char* sVar0;
	
	sVar0 = func_220(2);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_11, "RESET_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_11, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("SPR_UI_PASS");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Local_44.f_18[Local_44.f_A /*8*/]));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(100f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	uParam0->f_11.f_1 = 5000;
	func_4(&(uParam0->f_11.f_2));
	iLocal_1691 = 0;
	iLocal_1692 = 0;
}

char* func_220(int iParam0)//Position - 0xA1ED
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_221(bool bParam0)//Position - 0xA268
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_149())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

void func_222(var uParam0, struct<3> Param1)//Position - 0xA2DB
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	if (!CAM::DOES_CAM_EXIST(uParam0))
	{
		return;
	}
	if (!CAM::IS_CAM_ACTIVE(uParam0))
	{
		return;
	}
	Var1 = { CAM::GET_CAM_ROT(uParam0, 2) };
	Var2 = { CAM::GET_CAM_COORD(uParam0) };
	Var3 = { func_8(Var1.x, Var1.f_1, (Var1.f_2 + 90f)) };
	Var4 = { Param1 - Var2 };
	Var4 = { func_96(Var4) };
	fVar5 = MISC::ATAN2((Param1.f_2 - Var2.f_2), MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Var2, 0));
	fVar6 = MISC::GET_HEADING_FROM_VECTOR_2D((Param1.x - Var2.x), (Param1.f_1 - Var2.f_1));
	fVar6 = func_224(fVar6, -180f, 180f);
	fVar0 = func_95(func_8(fVar5, Var1.f_1, Var1.f_2), Var3);
	fVar7 = (fVar5 - Var1.x);
	if (fVar7 > 270f)
	{
		fVar7 = (fVar7 - 360f);
	}
	else if (fVar7 < -270f)
	{
		fVar7 = (fVar7 + 360f);
	}
	fVar5 = (Var1.x + fVar7);
	if ((bLocal_1919 && fVar5 > Var1.x) || (!bLocal_1919 && fVar5 < Var1.x))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_1916 = (fLocal_1916 * 0.9f);
		Var1.x = func_223(Var1.x, fVar5, fLocal_1916);
	}
	fVar8 = (fVar6 - Var1.f_2);
	if (fVar8 > 270f)
	{
		fVar8 = (fVar8 - 360f);
	}
	else if (fVar8 < -270f)
	{
		fVar8 = (fVar8 + 360f);
	}
	fVar6 = (Var1.f_2 + fVar8);
	if ((bLocal_1918 && (Var1.f_2 - fVar6) < 0f) || (!bLocal_1918 && (Var1.f_2 - fVar6) > 0f))
	{
		if (!bLocal_1918 && (Var1.f_2 - fVar6) > 0f)
		{
		}
		else if (bLocal_1918 && (Var1.f_2 - fVar6) < 0f)
		{
		}
		fLocal_1917 = (fLocal_1917 * 0.9f);
		Var1.f_2 = func_223(Var1.f_2, fVar6, fLocal_1917);
	}
	CAM::SET_CAM_ROT(uParam0, Var1, 2);
}

float func_223(float fParam0, float fParam1, float fParam2)//Position - 0xA4F1
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_224(float fParam0, float fParam1, float fParam2)//Position - 0xA506
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

int func_225(var uParam0, float fParam1)//Position - 0xA548
{
	if (func_2(uParam0, fParam1))
	{
		func_4(uParam0);
		return 1;
	}
	return 0;
}

void func_226(var uParam0)//Position - 0xA566
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	
	ENTITY::GET_ENTITY_MATRIX(PLAYER::PLAYER_PED_ID(), &Var0, &uVar6, &uVar6, &Var1);
	Var5 = { CAM::GET_CAM_ROT(uParam0, 2) };
	Var4 = { CAM::GET_CAM_COORD(uParam0) };
	Var2 = { func_8((Var5.x + 90f), Var5.f_1, Var5.f_2) };
	Var3 = { func_8(Var5.x, Var5.f_1, (Var5.f_2 + 90f)) };
	fLocal_1916 = 0.2f;
	fLocal_1917 = 0.5f;
	Var7 = { CAM::GET_CAM_COORD(uParam0) - Var1 };
	Var8 = { Var1 + FtoV(func_95(Var7, Var0)) * Var0 };
	if (Var8.f_2 > Var4.f_2)
	{
		bLocal_1919 = true;
	}
	else
	{
		bLocal_1919 = false;
	}
	fVar9 = func_95(Var8, Var2);
	fVar10 = func_95(Var8, Var3);
	if (fVar9 < 0f)
	{
		bLocal_1918 = true;
	}
	else
	{
		bLocal_1918 = false;
	}
}

float func_227()//Position - 0xA642
{
	switch (Local_44.f_A)
	{
		case 0:
			return 46.9415f;
			break;
		
		case 1:
			return 37.9558f;
			break;
		
		case 2:
			return 48.4122f;
			break;
		
		case 3:
			return 35.2464f;
			break;
		
		case 4:
			return 42.5338f;
			break;
	}
	return 0f;
}

Vector3 func_228()//Position - 0xA6A9
{
	switch (Local_44.f_A)
	{
		case 0:
			return -7.5758f, 0f, 148.5448f;
			break;
		
		case 1:
			return -1.0194f, 0.7478f, 23.0628f;
			break;
		
		case 2:
			return -5.3368f, 0.0006f, 158.257f;
			break;
		
		case 3:
			return -1.3523f, 0f, 0.0891f;
			break;
		
		case 4:
			return 18.1009f, -0.5992f, -103.0214f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_229()//Position - 0xA73C
{
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_1959))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_1959);
	}
}

void func_230()//Position - 0xA759
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_231();
}

void func_231()//Position - 0xA769
{
	Global_42CA.f_86 = 1;
}

void func_232(int iParam0)//Position - 0xA777
{
	if (Global_8861 == 9 || Global_8861 == 10)
	{
		Global_17706 = iParam0;
	}
	else
	{
		Global_17706 = 0;
	}
}

void func_233(bool bParam0)//Position - 0xA7A2
{
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(!bParam0);
}

void func_234()//Position - 0xA7B1
{
	func_235();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
}

void func_235()//Position - 0xA7C2
{
	Local_1952 = 0;
	Local_1952.f_1 = 0;
	Local_1952.f_2 = { 0f, 0f, 0f };
	Local_1952.f_6 = 0;
	Local_1952.f_5 = 0f;
}

bool func_236(char* sParam0, int iParam1, char* sParam2)//Position - 0xA7EA
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_237(var uParam0, bool bParam1)//Position - 0xA808
{
	if (bParam1)
	{
		func_140(&(uParam0->f_1), 16);
	}
	else
	{
		func_139(&(uParam0->f_1), 16);
	}
}

int func_238(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA82C
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_7B;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_C = 0;
		uParam0->f_2[iVar1 /*15*/].f_D = 0;
		uParam0->f_2[iVar1 /*15*/].f_E = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_239(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xA8F5
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
	if (bParam1)
	{
		func_140(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_140(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_140(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_140(&(uParam0->f_1), 8192);
	}
}

void func_240(var uParam0)//Position - 0xA96F
{
	func_241(uParam0);
	SYSTEM::SETTIMERA(0);
	func_213(1, 0);
	func_16();
}

void func_241(var uParam0)//Position - 0xA98D
{
	func_278(&(uParam0->f_74F));
	func_256(&(uParam0->f_74F.f_2E5));
	func_242(&(uParam0->f_74F));
}

void func_242(var uParam0)//Position - 0xA9B3
{
	func_255(&(uParam0->f_13C[0 /*2*/]), 254f, 74f, 1);
	func_255(&(uParam0->f_13C[1 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 127f, 1);
	func_255(&(uParam0->f_13C[2 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 297f, 1);
	func_255(&(uParam0->f_13C[3 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 324f, 1);
	func_255(&(uParam0->f_13C[4 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 351f, 1);
	func_255(&(uParam0->f_13C[5 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 378f, 1);
	func_255(&(uParam0->f_13C[6 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 405f, 1);
	func_255(&(uParam0->f_13C[11 /*2*/]), 257f, 297f, 1);
	func_255(&(uParam0->f_13C[12 /*2*/]), 257f, 324f, 1);
	func_255(&(uParam0->f_13C[13 /*2*/]), 257f, 351f, 1);
	func_255(&(uParam0->f_13C[14 /*2*/]), 257f, 378f, 1);
	func_255(&(uParam0->f_13C[15 /*2*/]), 257f, 405f, 1);
	func_255(&(uParam0->f_13C[18 /*2*/]), 298f, 567f, 1);
	func_255(&(uParam0->f_13C[17 /*2*/]), 384f, 567f, 1);
	func_255(&(uParam0->f_13C[16 /*2*/]), 470f, 567f, 1);
	func_251(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_250(uParam0[0 /*9*/], 0, 0, 0, 255);
	func_251(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_250(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_250(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[6 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	func_250(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[5 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	func_250(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[4 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	func_250(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_245(&(uParam0->f_1A4[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	func_244(&(uParam0->f_1A4[1 /*8*/]), 70, 70, 130, 255);
	func_245(&(uParam0->f_1A4[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	func_244(&(uParam0->f_1A4[0 /*8*/]), 255, 255, 255, 255);
	func_245(&(uParam0->f_1A4[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	func_243(&(uParam0->f_1A4[2 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[3 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[4 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[5 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[6 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[7 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[8 /*8*/]), 257f, 429f, 254f, 52f, 1);
	func_243(&(uParam0->f_1A4[8 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	func_243(&(uParam0->f_1A4[11 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	func_243(&(uParam0->f_1A4[12 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	func_243(&(uParam0->f_1A4[13 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[14 /*8*/]), 428f, 564f, 83f, 25f, 1);
	func_243(&(uParam0->f_1A4[14 /*8*/]), 107, 1);
	func_245(&(uParam0->f_1A4[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	func_243(&(uParam0->f_1A4[15 /*8*/]), 108, 1);
	func_245(&(uParam0->f_1A4[16 /*8*/]), 257f, 564f, 83f, 25f, 1);
	func_243(&(uParam0->f_1A4[16 /*8*/]), 109, 1);
	uParam0->f_3DA = 1;
}

void func_243(var uParam0, int iParam1, bool bParam2)//Position - 0xAF63
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_244(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xAF96
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_245(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xAFB6
{
	func_249(uParam0, fParam3, fParam4);
	func_246(uParam0, fParam1, fParam2, bParam5);
}

void func_246(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xAFD4
{
	*uParam0 = func_248(fParam1, 1280);
	uParam0->f_1 = func_247(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_247(float fParam0, int iParam1)//Position - 0xB016
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_248(float fParam0, int iParam1)//Position - 0xB032
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_249(var uParam0, float fParam1, float fParam2)//Position - 0xB04E
{
	uParam0->f_2 = func_248(fParam1, 1280);
	uParam0->f_3 = func_247(fParam2, 720);
}

void func_250(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB070
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_251(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xB090
{
	func_253(fParam0, fParam3, fParam4);
	func_252(fParam0, fParam1, fParam2, bParam5);
}

void func_252(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xB0AE
{
	*uParam0 = func_248(fParam1, 1280);
	uParam0->f_1 = func_247(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_253(var uParam0, float fParam1, float fParam2)//Position - 0xB0F0
{
	uParam0->f_2 = func_248(fParam1, 1280);
	uParam0->f_3 = func_247(fParam2, 720);
}

float func_254(float fParam0, int iParam1, bool bParam2)//Position - 0xB112
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_255(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xB144
{
	*uParam0 = func_248(fParam1, 1280);
	uParam0->f_1 = func_247(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_256(var uParam0)//Position - 0xB16B
{
	func_277(uParam0, 0);
	func_276(&(uParam0->f_B), 0);
	func_275(&(uParam0->f_42), 0);
	func_274(&(uParam0->f_4D), 0);
	func_273(&(uParam0->f_21), 0);
	func_272(&(uParam0->f_2C), 0);
	func_271(&(uParam0->f_37), 0);
	func_270(&(uParam0->f_8F), 0);
	func_269(&(uParam0->f_16), 0);
	func_268(&(uParam0->f_9A), 0);
	func_267(&(uParam0->f_58), 0, 0);
	func_266(&(uParam0->f_63), 0, 5);
	func_265(&(uParam0->f_6E), 0);
	func_264(&(uParam0->f_79), 0);
	func_263(&(uParam0->f_84), 0);
	func_262(&(uParam0->f_A5), 0);
	func_261(&(uParam0->f_B0), 0);
	func_260(&(uParam0->f_BB), 0);
	func_259(&(uParam0->f_C6), 0);
	func_258(&(uParam0->f_D1), 0);
	func_257(&(uParam0->f_DC), 0);
}

void func_257(var uParam0, int iParam1)//Position - 0xB230
{
	*uParam0 = 4;
	uParam0->f_1 = 0.45f;
	uParam0->f_2 = 0.45f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 29;
}

void func_258(var uParam0, int iParam1)//Position - 0xB279
{
	*uParam0 = 0;
	uParam0->f_1 = 0.275f;
	uParam0->f_2 = 0.275f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 28;
}

void func_259(var uParam0, int iParam1)//Position - 0xB2C2
{
	*uParam0 = 0;
	uParam0->f_1 = 0.3375f;
	uParam0->f_2 = 0.3375f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 27;
}

void func_260(var uParam0, int iParam1)//Position - 0xB30B
{
	*uParam0 = 0;
	uParam0->f_1 = 0.35f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 26;
}

void func_261(var uParam0, int iParam1)//Position - 0xB354
{
	*uParam0 = 0;
	uParam0->f_1 = 0.325f;
	uParam0->f_2 = 0.325f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 25;
}

void func_262(var uParam0, int iParam1)//Position - 0xB39D
{
	*uParam0 = 0;
	uParam0->f_1 = 0.6f;
	uParam0->f_2 = 0.6f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 24;
}

void func_263(var uParam0, int iParam1)//Position - 0xB3E9
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 15;
}

void func_264(var uParam0, int iParam1)//Position - 0xB43B
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.5f + 0.004f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 13;
}

void func_265(var uParam0, int iParam1)//Position - 0xB48D
{
	*uParam0 = 5;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.628f - 0.18f) - 0.058f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 12;
}

void func_266(var uParam0, int iParam1, int iParam2)//Position - 0xB4E5
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.889f - 0.01f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 10;
}

void func_267(var uParam0, int iParam1, int iParam2)//Position - 0xB538
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 9;
}

void func_268(var uParam0, int iParam1)//Position - 0xB5A9
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 23;
}

void func_269(var uParam0, int iParam1)//Position - 0xB5F5
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.383f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 2;
}

void func_270(var uParam0, int iParam1)//Position - 0xB640
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.368f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 22;
}

void func_271(var uParam0, int iParam1)//Position - 0xB68C
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.485f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 5;
}

void func_272(var uParam0, int iParam1)//Position - 0xB6D7
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 4;
}

void func_273(var uParam0, int iParam1)//Position - 0xB722
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.409f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 3;
}

void func_274(var uParam0, int iParam1)//Position - 0xB76D
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.655f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 8;
}

void func_275(var uParam0, int iParam1)//Position - 0xB7B9
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.628f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 7;
}

void func_276(var uParam0, int iParam1)//Position - 0xB804
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.346f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 1;
}

void func_277(var uParam0, int iParam1)//Position - 0xB84F
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.781f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0;
}

void func_278(var uParam0)//Position - 0xB89A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0 /*9*/] = 0f;
		(uParam0[iVar0 /*9*/])->f_1 = 0f;
		(uParam0[iVar0 /*9*/])->f_2 = 0f;
		(uParam0[iVar0 /*9*/])->f_3 = 0f;
		(uParam0[iVar0 /*9*/])->f_4 = 0;
		(uParam0[iVar0 /*9*/])->f_5 = 0;
		(uParam0[iVar0 /*9*/])->f_6 = 0;
		(uParam0[iVar0 /*9*/])->f_7 = 0;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_279(char* sParam0, int iParam1)//Position - 0xB905
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_280(var uParam0)//Position - 0xB91C
{
	func_284();
	switch (iLocal_1958)
	{
		case 0:
			func_10(uParam0);
			func_283(&uLocal_1953, 3);
			iLocal_1958 = 1;
			break;
		
		case 1:
			if (func_2(uParam0, 1f))
			{
				func_281(&uLocal_1953, 1, 0, 1, 3, 1, 0);
				iLocal_1958 = 2;
			}
			break;
		
		case 2:
			if (func_281(&uLocal_1953, 0, 0, 1, 3, 1, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_281(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xB992
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	iVar3 = SYSTEM::FLOOR(func_5(&(uParam0->f_2)));
	iVar4 = (iVar3 - iParam4);
	bVar5 = false;
	if (!func_337(uParam0->f_1, 8))
	{
		if (iVar4 >= -3 && !func_337(uParam0->f_1, 1))
		{
			func_309(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			func_283(uParam0, iVar4);
		}
		else if (iVar4 >= -2 && !func_337(uParam0->f_1, 2))
		{
			func_309(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			func_283(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !func_337(uParam0->f_1, 4))
		{
			func_309(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			func_283(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !func_337(uParam0->f_1, 16))
		{
			if (MISC::ABSF((func_5(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_309(&(uParam0->f_1), 16);
					AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar4 >= 0 && !func_337(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
			}
			func_309(&(uParam0->f_1), 8);
			HUD::GET_HUD_COLOUR(18, &iVar6, &iVar7, &iVar8, &uVar9);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
			func_142("CNTDWN_GO");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (!bParam1)
			{
				bVar5 = true;
			}
		}
	}
	else if (iVar4 == 1)
	{
		bVar5 = true;
	}
	if ((iParam2 && func_282()) || iVar3 > 5)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			func_4(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

int func_282()//Position - 0xBBE9
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 18) || PAD::IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_283(var uParam0, int iParam1)//Position - 0xBC1B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(-1);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_284()//Position - 0xBC73
{
	struct<6> Var0;
	int iVar1;
	
	iVar1 = Global_1787F;
	func_285(Var0, 0, 0, 0, 0, iVar1);
}

void func_285(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xBC8F
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (Global_10B93 != 6)
	{
		if (Global_10B95 == -1)
		{
			if (func_299(1, Param0))
			{
				if (Global_10B96 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_28 > fVar0)
				{
					Global_10B95 = MISC::GET_GAME_TIMER();
					Local_29 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_28 = 0f;
				}
				else
				{
					fLocal_28 = (fLocal_28 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_28 = 0f;
			}
		}
		else
		{
			if (!func_299(0, Param0))
			{
				Global_10B95 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_10B95);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_10B93)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar11 = func_149();
				if (Global_10B96 == 1 && Global_10B94 == 62)
				{
					iVar11 = Global_17C49.f_6C1.f_21B.f_C8E;
				}
				switch (iVar11)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { func_288(Global_10B94, Global_10B96, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar5, fVar6, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_31 = 0.14f;
				}
				else
				{
					fLocal_31 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_287(&Var4) > fLocal_31)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_29.x, (Local_29.f_1 + fLocal_30));
							Global_10B98 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_10B97 == 1)
				{
					func_286();
					fLocal_28 = 0f;
				}
			}
			else
			{
				func_286();
				fLocal_28 = 0f;
			}
		}
	}
}

void func_286()//Position - 0xBF74
{
	if (Global_10B93 != 6)
	{
	}
	if (Global_10B98)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_10B98 = 0;
		Global_4354.f_1C27 = 0;
	}
	Global_10B93 = 6;
	Global_10B95 = -1;
	Global_10B94 = -1;
}

float func_287(var uParam0)//Position - 0xBFAC
{
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(uParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

struct<2> func_288(int iParam0, int iParam1, int iParam2)//Position - 0xBFBF
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_298(iParam0) };
			break;
		
		case 7:
			Var0 = { func_296(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_295(iParam2) };
					break;
				
				case 8:
					Var0 = { func_294(iParam2) };
					break;
				
				case 7:
					Var0 = { func_293(iParam2) };
					break;
				
				case 10:
					Var0 = { func_292(iParam2) };
					break;
				
				case 5:
					Var0 = { func_291(iParam2) };
					break;
				
				case 4:
					Var0 = { func_290(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_289(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_289(int iParam0)//Position - 0xC097
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_290(int iParam0)//Position - 0xC1EA
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_291(int iParam0)//Position - 0xC21E
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_292(int iParam0)//Position - 0xC252
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_293(int iParam0)//Position - 0xC286
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_294(int iParam0)//Position - 0xC2BA
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_295(int iParam0)//Position - 0xC2F8
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_296(int iParam0)//Position - 0xC32C
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_297(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_297(int iParam0)//Position - 0xC364
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<2> func_298(int iParam0)//Position - 0xC7B1
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_13D03[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_17C49.f_1CAD.f_63.f_CB[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_299(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xC81A
{
	if (((!func_301(0) || Global_10BA2) || Global_10B97 == 1) || !CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	switch (Global_10B93)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(&uParam1, "NONE") || MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
			{
				Global_10B93 = 3;
			}
			else
			{
				Global_10B93 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				Global_10B93 = 2;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				Global_10B93 = 4;
				return 1;
			}
			else if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				Global_10B93 = 3;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
			}
			else
			{
				Global_10B93 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_10B93 = 5;
			}
			break;
		
		case 5:
			if ((CUTSCENE::IS_CUTSCENE_PLAYING() || func_128(0)) || func_300(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_300(bool bParam0)//Position - 0xC932
{
	if (bParam0)
	{
		return (Global_42CA.f_4 && Global_42CA.f_68 == 4);
	}
	return Global_42CA.f_4;
}

int func_301(int iParam0)//Position - 0xC95B
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_302(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_302(int iParam0)//Position - 0xC97D
{
	return func_303(iParam0, Global_8861);
}

int func_303(int iParam0, int iParam1)//Position - 0xC98E
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

void func_304(var uParam0)//Position - 0xCB6F
{
	char cVar0[16];
	int iVar1;
	
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_44.f_A + 1, 16);
	func_11(&(uParam0->f_3));
	uParam0->f_166[0 /*189*/].f_F = 0f;
	iLocal_1745 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	if (Local_44 == 0)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
	}
	uParam0->f_1 = 1;
	func_11(&uLocal_2048);
	iVar1 = 0;
	while (iVar1 < uParam0->f_D)
	{
		func_305(&(uParam0->f_166[iVar1 /*189*/]));
		if (Local_44 != 1)
		{
			if (iVar1 != 0)
			{
				func_76(uParam0, uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/].f_7, iVar1);
			}
		}
		else if (bLocal_2056)
		{
			if (iVar1 > 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_166[iVar1 /*189*/].f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_166[iVar1 /*189*/].f_9))
				{
					if (iVar1 == 1 && Local_44.f_A == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, &cVar0, 262144, 0, 8, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_166[iVar1 /*189*/].f_9), 0, 1073741824);
				}
			}
		}
		else if (iVar1 != 0)
		{
			func_76(uParam0, uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/].f_7, iVar1);
		}
		iVar1++;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_166[0 /*189*/].f_9, 0))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_166[0 /*189*/].f_9, 1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1915))
		{
			AUDIO::SET_RADIO_TO_STATION_NAME(sLocal_1915);
			AUDIO::SET_VEH_RADIO_STATION(uParam0->f_166[0 /*189*/].f_9, sLocal_1915);
		}
	}
}

void func_305(var uParam0)//Position - 0xCD52
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_9))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_9);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_8, 1);
		}
	}
	uParam0->f_B = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_16))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, 1, 1);
		}
	}
}

var func_306()//Position - 0xCDB5
{
	return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_307(var uParam0)//Position - 0xCDC5
{
	uParam0->f_C = uParam0->f_C;
}

void func_308(var uParam0)//Position - 0xCDD5
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		func_108(&(uParam0->f_166[iVar0 /*189*/]), 60f, 1);
		iVar0++;
	}
}

void func_309(int iParam0, int iParam1)//Position - 0xCE1C
{
	func_60(iParam0, iParam1);
}

int func_310(var uParam0, int iParam1, bool bParam2)//Position - 0xCE2C
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (iParam1 < 0 || iParam1 > 32)
	{
		return 0;
	}
	iVar1 = -1;
	if (iParam1 == (uParam0->f_C - 1))
	{
		iVar1 = 38;
	}
	fVar2 = 1.2f;
	if (!bParam2)
	{
		fVar2 = 0.7f;
	}
	if (!func_316(&(uParam0->f_1B[iParam1 /*10*/]), iVar1, fVar2, iParam1, uParam0->f_C))
	{
		return 0;
	}
	if (bParam2)
	{
		Var3 = { uParam0->f_1B[iParam1 /*10*/] };
		Var4 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_C - 1))
		{
			if (!func_73(uParam0->f_1B[iParam1 /*10*/], uParam0->f_1B[iParam1 + 1 /*10*/], 1056964608))
			{
				Var3 = { uParam0->f_1B[iParam1 + 1 /*10*/] };
			}
		}
		if (Local_44 == 1)
		{
			if (Local_44.f_A == 1)
			{
				if (func_337(uParam0->f_1B[8 /*10*/].f_9, 4))
				{
					func_335(&(uParam0->f_1B[8 /*10*/].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var4 = { uParam0->f_1B[(iParam1 - 1) /*10*/] };
		}
		if (!func_311(Var4, &(uParam0->f_1B[iParam1 /*10*/]), Var3, 16f))
		{
			return 0;
		}
		if (iParam1 + 1 < uParam0->f_C)
		{
			if (iParam1 + 2 >= 33)
			{
				Var0 = { uParam0->f_1B[0 /*10*/] };
			}
			else
			{
				Var0 = { uParam0->f_1B[iParam1 + 2 /*10*/] };
			}
			if (!func_311(uParam0->f_1B[iParam1 /*10*/], &(uParam0->f_1B[iParam1 + 1 /*10*/]), Var0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_311(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3)//Position - 0xCFAA
{
	if (!func_312(Param0, uParam1, Param2, fParam3))
	{
		return 0;
	}
	return 1;
}

int func_312(struct<3> Param0, var uParam1, struct<3> Param2, var uParam3)//Position - 0xCFCB
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	Param0 = { Param0 };
	func_80(&(uParam1->f_6));
	if (uParam1->f_7 == 2)
	{
		uVar0 = func_314(uParam1->f_7, Param0, *uParam1, Param2);
		func_552(func_553(func_92()), &uVar1, &uVar2, &uVar3, &uVar4);
		uParam1->f_6 = GRAPHICS::CREATE_CHECKPOINT(uVar0, *uParam1, Param2, uParam3, uVar1, uVar2, uVar3, func_91(*uParam1, 25, 200), 0);
	}
	else if (uParam1->f_7 == 3)
	{
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			func_552(func_553(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = GRAPHICS::CREATE_CHECKPOINT(func_313(uParam1->f_7, uParam1->f_8), *uParam1, Param2, uParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
		}
		else if (uParam1->f_8 == 1)
		{
			func_552(func_553(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = GRAPHICS::CREATE_CHECKPOINT(func_313(uParam1->f_7, uParam1->f_8), *uParam1, Param2, uParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
		}
	}
	else
	{
		uParam1->f_6 = GRAPHICS::CREATE_CHECKPOINT(func_313(uParam1->f_7, uParam1->f_8), *uParam1, Param2, uParam3, 254, 207, 12, func_91(*uParam1, 25, 200), 0);
	}
	if (uParam1->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_313(int iParam0, int iParam1)//Position - 0xD128
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 9;
			break;
		
		case 2:
			return 35;
			break;
		
		case 3:
			if (iParam1 == 2)
			{
				return 36;
			}
			else if (iParam1 == 3)
			{
				return 37;
			}
			else if (iParam1 == 1)
			{
				return 38;
			}
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 25;
			break;
		
		case 6:
			return 30;
			break;
		
		case 7:
			return 20;
			break;
		
		case 8:
			return 24;
			break;
		
		case 9:
			return 29;
			break;
		
		case 10:
			return 34;
			break;
	}
	return 5;
}

int func_314(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0xD1F3
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	fVar3 = 180f;
	fVar4 = 140f;
	fVar5 = 80f;
	if (iParam0 == 0)
	{
		iVar6 = 5;
		iVar7 = 6;
		iVar8 = 7;
	}
	else if (iParam0 == 2)
	{
		iVar6 = 10;
		iVar7 = 11;
		iVar8 = 12;
	}
	else if (iParam0 == 5)
	{
		iVar6 = 25;
		iVar7 = 26;
		iVar8 = 27;
	}
	else if (iParam0 == 6)
	{
		iVar6 = 30;
		iVar7 = 31;
		iVar8 = 32;
	}
	else if (iParam0 == 7)
	{
		iVar6 = 20;
		iVar7 = 21;
		iVar8 = 22;
	}
	if (!func_315(Param1, 0f, 0f, 0f))
	{
		Var0 = { Param1 - Param2 };
		Var1 = { Param3 - Param2 };
		fVar2 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Var1.x, Var1.f_1);
		if (fVar2 > 180f)
		{
			fVar2 = (360f - fVar2);
		}
		if (fVar2 < fVar5)
		{
			return iVar8;
		}
		else if (fVar2 < fVar4)
		{
			return iVar7;
		}
		else if (fVar2 < fVar3)
		{
			return iVar6;
		}
	}
	return iVar6;
}

bool func_315(struct<3> Param0, struct<3> Param1)//Position - 0xD2F2
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_316(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)//Position - 0xD31B
{
	if (!func_317(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_317(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD344
{
	func_83(uParam0);
	*uParam0 = HUD::ADD_BLIP_FOR_COORD(Param1);
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		HUD::SET_BLIP_SPRITE(*uParam0, iParam2);
	}
	HUD::SET_BLIP_SCALE(*uParam0, uParam3);
	HUD::SET_BLIP_DISPLAY(*uParam0, 4);
	if (iParam6 == 2 || iParam6 == 3)
	{
		HUD::SET_BLIP_COLOUR(*uParam0, 2);
	}
	if (iParam6 == 1)
	{
		HUD::SET_BLIP_COLOUR(*uParam0, 3);
	}
	if (iParam4 == (iParam5 - 1))
	{
		HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPFIN");
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam0);
	}
	else
	{
		if (iParam6 == 1)
		{
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPINV");
		}
		else if (iParam6 == 2 || iParam6 == 3)
		{
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPKNF");
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPDEF");
		}
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam0);
	}
	return 1;
}

void func_318(char* sParam0, int iParam1, int iParam2)//Position - 0xD40B
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 0);
}

int func_319(var uParam0)//Position - 0xD424
{
	switch (uParam0->f_19)
	{
		case 0:
			func_124(1);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", 0);
			Local_44.f_76 = func_332();
			switch (Local_44)
			{
				case 0:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", 0);
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMedals_FEED", 0);
					break;
				
				case 1:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPROffroad", 0);
					break;
				
				case 2:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Triathlon", 0);
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMedals_FEED", 0);
					break;
			}
			uParam0->f_19 = 1;
			break;
		
		case 1:
			func_327(uParam0);
			uParam0->f_19 = 2;
			break;
		
		case 2:
			if (func_322(uParam0))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_44.f_76))
					{
						switch (Local_44)
						{
							case 0:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPRRaces") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMedals_FEED"))
								{
									uParam0->f_19 = 3;
								}
								break;
							
							case 1:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPROffroad"))
								{
									uParam0->f_19 = 3;
								}
								break;
							
							case 2:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Triathlon") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMedals_FEED"))
								{
									uParam0->f_19 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 3:
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			if (Local_44.f_A == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_320(uParam0);
			}
			uParam0->f_19 = 4;
			break;
		
		case 4:
			if (Local_44.f_A == 0)
			{
				return 0;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_166[0 /*189*/].f_9))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_166[0 /*189*/].f_9, 1);
				}
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::REQUEST_COLLISION_AT_COORD(uParam0->f_166[0 /*189*/].f_10);
					STREAMING::NEW_LOAD_SCENE_START(uParam0->f_166[0 /*189*/].f_10, ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_166[0 /*189*/].f_9), 5000f, 0);
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_166[0 /*189*/].f_9))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_166[0 /*189*/].f_9, 0);
					}
					func_308(uParam0);
					return 0;
				}
			}
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
	}
	return 1;
}

int func_320(var uParam0)//Position - 0xD648
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		if (!func_321(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_321(var uParam0, int iParam1)//Position - 0xD679
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_120(&(uParam0->f_166[iParam1 /*189*/]), 1);
	}
	return func_120(&(uParam0->f_166[iParam1 /*189*/]), 0);
}

int func_322(var uParam0)//Position - 0xD6BE
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		if (!func_323(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_323(var uParam0, int iParam1)//Position - 0xD6EF
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_324(&(uParam0->f_166[iParam1 /*189*/]));
}

int func_324(var uParam0)//Position - 0xD719
{
	if (!func_326(uParam0) || !func_325(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_325(var uParam0)//Position - 0xD73D
{
	if (uParam0->f_16 == 0)
	{
		return 1;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_16);
}

bool func_326(var uParam0)//Position - 0xD759
{
	if (uParam0->f_15 == 0)
	{
		return 0;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_15);
}

void func_327(var uParam0)//Position - 0xD775
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		func_328(uParam0, iVar0);
		iVar0++;
	}
}

void func_328(var uParam0, int iParam1)//Position - 0xD79A
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_329(&(uParam0->f_166[iParam1 /*189*/]));
}

void func_329(var uParam0)//Position - 0xD7C3
{
	func_331(uParam0);
	func_330(uParam0);
}

void func_330(var uParam0)//Position - 0xD7D7
{
	if (uParam0->f_16 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_16);
}

void func_331(var uParam0)//Position - 0xD7F2
{
	if (uParam0->f_15 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_15);
}

var func_332()//Position - 0xD80D
{
	return unk_0x67D02A194A2FC2BD("SC_LEADERBOARD");
}

int func_333(int iParam0)//Position - 0xD81D
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam0);
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	return 0;
}

void func_334()//Position - 0xD841
{
	if (CAM::DOES_CAM_EXIST(uLocal_1729))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_1729))
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::SET_CAM_ACTIVE(uLocal_1729, 0);
		}
		CAM::DESTROY_CAM(uLocal_1729, 0);
	}
}

void func_335(int iParam0, int iParam1)//Position - 0xD879
{
	func_336(iParam0, iParam1);
}

void func_336(var uParam0, var uParam1)//Position - 0xD889
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_337(int iParam0, int iParam1)//Position - 0xD89E
{
	return (iParam0 && iParam1) != 0;
}

void func_338(var uParam0)//Position - 0xD8AD
{
	if (!func_3(uParam0))
	{
		func_11(uParam0);
	}
}

void func_339()//Position - 0xD8C5
{
	func_340(&uLocal_1233);
}

void func_340(var uParam0)//Position - 0xD8D4
{
	if (uParam0->f_4 != 0)
	{
		func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_406(uParam0);
		func_345(uParam0);
		func_344(&Global_1C1269);
	}
	if (Global_1C017E.f_A94 != 0 || Global_1C017E.f_C70)
	{
		func_342();
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_341(&(Global_1C171A.f_31));
	}
	Global_2554DA.f_ED9 = 0;
}

void func_341(var uParam0)//Position - 0xD975
{
	uParam0->f_1 = 0;
}

void func_342()//Position - 0xD982
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1C017E[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1C017E.f_A90[iVar0] = 0;
		iVar0++;
	}
	Global_1C017E.f_A94 = 0;
	Global_1C017E.f_A95 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1C017E.f_A96[iVar0] = 0;
		StringCopy(&(Global_1C017E.f_A9D[iVar0 /*6*/]), "", 24);
		Global_1C017E.f_AC2[iVar0] = 0;
		Global_1C017E.f_AC9[iVar0] = 0;
		iVar0++;
	}
	Global_1C017E.f_AD0 = 0;
	Global_1C017E.f_AD1 = 0;
	Global_1C017E.f_AD2 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C017E.f_AD3[iVar0] = 0;
		Global_1C017E.f_AD7[iVar0] = 0;
		iVar0++;
	}
	Global_1C017E.f_ADB = 0;
	func_343(&(Global_1C017E.f_ADC));
	func_341(&(Global_1C017E.f_B07));
	Global_1C017E.f_B09 = -1;
	Global_1C017E.f_B0A = 0;
	func_341(&(Global_1C017E.f_B0B));
	Global_1C017E.f_B0D = 0;
	func_341(&(Global_1C017E.f_B0E));
	Global_1C017E.f_B10 = 0;
	Global_1C017E.f_ADC.f_1C = 0;
	Global_1C017E.f_ADC.f_1B = 0;
	Global_1C017E.f_C70 = 0;
}

void func_343(var uParam0)//Position - 0xDAEE
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_19 = 1;
	uParam0->f_1A = 0;
	uParam0->f_1B = 0;
	uParam0->f_1C = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1D[iVar0] = 0;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_344(var uParam0)//Position - 0xDB46
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_10), "", 64);
		(uParam0[iVar1 /*100*/])->f_20 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_2D = { Var0 };
		(uParam0[iVar1 /*100*/])->f_3A = 0;
		(uParam0[iVar1 /*100*/])->f_3B = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_3C[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_43[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_4B = 0;
		(uParam0[iVar1 /*100*/])->f_4A = 0;
		(uParam0[iVar1 /*100*/])->f_4C = 0;
		(uParam0[iVar1 /*100*/])->f_4D = 0;
		(uParam0[iVar1 /*100*/])->f_4E = 0;
		(uParam0[iVar1 /*100*/])->f_4F = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_50), "", 16);
		iVar1++;
	}
	func_341(&(Global_1C017E.f_B0E));
}

void func_345(var uParam0)//Position - 0xDC28
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_F6 = 0;
	uParam0->f_F6.f_1 = -1;
	uParam0->f_F6.f_2 = 0;
	func_341(&(uParam0->f_F6.f_3));
	uParam0->f_F6.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_F6.f_6[iVar0 /*15*/] = -1;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_F6.f_BB[iVar0] = 0;
		iVar0++;
	}
}

void func_346(var uParam0, var uParam1, var uParam2)//Position - 0xDCB0
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1C0000 = 0;
	func_341(&(Global_1C0000.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
}

int func_347(var uParam0, var uParam1)//Position - 0xDCDC
{
	if (!func_398())
	{
		return 0;
	}
	if (func_392(&bLocal_189, uParam0))
	{
		if (iLocal_191 || bLocal_190)
		{
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, 0, -1, 0, 0, 1);
			if (!*uParam1)
			{
				if (iLocal_191)
				{
					if (func_3(&uLocal_186))
					{
						if (func_225(&uLocal_186, SYSTEM::TO_FLOAT(0)))
						{
							iLocal_191 = 0;
							bLocal_190 = !bLocal_190;
						}
					}
					else
					{
						func_11(&uLocal_186);
					}
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					func_138(&(Local_44.f_77), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_352();
		}
		return 0;
	}
	if (bLocal_189)
	{
		func_351();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
		}
	}
	else
	{
		Local_44.f_A = -1;
	}
	func_348();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
	}
	return 1;
}

void func_348()//Position - 0xDDD7
{
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MinigameTransitionIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
	}
	GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, 0);
	iLocal_185 = 0;
	MISC::SET_GAME_PAUSED(0);
	func_124(0);
	func_349();
}

void func_349()//Position - 0xDE2C
{
	Global_38DE = 0;
	func_350();
}

void func_350()//Position - 0xDE3C
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

void func_351()//Position - 0xDE60
{
	switch (Global_1787F)
	{
		case 0:
			Local_44.f_A = 0;
			break;
		
		case 1:
			Local_44.f_A = 1;
			break;
		
		case 2:
			Local_44.f_A = 2;
			break;
		
		case 3:
			Local_44.f_A = 3;
			break;
		
		case 4:
			Local_44.f_A = 4;
			break;
	}
}

void func_352()//Position - 0xDEB7
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_353(&uLocal_246);
}

void func_353(var uParam0)//Position - 0xDECA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var6;
	int iVar7;
	struct<2> Var8;
	struct<11> Var9;
	struct<2> Var10;
	char cVar11[16];
	struct<2> Var12;
	struct<11> Var13;
	
	if (!bLocal_245)
	{
		if (!MISC::IS_PC_VERSION())
		{
			HUD::SET_WIDESCREEN_FORMAT(1);
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	func_138(&(Local_44.f_77), 1128792064, 1, 0, 1, 1065353216);
	func_384("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	func_379(uParam0->f_1A4[0 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[1 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[2 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[3 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[4 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[5 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[6 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[7 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[8 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[6 /*8*/], 0, 0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	func_378(&(uParam0->f_2E5.f_A5));
	func_377(&(uParam0->f_13C[0 /*2*/]), &(uParam0->f_2E5.f_A5), "SPR_TITLE", 0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	func_375(&(uParam0->f_2E5.f_B0));
	func_374(&(uParam0->f_2E5.f_B0), &(uParam0->f_1A4[0 /*8*/]), 0f, 0f);
	func_372(&(uParam0->f_13C[1 /*2*/]), &(uParam0->f_2E5.f_B0), "SPR_CHALLENGES", 1, 0);
	func_371(&(uParam0->f_2E5.f_B0));
	func_374(&(uParam0->f_2E5.f_B0), &(uParam0->f_1A4[1 /*8*/]), 0f, 0f);
	func_372(&(uParam0->f_13C[2 /*2*/]), &(uParam0->f_2E5.f_B0), "SPR_INFO", 1, 0);
	func_371(&(uParam0->f_2E5.f_B0));
	func_374(&(uParam0->f_2E5.f_B0), &(uParam0->f_1A4[5 /*8*/]), 0f, 0f);
	func_372(&(uParam0->f_13C[3 /*2*/]), &(uParam0->f_2E5.f_B0), "SPR_AWARD_TITLE", 1, 0);
	func_371(&(uParam0->f_2E5.f_B0));
	func_378(&(uParam0->f_2E5.f_C6));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_379(uParam0->f_1A4[16 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[17 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[18 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[19 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[20 /*8*/], 0, 0);
	func_379(uParam0->f_1A4[21 /*8*/], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var6 = { uParam0->f_13C[iVar2 /*2*/] };
			if (Global_17C49.f_4391.f_6[iVar0] > 0f)
			{
				iLocal_195[iVar0] = SYSTEM::CEIL(Global_17C49.f_4391.f_6[iVar0]);
			}
			else
			{
				iLocal_195[iVar0] = -1;
			}
			if (iVar0 == Global_1787F)
			{
				func_243(&(uParam0->f_1A4[iVar1 /*8*/]), 1, 1);
				func_379(uParam0->f_1A4[iVar1 /*8*/], 0, 0);
				func_375(&(uParam0->f_2E5.f_C6));
				switch (Global_17C49.f_4391.f_C[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_17C49.f_4391.f_6[iVar0] <= 0f)
							{
								func_251(&Var5, 269f, 0f, 32f, 32f, 0);
								func_250(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_13C[iVar2 /*2*/].f_1 + fLocal_197);
								Var6 = (Var5 + fLocal_196);
								if (!bLocal_245)
								{
									func_370(&Var5, 0);
								}
								func_369(&Var5, 1);
								func_384("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_245)
								{
									func_368(&Var6, &(uParam0->f_2E5.f_C6));
								}
							}
						}
						break;
					
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_1787F)
				{
					func_375(&(uParam0->f_2E5.f_C6));
				}
				func_371(&(uParam0->f_2E5.f_C6));
				func_377(&Var6, &(uParam0->f_2E5.f_C6), &(Local_44.f_18[iVar0 /*8*/]), 0);
				func_378(&(uParam0->f_2E5.f_C6));
				func_369(uParam0[iVar3 /*9*/], 1);
				if (bVar4)
				{
					func_378(&(uParam0->f_2E5.f_C6));
				}
				else
				{
					func_378(&(uParam0->f_2E5.f_C6));
				}
				func_378(&(uParam0->f_2E5.f_C6));
				if (IntToFloat(iLocal_195[iVar0]) <= Local_44.f_6A[iVar0] && iLocal_195[iVar0] > 1)
				{
					func_369(uParam0[iVar3 /*9*/], 1);
					func_369(uParam0[9 /*9*/], 1);
					func_384("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_377(&(uParam0->f_13C[5 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_sGOLD", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					func_371(&(uParam0->f_2E5.f_C6));
				}
				else if (IntToFloat(iLocal_195[iVar0]) <= (((Local_44.f_70[iVar0] - Local_44.f_6A[iVar0]) / 2f) + Local_44.f_6A[iVar0]) && IntToFloat(iLocal_195[iVar0]) > Local_44.f_6A[iVar0])
				{
					func_369(uParam0[iVar3 /*9*/], 1);
					func_369(uParam0[9 /*9*/], 1);
					func_384("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_377(&(uParam0->f_13C[5 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_sSILVER", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					func_371(&(uParam0->f_2E5.f_C6));
				}
				else if (IntToFloat(iLocal_195[iVar0]) <= Local_44.f_70[iVar0] && IntToFloat(iLocal_195[iVar0]) > (((Local_44.f_70[iVar0] - Local_44.f_6A[iVar0]) / 2f) + Local_44.f_6A[iVar0]))
				{
					func_369(uParam0[iVar3 /*9*/], 1);
					func_369(uParam0[9 /*9*/], 1);
					func_384("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_377(&(uParam0->f_13C[5 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_sBRONZE", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					func_371(&(uParam0->f_2E5.f_C6));
				}
				else if (IntToFloat(iLocal_195[iVar0]) > Local_44.f_70[iVar0] || iLocal_195[iVar0] == -1)
				{
					func_369(uParam0[iVar3 /*9*/], 1);
					func_369(uParam0[9 /*9*/], 1);
					func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_377(&(uParam0->f_13C[5 /*2*/]), &(uParam0->f_2E5.f_C6), "SC_LB_EMPTY", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					func_384("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_367(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_195[iVar0]) <= Local_44.f_6A[iVar0] && !iLocal_195[iVar0] == -1)
				{
					func_369(uParam0[13 /*9*/], 1);
				}
				else
				{
					(uParam0[13 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_195[iVar0]) <= (((Local_44.f_70[iVar0] - Local_44.f_6A[iVar0]) / 2f) + Local_44.f_6A[iVar0]) && !iLocal_195[iVar0] == -1)
				{
					func_369(uParam0[12 /*9*/], 1);
				}
				else
				{
					(uParam0[12 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_195[iVar0]) <= Local_44.f_70[iVar0] && !iLocal_195[iVar0] == -1)
				{
					func_369(uParam0[11 /*9*/], 1);
				}
				else
				{
					(uParam0[11 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				func_384("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				func_384("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				func_384("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				func_378(&(uParam0->f_2E5.f_C6));
				if (Global_17C49.f_4391.f_6[Global_1787F] > 0f)
				{
					func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[17 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_362(&(uParam0->f_13C[9 /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR((Global_17C49.f_4391.f_6[Global_1787F] * 1000f)), 6, "", 0, 1);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					func_371(&(uParam0->f_2E5.f_C6));
				}
				else
				{
					func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[17 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_377(&(uParam0->f_13C[9 /*2*/]), &(uParam0->f_2E5.f_C6), "SC_LB_EMPTY", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					func_371(&(uParam0->f_2E5.f_C6));
				}
				func_377(&(uParam0->f_13C[6 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_RTIME", 0);
				if (Local_44.f_12[Global_1787F] > 0f)
				{
					func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[18 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_362(&(uParam0->f_13C[7 /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR((Local_44.f_12[Global_1787F] * 1000f)), 6, "", 0, 1);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					func_371(&(uParam0->f_2E5.f_C6));
					func_378(&(uParam0->f_2E5.f_C6));
				}
				else
				{
					func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[18 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_372(&(uParam0->f_13C[7 /*2*/]), &(uParam0->f_2E5.f_C6), "SC_LB_EMPTY", 0, 1);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					func_371(&(uParam0->f_2E5.f_C6));
					func_378(&(uParam0->f_2E5.f_C6));
				}
			}
			else
			{
				func_361(&(uParam0->f_1A4[iVar1 /*8*/]));
				func_243(&(uParam0->f_1A4[iVar1 /*8*/]), 117, 1);
				func_379(uParam0->f_1A4[iVar1 /*8*/], 0, 0);
				func_369(uParam0[iVar3 /*9*/], 1);
				switch (Global_17C49.f_4391.f_C[iVar0 /*8*/].f_4)
				{
					case 0:
						func_369(uParam0[iVar3 /*9*/], 1);
						func_378(&(uParam0->f_2E5.f_C6));
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							func_378(&(uParam0->f_2E5.f_C6));
							if (Global_17C49.f_4391.f_6[iVar0] <= 0f)
							{
								func_251(&Var5, 269f, 0f, 32f, 32f, 0);
								func_250(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_13C[iVar2 /*2*/].f_1 + fLocal_197);
								Var6 = (Var5 + fLocal_196);
								if (!bLocal_245)
								{
									func_370(&Var5, 0);
								}
								func_369(&Var5, 1);
								func_384("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_245)
								{
									func_368(&Var6, &(uParam0->f_2E5.f_C6));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_1787F)
				{
					func_375(&(uParam0->f_2E5.f_C6));
				}
				func_371(&(uParam0->f_2E5.f_C6));
				func_377(&Var6, &(uParam0->f_2E5.f_C6), &(Local_44.f_18[iVar0 /*8*/]), 0);
				func_378(&(uParam0->f_2E5.f_C6));
				func_369(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_17C49.f_4391.f_C[iVar0 /*8*/].f_4 == 0)
			{
				func_384("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_195[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_195[iVar0]) <= Local_44.f_6A[iVar0] && IntToFloat(iLocal_195[iVar0]) <= Local_44.f_70[iVar0])
				{
					func_360(uParam0[iVar3 /*9*/]);
					func_384("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_195[iVar0]) <= (((Local_44.f_70[iVar0] - Local_44.f_6A[iVar0]) / 2f) + Local_44.f_6A[iVar0]))
				{
					func_359(uParam0[iVar3 /*9*/]);
					func_384("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_195[iVar0]) <= Local_44.f_70[iVar0])
				{
					func_357(uParam0[iVar3 /*9*/]);
					func_384("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar7 = 0;
	if (func_356(0))
	{
		STATS::STAT_GET_INT(joaat("sp0_flying_ability"), &iVar7, -1);
	}
	else if (func_356(1))
	{
		STATS::STAT_GET_INT(joaat("sp1_flying_ability"), &iVar7, -1);
	}
	else if (func_356(2))
	{
		STATS::STAT_GET_INT(joaat("sp2_flying_ability"), &iVar7, -1);
	}
	if (iVar7 < 40)
	{
		func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[15 /*8*/]), 0.0047f, 0.0055f);
		HUD::SET_TEXT_LEADING(1);
		Var8 = { uParam0->f_13C[22 /*2*/] };
		Var9 = { uParam0->f_2E5.f_C6 };
		if (!bLocal_245)
		{
			Var9.f_9 = (Var9.f_9 - 0.08f);
			func_368(&Var8, &Var9);
		}
		if (bLocal_245)
		{
			func_354(&(uParam0->f_1A4[14 /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 27f, 2f, 5, 159f);
		}
		else
		{
			func_354(&(uParam0->f_1A4[14 /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 18f, 1.55f, 5, 106f);
		}
		func_379(uParam0->f_1A4[14 /*8*/], 0, 0);
		func_384("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		func_377(&(uParam0->f_13C[22 /*2*/]), &(uParam0->f_2E5.f_C6), "FLY_STAT_WARN", 0);
		func_371(&(uParam0->f_2E5.f_C6));
	}
	StringCopy(&Var10, "SPR_DESC_", 16);
	StringIntConCat(&Var10, Global_1787F + 1, 16);
	func_369(uParam0[7 /*9*/], 1);
	func_384("SPRRaces", &Var10, uParam0[7 /*9*/], 0, 0, 5, 0);
	func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[25 /*8*/]), 0.0047f, 0.0055f);
	HUD::SET_TEXT_LEADING(1);
	StringCopy(&cVar11, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar11, Global_1787F + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar11, 0, 16);
	}
	Var12 = { uParam0->f_13C[16 /*2*/] };
	Var13 = { uParam0->f_2E5.f_C6 };
	if (!bLocal_245)
	{
		Var13.f_9 = (Var13.f_9 - 0.108f);
		func_368(&Var12, &Var13);
	}
	if (bLocal_245)
	{
		func_354(&(uParam0->f_1A4[25 /*8*/]), &cVar11, &Var12, &Var13, 27f, 2f, 5, 159f);
	}
	else
	{
		func_354(&(uParam0->f_1A4[25 /*8*/]), &cVar11, &Var12, &Var13, 18f, 1.55f, 5, 106f);
	}
	func_379(uParam0->f_1A4[25 /*8*/], 0, 0);
	func_377(&(uParam0->f_13C[16 /*2*/]), &(uParam0->f_2E5.f_C6), &cVar11, 0);
	func_371(&(uParam0->f_2E5.f_C6));
	func_378(&(uParam0->f_2E5.f_C6));
	func_377(&(uParam0->f_13C[4 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_AWARDS_SUB", 0);
	func_377(&(uParam0->f_13C[8 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_BEST", 0);
	func_375(&(uParam0->f_2E5.f_C6));
	func_379(uParam0->f_1A4[22 /*8*/], 0, 0);
	func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[22 /*8*/]), 0, 0);
	func_362(&(uParam0->f_13C[13 /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR(Local_44.f_70[Global_1787F]) * 1000, 6, "", 1, 0);
	func_371(&(uParam0->f_2E5.f_C6));
	func_379(uParam0->f_1A4[23 /*8*/], 0, 0);
	func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[23 /*8*/]), 0, 0);
	func_362(&(uParam0->f_13C[14 /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR((((Local_44.f_70[Global_1787F] - Local_44.f_6A[Global_1787F]) / 2f) + Local_44.f_6A[Global_1787F])) * 1000, 6, "", 1, 0);
	func_371(&(uParam0->f_2E5.f_C6));
	func_379(uParam0->f_1A4[24 /*8*/], 0, 0);
	func_374(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[24 /*8*/]), 0, 0);
	func_362(&(uParam0->f_13C[15 /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR(Local_44.f_6A[Global_1787F]) * 1000, 6, "", 1, 0);
	func_371(&(uParam0->f_2E5.f_C6));
	func_378(&(uParam0->f_2E5.f_C6));
}

float func_354(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)//Position - 0xEEFA
{
	int iVar0;
	int iVar1;
	
	func_355(uParam3, 0);
	HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(sParam1);
	iVar0 = HUD::_END_TEXT_COMMAND_LINE_COUNT(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!GRAPHICS::GET_IS_WIDESCREEN())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = func_247(((SYSTEM::TO_FLOAT(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_247(((fParam7 + ((SYSTEM::TO_FLOAT(iParam6) + (SYSTEM::TO_FLOAT(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
	return 0f;
}

void func_355(var uParam0, bool bParam1)//Position - 0xEF71
{
	HUD::SET_TEXT_FONT(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
	}
	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

bool func_356(int iParam0)//Position - 0xF00A
{
	func_150();
	return iParam0 == Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_357(var uParam0)//Position - 0xF026
{
	func_358(uParam0, 107);
}

void func_358(var uParam0, int iParam1)//Position - 0xF036
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_359(var uParam0)//Position - 0xF05E
{
	func_358(uParam0, 108);
}

void func_360(var uParam0)//Position - 0xF06E
{
	func_358(uParam0, 109);
}

void func_361(var uParam0)//Position - 0xF07E
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

void func_362(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xF09B
{
	char* sVar0;
	
	if (func_365())
	{
		func_355(uParam1, 0);
		HUD::SET_TEXT_RIGHT_JUSTIFY(iParam6);
		HUD::SET_TEXT_CENTRE(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, iParam3);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_364(*uParam0), func_363(uParam0->f_1), 0);
	}
}

float func_363(float fParam0)//Position - 0xF0F5
{
	return (fParam0 + fLocal_13);
}

float func_364(float fParam0)//Position - 0xF102
{
	return (fParam0 + fLocal_12);
}

int func_365()//Position - 0xF10F
{
	if (func_366())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_366()//Position - 0xF14E
{
	return Global_1406B8;
}

void func_367(var uParam0)//Position - 0xF15A
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_368(float fParam0, var uParam1)//Position - 0xF177
{
	*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_8 = (((uParam1->f_8 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_9 = (((uParam1->f_9 - 0.5f) * 1.33f) + 0.5f);
}

void func_369(float fParam0, int iParam1)//Position - 0xF1CB
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_370(float fParam0, bool bParam1)//Position - 0xF1F1
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1.33f);
}

void func_371(var uParam0)//Position - 0xF225
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_372(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xF237
{
	var uVar0;
	
	uVar0 = sParam2;
	if (!func_50(uVar0))
	{
		if (func_365())
		{
			func_355(uParam1, 0);
			HUD::SET_TEXT_RIGHT_JUSTIFY(iParam4);
			HUD::SET_TEXT_CENTRE(iParam3);
			func_373(func_364(*uParam0), func_363(uParam0->f_1), uVar0, 0);
		}
	}
}

void func_373(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0xF27D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(uParam0, uParam1, iParam3);
}

void func_374(var uParam0, var uParam1, float fParam2, float fParam3)//Position - 0xF295
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_375(var uParam0)//Position - 0xF2CF
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_376(uParam0, 2);
}

void func_376(var uParam0, int iParam1)//Position - 0xF2ED
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_377(float fParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0xF315
{
	if (bParam3)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	}
	func_372(fParam0, uParam1, sParam2, 0, 0);
}

void func_378(var uParam0)//Position - 0xF333
{
	func_376(uParam0, 1);
}

void func_379(struct<8> Param0, int iParam1, int iParam2)//Position - 0xF342
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam1)
	{
		case 2:
			func_383(&Var0);
			break;
		
		case 1:
			func_382(&Var0);
			break;
		
		case 3:
			func_381(&Var0);
			break;
		
		case 4:
			func_380(&Var0);
			break;
	}
	if (func_365())
	{
		if (iParam2 == 1)
		{
			GRAPHICS::DRAW_RECT(func_364(Var0), func_363(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			GRAPHICS::DRAW_RECT(func_364(Var0), func_363(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_380(var uParam0)//Position - 0xF3FD
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_381(var uParam0)//Position - 0xF41D
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_382(var uParam0)//Position - 0xF43D
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_383(var uParam0)//Position - 0xF466
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_384(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF483
{
	struct<9> Var0;
	
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_391(&Var0);
			break;
		
		case 1:
			func_390(&Var0);
			break;
		
		case 5:
			func_389(&Var0);
			break;
		
		case 6:
			func_388(&Var0);
			break;
		
		case 7:
			func_387(&Var0);
			break;
		
		case 8:
			func_386(&Var0);
			break;
		
		case 9:
			func_385(&Var0);
			break;
	}
	if (func_365())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_364(Var0), func_363(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_364(Var0), func_363(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_385(var uParam0)//Position - 0xF588
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_386(var uParam0)//Position - 0xF5A2
{
	uParam0->f_7 = 2;
}

void func_387(var uParam0)//Position - 0xF5AF
{
	uParam0->f_7 = 5;
}

void func_388(var uParam0)//Position - 0xF5BC
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_389(var uParam0)//Position - 0xF5D9
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_390(var uParam0)//Position - 0xF5F6
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_391(var uParam0)//Position - 0xF61F
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_392(var uParam0, var uParam1)//Position - 0xF647
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_191 == 1)
	{
		return 1;
	}
	if (iLocal_192)
	{
		return 0;
	}
	if (SYSTEM::TIMERA() < 500)
	{
		return 1;
	}
	if (bLocal_190)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			iLocal_184 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_184, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_191 = 1;
			iLocal_192 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			iLocal_184 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_184, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			HUD::CLEAR_HELP(1);
			func_515(&(Local_44.f_77));
			iLocal_191 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
	{
		iLocal_184 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_184, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_239(&(Local_44.f_77), 0, 0, 1, 1);
		func_238(&(Local_44.f_77), "FE_HLP29", 2, 201, 1, 1, 0);
		func_238(&(Local_44.f_77), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&uLocal_186);
		iLocal_191 = 1;
		HUD::CLEAR_HELP(1);
		return 1;
	}
	iVar0 = 0;
	if (MISC::IS_PC_VERSION() && bLocal_190 == 0)
	{
		if (PAD::_IS_USING_KEYBOARD_2(2))
		{
			Global_26CF15 = func_396(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 5, 255, 0, 1);
			func_395(0, Global_1787F);
			if (func_394())
			{
				if (Global_26CF15 == Global_1787F)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_184 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND(iLocal_184, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_1787F = Global_26CF15;
					func_515(&(Local_44.f_77));
				}
			}
		}
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_17C49.f_4391.f_C[Global_1787F /*8*/].f_4 == 0)
		{
			iLocal_184 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND(iLocal_184, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_184 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND(iLocal_184, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, 188) || func_393(0, uParam1)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		iVar1 = (Global_1787F - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_184 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND(iLocal_184, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_1787F = iVar1;
		func_515(&(Local_44.f_77));
	}
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, 187) || func_393(1, uParam1)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		iVar2 = Global_1787F + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_184 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND(iLocal_184, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_1787F = iVar2;
		func_515(&(Local_44.f_77));
	}
	return 1;
}

bool func_393(int iParam0, var uParam1)//Position - 0xF904
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = PAD::GET_CONTROL_VALUE(2, 195);
	iVar2 = PAD::GET_CONTROL_VALUE(2, 196);
	if (MISC::ABSI(iVar1) < 28 && MISC::ABSI(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (MISC::GET_GAME_TIMER() < uParam1->f_1 + 250)
	{
		*uParam1 = 0;
		return 0;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = iVar2 < 100;
			break;
		
		case 1:
			bVar0 = iVar2 > 156;
			break;
		
		case 2:
			bVar0 = iVar1 < 100;
			break;
		
		case 3:
			bVar0 = iVar1 > 156;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = MISC::GET_GAME_TIMER();
		*uParam1 = 0;
	}
	return bVar0;
}

int func_394()//Position - 0xF9C9
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_26CF15 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_395(int iParam0, var uParam1)//Position - 0xF9F0
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	if (Global_26CF15 == -6)
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_26CF15 = -1;
			return 0;
		}
	}
	if (((Global_26CF15 > -1 || Global_26CF15 == -3) || Global_26CF15 == -2) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_26CF15 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(4);
			Global_26CF15 = -6;
			return 1;
		}
		else
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	return 0;
}

int func_396(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0xFACB
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	iVar7 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return -1;
	}
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	if (bParam8)
	{
		if (!GRAPHICS::GET_IS_WIDESCREEN())
		{
			fParam0 = (((fParam0 - 0.5f) * 1.33f) + 0.5f);
			fParam2 = (fParam2 * 1.33f);
		}
	}
	if (bParam7)
	{
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		GRAPHICS::_GET_SCRIPT_GFX_POSITION(fParam0, fParam1, &fParam0, &fParam1);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = PAD::GET_CONTROL_NORMAL(2, 239);
	fVar3 = PAD::GET_CONTROL_NORMAL(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = SYSTEM::FLOOR((fVar4 / fParam3));
		if (bParam7)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
			func_397(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			func_397(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_397(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7)//Position - 0xFC07
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, uParam7, 0);
}

int func_398()//Position - 0xFC36
{
	int iVar0;
	
	switch (iLocal_185)
	{
		case 0:
			HUD::CLEAR_HELP(1);
			HUD::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", 0);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", 0);
			iLocal_185 = 1;
			break;
		
		case 1:
			if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("SP_SPR", 3))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPRRaces"))
				{
					if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
					{
						iLocal_185 = 2;
					}
				}
			}
			break;
		
		case 2:
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_44.f_77));
			Local_44.f_77 = 0;
			func_515(&(Local_44.f_77));
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 512);
			}
			func_124(1);
			GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_44.f_1, 4);
			func_349();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_44.f_B)
			{
				iLocal_195[iVar0] = -1;
				iVar0++;
			}
			func_402(&uLocal_246);
			func_399();
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, 1);
			iLocal_185 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_399()//Position - 0xFD3E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17C49.f_4391.f_C[iVar0 /*8*/] = { func_401(iVar0) };
		MemCopy(&(Local_44.f_18[iVar0 /*8*/]), {Global_17C49.f_4391.f_C[iVar0 /*8*/]}, 8);
		Local_44.f_6A[iVar0] = func_400(iVar0);
		Local_44.f_70[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_17C49.f_4391.f_6[iVar0] > Local_44.f_70[iVar0] || Global_17C49.f_4391.f_6[iVar0] <= 0f)
			{
				Global_17C49.f_4391.f_C[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_17C49.f_4391.f_C[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_17C49.f_4391.f_C[0 /*8*/].f_4 = 1;
}

float func_400(int iParam0)//Position - 0xFE13
{
	switch (iParam0)
	{
		case 0:
			return 70f;
			break;
		
		case 1:
			return 75f;
			break;
		
		case 2:
			return 72f;
			break;
		
		case 3:
			return 120f;
			break;
		
		case 4:
			return 115f;
			break;
	}
	return -1f;
}

struct<4> func_401(int iParam0)//Position - 0xFE78
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BRIDGEBINGE", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "VINEWOOD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BRIDGEWORK", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "AIRPORT", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "ALTITUDE", 16);
			break;
	}
	return Var0;
}

void func_402(var uParam0)//Position - 0xFEE8
{
	func_405();
	bLocal_245 = GRAPHICS::GET_IS_WIDESCREEN();
	func_278(uParam0);
	func_256(&(uParam0->f_2E5));
	func_403(uParam0);
}

void func_403(var uParam0)//Position - 0xFF10
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	bVar0 = GRAPHICS::GET_IS_WIDESCREEN();
	func_255(&(uParam0->f_13C[0 /*2*/]), 262f, (71f - func_404(0.00278f, 720, 1)), 1);
	func_255(&(uParam0->f_13C[1 /*2*/]), (257f + 127f), (125f - func_404(0.00417f, 720, 1)), 1);
	func_255(&(uParam0->f_13C[2 /*2*/]), (513f + 127f), (125f - func_404(0.00417f, 720, 1)), 1);
	func_255(&(uParam0->f_13C[3 /*2*/]), (769f + 127f), (125f - func_404(0.00417f, 720, 1)), 1);
	func_255(&(uParam0->f_13C[17 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 162f, 1);
	func_255(&(uParam0->f_13C[18 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 189f, 1);
	func_255(&(uParam0->f_13C[19 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 216f, 1);
	func_255(&(uParam0->f_13C[20 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 243f, 1);
	func_255(&(uParam0->f_13C[21 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 270f, 1);
	func_255(&(uParam0->f_13C[22 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 297f, 1);
	func_255(&(uParam0->f_13C[16 /*2*/]), (513f + func_254(0.0047f, 1280, 1)), (299f - func_404(0.00278f, 720, 1)), 1);
	func_255(&(uParam0->f_13C[4 /*2*/]), (769f + func_254(0.0047f, 1280, 1)), 297f, 1);
	func_255(&(uParam0->f_13C[5 /*2*/]), 769f, 297f, 1);
	func_255(&(uParam0->f_13C[8 /*2*/]), (769f + func_254(0.0047f, 1280, 1)), 351f, 1);
	func_255(&(uParam0->f_13C[9 /*2*/]), 324f, 351f, 1);
	func_255(&(uParam0->f_13C[6 /*2*/]), (769f + func_254(0.0047f, 1280, 1)), (324f - func_404(0.00278f, 720, 1)), 1);
	func_255(&(uParam0->f_13C[7 /*2*/]), 324f, (324f - func_404(0.00278f, 720, 1)), 1);
	func_255(&(uParam0->f_13C[15 /*2*/]), 810f, 459f, 1);
	func_255(&(uParam0->f_13C[14 /*2*/]), 896f, 459f, 1);
	func_255(&(uParam0->f_13C[13 /*2*/]), 982f, 459f, 1);
	func_251(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	HUD::GET_HUD_COLOUR(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_250(uParam0[0 /*9*/], uVar1, uVar2, uVar3, uVar4);
	func_251(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_250(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_250(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_250(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_250(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_250(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[6 /*9*/], (486f + func_254(0.0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_250(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_250(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_250(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[13 /*9*/], 770.5f, 374.5f, 80f, 80f, 1);
	func_250(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[12 /*9*/], 856f, 374.5f, 80f, 80f, 1);
	func_250(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[11 /*9*/], 941.5f, 374.5f, 80f, 80f, 1);
	func_250(uParam0[11 /*9*/], 255, 255, 255, 255);
	func_245(&(uParam0->f_1A4[3 /*8*/]), 257f, 114f, 254f, 5f, 1);
	func_244(&(uParam0->f_1A4[3 /*8*/]), 70, 70, 130, 255);
	func_245(&(uParam0->f_1A4[4 /*8*/]), 513f, 114f, 254f, 5f, 1);
	func_244(&(uParam0->f_1A4[4 /*8*/]), 70, 70, 130, 255);
	func_245(&(uParam0->f_1A4[5 /*8*/]), 769f, 114f, 254f, 5f, 1);
	func_244(&(uParam0->f_1A4[5 /*8*/]), 70, 70, 130, 255);
	func_245(&(uParam0->f_1A4[0 /*8*/]), 257f, 119f, 254f, 26f, 1);
	func_243(&(uParam0->f_1A4[0 /*8*/]), 1, 1);
	func_245(&(uParam0->f_1A4[1 /*8*/]), 513f, 119f, 254f, 26f, 1);
	func_243(&(uParam0->f_1A4[1 /*8*/]), 1, 1);
	func_245(&(uParam0->f_1A4[2 /*8*/]), 769f, 119f, 254f, 26f, 1);
	func_243(&(uParam0->f_1A4[2 /*8*/]), 1, 1);
	func_245(&(uParam0->f_1A4[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	func_243(&(uParam0->f_1A4[7 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	func_243(&(uParam0->f_1A4[8 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[9 /*8*/]), 257f, 159f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[9 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[10 /*8*/]), 257f, 186f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[10 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[11 /*8*/]), 257f, 213f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[11 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[12 /*8*/]), 257f, 240f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[12 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[13 /*8*/]), 257f, 267f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[13 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[26 /*8*/]), 257f, 294f, 254f, 2f, 1);
	func_243(&(uParam0->f_1A4[26 /*8*/]), 1, 1);
	func_245(&(uParam0->f_1A4[14 /*8*/]), 257f, 294f, 254f, 75f, 1);
	func_243(&(uParam0->f_1A4[14 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[15 /*8*/]), 257f, 294f, (254f - 32f), 75f, 1);
	func_243(&(uParam0->f_1A4[15 /*8*/]), 1, 1);
	func_245(&(uParam0->f_1A4[25 /*8*/]), 513f, 294f, 254f, 133f, 1);
	func_243(&(uParam0->f_1A4[25 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[16 /*8*/]), 769f, 294f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[16 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[17 /*8*/]), 769f, 321f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[17 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[18 /*8*/]), 769f, 348f, 254f, 25f, 1);
	func_243(&(uParam0->f_1A4[18 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[21 /*8*/]), 769f, 375f, 83f, 84f, 1);
	func_243(&(uParam0->f_1A4[21 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[20 /*8*/]), 854f, 375f, 84f, 84f, 1);
	func_243(&(uParam0->f_1A4[20 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[19 /*8*/]), 940f, 375f, 83f, 84f, 1);
	func_243(&(uParam0->f_1A4[19 /*8*/]), 117, 1);
	func_245(&(uParam0->f_1A4[22 /*8*/]), 769f, 456f, 83f, 25f, 1);
	func_243(&(uParam0->f_1A4[22 /*8*/]), 109, 1);
	func_245(&(uParam0->f_1A4[23 /*8*/]), 854f, 456f, 84f, 25f, 1);
	func_243(&(uParam0->f_1A4[23 /*8*/]), 108, 1);
	func_245(&(uParam0->f_1A4[24 /*8*/]), 940f, 456f, 83f, 25f, 1);
	func_243(&(uParam0->f_1A4[24 /*8*/]), 107, 1);
	if (!bVar0)
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			(*uParam0)[iVar5 /*9*/] = ((((*uParam0)[iVar5 /*9*/] - 0.5f) * 1.33f) + 0.5f);
			(uParam0[iVar5 /*9*/])->f_2 = ((uParam0[iVar5 /*9*/])->f_2 * 1.33f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 23)
		{
			uParam0->f_13C[iVar5 /*2*/] = (((uParam0->f_13C[iVar5 /*2*/] - 0.5f) * 1.33f) + 0.5f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 27)
		{
			uParam0->f_1A4[iVar5 /*8*/] = (((uParam0->f_1A4[iVar5 /*8*/] - 0.5f) * 1.33f) + 0.5f);
			uParam0->f_1A4[iVar5 /*8*/].f_2 = (uParam0->f_1A4[iVar5 /*8*/].f_2 * 1.33f);
			iVar5++;
		}
	}
	uParam0->f_3DA = 1;
}

float func_404(float fParam0, int iParam1, bool bParam2)//Position - 0x10A17
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_405()//Position - 0x10A49
{
	int iVar0;
	
	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1C0DEF.f_51[iVar0] = 0;
		iVar0++;
	}
}

void func_406(var uParam0)//Position - 0x10A72
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_2A = 0;
	uParam0->f_2B = 0;
	uParam0->f_2C = 0;
	uParam0->f_2C.f_1 = 0;
	uParam0->f_2C.f_2 = 0;
	uParam0->f_2C.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_71[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

int func_407(var uParam0, bool bParam1)//Position - 0x10B40
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (!iLocal_193)
		{
			iVar0 = 0;
			if (uParam0->f_166[0 /*189*/].f_D > 0f)
			{
				if (uParam0->f_166[0 /*189*/].f_D <= Local_44.f_6A[Local_44.f_A])
				{
					iVar0 = 1;
				}
				else if (uParam0->f_166[0 /*189*/].f_D <= (((Local_44.f_70[Local_44.f_A] - Local_44.f_6A[Local_44.f_A]) / 2f) + Local_44.f_6A[Local_44.f_A]))
				{
					iVar0 = 2;
				}
				else if (uParam0->f_166[0 /*189*/].f_D <= Local_44.f_70[Local_44.f_A])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_435(Local_44.f_A, &(Local_44.f_41[Local_44.f_A /*8*/]));
			if (bParam1)
			{
				func_432(Local_44.f_A, uParam0->f_166[0 /*189*/].f_D, iVar0);
				iLocal_193 = 1;
				return 1;
			}
			else if (func_408(Local_44.f_A, uParam0->f_166[0 /*189*/].f_D, iVar0))
			{
				iLocal_193 = 1;
				return 1;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_193 = 1;
	}
	return 0;
}

int func_408(int iParam0, float fParam1, int iParam2)//Position - 0x10C3F
{
	if (Global_1C0005.f_1 && !Global_1C0005.f_2)
	{
		func_432(iParam0, fParam1, iParam2);
		Global_1C0005.f_2 = 1;
	}
	if (func_409(&uLocal_1233))
	{
		Global_1C017C = 1;
		return 1;
	}
	return 0;
}

int func_409(var uParam0)//Position - 0x10C81
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_13.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_24 = 32;
	if (func_431(uParam0->f_2C))
	{
		Var3 = { Global_1C0005.f_169 };
	}
	else
	{
		Var3 = { func_430(PLAYER::PLAYER_ID()) };
	}
	switch (Global_1C0005)
	{
		case 0:
			if (func_429(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &Var3))
			{
				func_428(&Var1, &(uParam0->f_2C));
				Global_1C0005.f_8E = uParam0->f_2C;
				Global_1C0005.f_8E.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_2C, 0);
				iVar4 = 0;
				while (iVar4 < Global_1C0005.f_8E.f_1)
				{
					if (!func_427(uParam0->f_2C, iVar4))
					{
						if (func_426(uParam0->f_2C, 4, iVar4))
						{
							MISC::SET_BIT(&(Global_1C0005.f_8E.f_2), iVar4);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_1C0005.f_8E.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_61 != Global_1C0005.f_8E.f_1)
						{
						}
						if (!func_425(Var0))
						{
							Global_1C0005.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1C0005.f_8E.f_1)
							{
								if (!func_427(uParam0->f_2C, iVar4))
								{
									if (func_426(uParam0->f_2C, 4, iVar4))
									{
										Global_1C0005.f_49.f_24[iVar4] = STATS::_0x88578F6EC36B4A3A(0, iVar4);
										if (Global_1C0005.f_49.f_24[iVar4] == -1)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_24[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1C0005.f_49.f_3[iVar4] = STATS::_0x38491439B6BA7F7D(0, iVar4);
										if (Global_1C0005.f_49.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1C0005.f_4 = 1;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_1C0005.f_4 = 1;
				}
				Global_1C0005 = 1;
				func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 1:
			Global_1C0005.f_1 = 1;
			if (Global_1C0005.f_2)
			{
				func_424();
				if (Global_1C0005.f_4)
				{
					if (func_423(uParam0->f_2C))
					{
						Global_1C0005 = 3;
					}
					else
					{
						Global_1C0005 = 2;
					}
				}
				else
				{
					Global_1C0005 = 2;
				}
			}
			break;
		
		case 2:
			STATS::LEADERBOARDS2_READ_RANK_PREDICTION(&(Global_1C0005.f_49), &(Global_1C0005.f_8E), &(Global_1C0005.f_D3));
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1C0005.f_D3 = { Global_1C0005.f_8E };
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_422())
			{
				if (func_421())
				{
					Global_1C0005 = 99;
				}
				else
				{
					Global_1C0005 = 999;
					return 1;
				}
			}
			else
			{
				Global_1C0005 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_423(uParam0->f_2C))
			{
				Global_1C0005.f_118 = { Global_1C0005.f_8E };
			}
			else
			{
				Var2 = Global_1C0005.f_8E;
				Var2.f_1 = Global_1C0005.f_8E.f_1;
				Var2.f_2 = Global_1C0005.f_8E.f_2;
				STATS::LEADERBOARDS2_READ_RANK_PREDICTION(&Var2, &(Global_1C0005.f_8E), &(Global_1C0005.f_118));
			}
			Global_1C0005 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_410(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, &Var3, 1, 1, Global_1C0005.f_118.f_24[0], Global_1C0005.f_118.f_3[0]))
			{
				func_428(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (MISC::ARE_STRINGS_EQUAL(&(Var0.f_D), ""))
						{
							Global_ED2E6.f_1 = -1;
						}
						else
						{
							Global_ED2E6.f_1 = Var0.f_60;
						}
					}
					else
					{
						Global_ED2E6.f_1 = -1;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_ED2E6.f_1 = -1;
				}
				Global_1C0005 = 999;
				func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

int func_410(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x110A5
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1C0005.f_D3.f_24[0];
	uVar1 = Global_1C0005.f_D3.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_417() && !func_413())
			{
				func_411(*uParam2);
				if (bParam5)
				{
					if (MISC::IS_BIT_SET(Global_1C0005.f_8E.f_2, 0))
					{
						if (STATS::LEADERBOARDS2_READ_BY_SCORE_INT(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (STATS::LEADERBOARDS2_READ_BY_SCORE_FLOAT(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (STATS::LEADERBOARDS2_READ_BY_RADIUS(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_411(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)//Position - 0x111DD
{
	Global_1C0000 = 1;
	func_412(&(Global_1C0000.f_1), 1, 0);
	Global_1C0000.f_3 = Param0;
	Global_1C0000.f_4 = Param0.f_1;
}

void func_412(var uParam0, bool bParam1, bool bParam2)//Position - 0x11208
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_413()//Position - 0x11245
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_414())
	{
		return 1;
	}
	return 0;
}

bool func_414()//Position - 0x11263
{
	return func_415(PLAYER::PLAYER_ID());
}

int func_415(int iParam0)//Position - 0x11273
{
	switch (func_416(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 37:
		case 32:
		case 35:
		case 38:
			return 0;
		
		default:
	}
	return 1;
}

int func_416(int iParam0)//Position - 0x112D3
{
	return Global_182604[iParam0 /*324*/].f_A5;
}

int func_417()//Position - 0x112E6
{
	if (STATS::LEADERBOARDS_READ_ANY_PENDING() || Global_1C0000)
	{
		func_418();
		return 1;
	}
	return 0;
}

void func_418()//Position - 0x11308
{
	if (func_419(&(Global_1C0000.f_1), 120000, 1))
	{
		STATS::LEADERBOARDS_READ_CLEAR(Global_1C0000.f_3, Global_1C0000.f_4, -1);
		Global_1C0000 = 0;
		func_341(&(Global_1C0000.f_1));
	}
}

int func_419(var uParam0, int iParam1, bool bParam2)//Position - 0x11343
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_420(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_420(var uParam0, bool bParam1, bool bParam2)//Position - 0x113A1
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_421()//Position - 0x113E6
{
	return MISC::IS_BIT_SET(Global_EB67E.f_8, 1);
}

var func_422()//Position - 0x113F9
{
	return Global_25260F.f_3;
}

int func_423(int iParam0)//Position - 0x11407
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_424()//Position - 0x114D8
{
	Global_1C0005.f_49 = Global_1C0005.f_8E;
	Global_1C0005.f_49.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_49.f_2 = Global_1C0005.f_8E.f_2;
	Global_1C0005.f_D3 = Global_1C0005.f_8E;
	Global_1C0005.f_D3.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_D3.f_2 = Global_1C0005.f_8E.f_2;
}

bool func_425(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x11538
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_426(int iParam0, int iParam1, int iParam2)//Position - 0x11548
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780 || iParam0 == 778)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = STATS::LEADERBOARDS_GET_COLUMN_TYPE(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_427(int iParam0, int iParam1)//Position - 0x11657
{
	if (STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_428(var uParam0, var uParam1)//Position - 0x116B2
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_429(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x116CD
{
	switch (*uParam0)
	{
		case 0:
			if (!func_417() && !func_413())
			{
				func_411(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_HANDLE(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

struct<13> func_430(int iParam0)//Position - 0x11781
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_431(int iParam0)//Position - 0x11798
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_432(int iParam0, float fParam1, int iParam2)//Position - 0x117BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3[3];
	struct<8> Var4[3];
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 == 1)
	{
		iVar2++;
	}
	else if (iParam2 == 2)
	{
		iVar1++;
	}
	else if (iParam2 == 3)
	{
		iVar0++;
	}
	StringCopy(&(Var4[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var4[1 /*8*/]), "Location", 32);
	StringCopy(&(Var4[2 /*8*/]), "Type", 32);
	StringCopy(&(Var3[0 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[2 /*6*/]), "StuntPlaneRace", 24);
	if (func_434(817, &Var3, &Var4, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_433(817, 131, -SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			func_433(817, 131, 0, 0f, 0);
		}
		func_433(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		func_433(817, 2, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		func_433(817, 147, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		func_433(817, 149, 0, 0f, 0);
		func_433(817, 148, 0, 0f, 0);
		func_433(817, 109, 1, 0f, 0);
		func_433(817, 157, iVar0, 0f, 0);
		func_433(817, 158, iVar1, 0f, 0);
		func_433(817, 86, iVar2, 0f, 0);
	}
}

void func_433(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0x11981
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(iParam1, iParam2, fParam3);
	}
	if (!Global_1C0005.f_3)
	{
		Global_1C0005.f_8E = iParam0;
		Global_1C0005.f_8E.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_1C0005.f_8E, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1C0005.f_8E.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_426(iParam0, 4, iVar1))
				{
					MISC::SET_BIT(&(Global_1C0005.f_8E.f_2), iVar1);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_1C0005.f_8E.f_2), iVar1);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1C0005.f_8E.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1C0005.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1C0005.f_8E.f_24[iVar0] = iParam2;
	Global_1C0005.f_8E.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		MISC::SET_BIT(&(Global_1C0005.f_8E.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		MISC::CLEAR_BIT(&(Global_1C0005.f_8E.f_2), iVar0);
	}
}

int func_434(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x11A9C
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var2 = { func_430(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_25260F.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_19B138.f_A));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

void func_435(int iParam0, char[4] cParam1)//Position - 0x11BD0
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TRIAL_01", 24);
			cParam1 = "SPTTLB_1";
			break;
		
		case 1:
			StringCopy(&Var0, "TRIAL_02", 24);
			cParam1 = "SPTTLB_2";
			break;
		
		case 2:
			StringCopy(&Var0, "TRIAL_03", 24);
			cParam1 = "SPTTLB_3";
			break;
		
		case 3:
			StringCopy(&Var0, "TRIAL_04", 24);
			cParam1 = "SPTTLB_4";
			break;
		
		case 4:
			StringCopy(&Var0, "TRIAL_05", 24);
			cParam1 = "SPTTLB_5";
			break;
	}
	func_436(&uLocal_1233, 86, &Var0, cParam1, -1, -1, 0, 0);
}

void func_436(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x11C63
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1C017E.f_AD1 = 0;
	Global_1C017E.f_AD2 = 0;
	Global_1C017E.f_AD0 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_2C = 826;
				}
				else
				{
					uParam0->f_2C = 815;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C017E.f_ADC.f_1A = -1;
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_439())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 3;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_2C = 827;
				}
				else
				{
					uParam0->f_2C = 824;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C017E.f_ADC.f_1A = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_439())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 5;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 6;
					Global_1C017E.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 5;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 3;
					Global_1C017E.f_A95 = 6;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_2C = 828;
				}
				else
				{
					uParam0->f_2C = 825;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 2;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &Var3);
					MemCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1C017E.f_ADC.f_1B = 1;
				}
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_2C.f_3 = 3;
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C017E.f_ADC.f_1A = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_439())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 3;
					Global_1C017E.f_A95 = 4;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_2C = 928;
				}
				else
				{
					uParam0->f_2C = 849;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C017E.f_ADC.f_1A = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_439())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 0;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 0;
					Global_1C017E.f_A94 = 1;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_2C = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_2C = 975;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_439())
				{
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C017E.f_ADC.f_1A = -1;
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_439())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 3;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_2C = 762;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 6;
				Global_1C017E.f_A96[3] = 3;
				Global_1C017E.f_A96[4] = 1;
				Global_1C017E.f_A96[5] = 2;
				Global_1C017E.f_A94 = 6;
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 4;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 4;
				Global_1C017E.f_ADC.f_1D[4] = 5;
				Global_1C017E.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_2C = 822;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 6;
				Global_1C017E.f_A96[3] = 3;
				Global_1C017E.f_A96[4] = 1;
				Global_1C017E.f_A96[5] = 2;
				Global_1C017E.f_A94 = 6;
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 4;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 4;
				Global_1C017E.f_ADC.f_1D[4] = 5;
				Global_1C017E.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_2C = 823;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 6;
				Global_1C017E.f_A96[3] = 3;
				Global_1C017E.f_A96[4] = 1;
				Global_1C017E.f_A96[5] = 2;
				Global_1C017E.f_A94 = 6;
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 4;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 4;
				Global_1C017E.f_ADC.f_1D[4] = 5;
				Global_1C017E.f_ADC.f_1D[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 3;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 7;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 94:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 3;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 7;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 92:
			uParam0->f_2C = 811;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), "CMSW", 64);
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 0;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 5;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 4;
			Global_1C017E.f_A96[4] = 6;
			Global_1C017E.f_A94 = 5;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			Global_1C017E.f_ADC.f_1C = 6;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 6;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			break;
		
		case 15:
			uParam0->f_2C = 749;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_ARM", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 2;
			Global_1C017E.f_A96[1] = 5;
			Global_1C017E.f_A96[2] = 0;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 4;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 14:
			uParam0->f_2C = 190;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_DARTS", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 7;
			Global_1C017E.f_A96[2] = 5;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 4;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 12:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1C017E.f_ADC.f_9), iParam4 + 1, 64);
			}
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 9;
			Global_1C017E.f_A96[2] = 7;
			Global_1C017E.f_A96[3] = 5;
			Global_1C017E.f_A96[4] = 2;
			Global_1C017E.f_A94 = 5;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			break;
		
		case 87:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 9;
			Global_1C017E.f_A96[2] = 7;
			Global_1C017E.f_A96[3] = 5;
			Global_1C017E.f_A96[4] = 2;
			Global_1C017E.f_A94 = 5;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			break;
		
		case 13:
			uParam0->f_2C = 912;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_ACC", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 2;
			Global_1C017E.f_A96[2] = 1;
			Global_1C017E.f_A96[3] = 3;
			Global_1C017E.f_A94 = 4;
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1C = 4;
			Global_1C017E.f_ADC.f_1D[0] = 4;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_2C = 203;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1C017E.f_ADC.f_9), {func_438(iParam1)}, 16);
			Global_1C017E.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 7;
			Global_1C017E.f_A94 = 2;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			Global_1C017E.f_ADC.f_1C = 4;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_2C = 202;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			Global_1C017E.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 0;
			Global_1C017E.f_A96[2] = 0;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 1;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 2;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 0;
			Global_1C017E.f_ADC.f_1D[3] = 0;
			break;
		
		case 80:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C017E.f_A96[0] = 3;
			Global_1C017E.f_A94 = 1;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 1;
			break;
		
		case 3:
			uParam0->f_2C = 791;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 3;
			Global_1C017E.f_A94 = 4;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_2C = 1200;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 1;
				Global_1C017E.f_A96[2] = 4;
				Global_1C017E.f_A96[3] = 5;
				Global_1C017E.f_A96[4] = 6;
				Global_1C017E.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				Global_1C017E.f_ADC.f_1C = 6;
				Global_1C017E.f_ADC.f_1D[0] = 5;
				Global_1C017E.f_ADC.f_1D[1] = 11;
				Global_1C017E.f_ADC.f_1D[2] = 4;
				Global_1C017E.f_ADC.f_1D[3] = 5;
				Global_1C017E.f_ADC.f_1D[4] = 5;
			}
			else if (Global_187385.f_26 == 1)
			{
				uParam0->f_2C = 777;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_187385.f_1 == 5)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_187385.f_1 == 5)
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 1;
				Global_1C017E.f_A96[2] = 2;
				Global_1C017E.f_A96[3] = 0;
				Global_1C017E.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 2;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 5;
			}
			else
			{
				uParam0->f_2C = 780;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_187385.f_1 == 5)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_187385.f_1 == 5)
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 1;
				Global_1C017E.f_A96[2] = 2;
				Global_1C017E.f_A96[3] = 0;
				Global_1C017E.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 5;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 5;
			}
			break;
		
		case 8:
			uParam0->f_2C = 795;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			MISC::SET_BIT(&(Global_1C017E.f_AD0), 1);
			Global_1C017E.f_AC2[1] = -1;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 11;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 85:
			uParam0->f_2C = 274;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 3;
			Global_1C017E.f_A94 = 2;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_2C = 965;
							break;
						
						case 9:
							uParam0->f_2C = 966;
							break;
						
						case 4:
							uParam0->f_2C = 967;
							break;
						
						case 8:
							uParam0->f_2C = 968;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 4;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 2;
					Global_1C017E.f_A94 = 4;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_2C = 969;
							break;
						
						case 2:
							uParam0->f_2C = 970;
							break;
						
						case 3:
							uParam0->f_2C = 973;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 4;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 2;
					Global_1C017E.f_A94 = 4;
					MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 4;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
				
				case 7:
					uParam0->f_2C = 971;
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 4;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 2;
					Global_1C017E.f_A94 = 4;
					MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 4;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_2C = 972;
							break;
						
						case 5:
							uParam0->f_2C = 974;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 0;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 2;
					Global_1C017E.f_A96[3] = 1;
					Global_1C017E.f_A94 = 4;
					MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 12;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_2C = 192;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C017E.f_A96[0] = 2;
			Global_1C017E.f_A96[1] = 5;
			Global_1C017E.f_A96[2] = 4;
			Global_1C017E.f_A96[3] = 3;
			Global_1C017E.f_A94 = 4;
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1D[0] = 17;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 82:
			uParam0->f_2C = 850;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 4;
			Global_1C017E.f_A96[2] = 3;
			Global_1C017E.f_A96[3] = 2;
			Global_1C017E.f_A94 = 4;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1D[0] = 10;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 84:
			uParam0->f_2C = 820;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 5;
			Global_1C017E.f_A96[4] = 4;
			Global_1C017E.f_A96[5] = 3;
			Global_1C017E.f_A94 = 6;
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
			Global_1C017E.f_ADC.f_1D[0] = 4;
			Global_1C017E.f_ADC.f_1D[1] = 9;
			Global_1C017E.f_ADC.f_1D[2] = 4;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			Global_1C017E.f_ADC.f_1D[5] = 5;
			break;
		
		case 86:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C017E.f_A96[0] = 2;
			Global_1C017E.f_A94 = 1;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 1;
			break;
		
		case 91:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C017E.f_ADC = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
				Global_1C017E.f_A96[0] = 3;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 1;
				Global_1C017E.f_A96[3] = 0;
				Global_1C017E.f_A95 = 6;
				Global_1C017E.f_A94 = 2;
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				Global_1C017E.f_ADC.f_1C = 4;
				Global_1C017E.f_ADC.f_1D[0] = 1;
				Global_1C017E.f_ADC.f_1D[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
				Global_1C017E.f_A96[0] = 3;
				Global_1C017E.f_A96[1] = 2;
				Global_1C017E.f_A96[2] = 4;
				Global_1C017E.f_A96[3] = 1;
				Global_1C017E.f_A95 = 4;
				Global_1C017E.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 1;
				Global_1C017E.f_ADC.f_1D[1] = 1;
				Global_1C017E.f_ADC.f_1D[2] = 3;
			}
			Global_1C017E.f_ADB = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1C017E.f_A94)
	{
		if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
		{
			MISC::SET_BIT(&(Global_1C017E.f_AD2), iVar2);
		}
		iVar2++;
	}
	Global_1C017E.f_B0A = func_437(Var0, uParam0->f_2C, iParam1, iParam4, iParam5, bParam6);
}

int func_437(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1605C
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_431(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

struct<6> func_438(int iParam0)//Position - 0x160CE
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_439()//Position - 0x16257
{
	if (((((((Global_187385.f_6540 == 1 || Global_187385.f_6540 == 3) || Global_187385.f_6540 == 5) || Global_187385.f_6540 == 7) || Global_187385.f_6540 == 8) || Global_187385.f_6540 == 9) || Global_187385.f_6540 == 11) || Global_187385.f_6540 == 13)
	{
		return 1;
	}
	return 0;
}

int func_440(var uParam0, bool bParam1)//Position - 0x162DD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1C171A.f_2 + 5 < MISC::GET_FRAME_COUNT() && Global_1C171A.f_2 > 0)
	{
		func_341(&Global_1C171A);
		func_341(&(Global_1C171A.f_31));
		*uParam0 = 0;
		Global_1C171A.f_2 = 0;
		func_449(0);
	}
	Global_1C171A.f_2 = MISC::GET_FRAME_COUNT();
	iVar1 = -1;
	if (MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0xBD545D44CCE70597() == 0)
		{
			iVar1 = NETWORK::_0x74FB3E29E6D10FA9();
		}
	}
	if ((MISC::IS_ORBIS_VERSION() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_447() && NETWORK::NETWORK_IS_SIGNED_ONLINE()))
	{
		if (NETWORK::_0x8D11E61A4ABF49CC())
		{
			func_444(&(Global_1C171A.f_3), func_446(&(Global_1C171A.f_3)));
			if (!MISC::IS_BIT_SET(*uParam0, 4))
			{
				MISC::SET_BIT(uParam0, 4);
				StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
				func_442(&(Global_1C171A.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 2)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 1)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 5)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (!func_447())
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1);
			}
			if (!MISC::IS_BIT_SET(*uParam0, 0))
			{
				if (!PAD::IS_CONTROL_PRESSED(2, 201))
				{
					MISC::SET_BIT(uParam0, 0);
				}
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
			{
				func_341(&(Global_1C171A.f_31));
				func_341(&Global_1C171A);
				*uParam0 = 0;
				Global_1C171A.f_2 = 0;
				func_449(0);
				return 1;
			}
		}
	}
	else
	{
		func_444(&(Global_1C171A.f_3), func_446(&(Global_1C171A.f_3)));
		if ((func_441(&(Global_1C171A.f_31)) && !func_419(&(Global_1C171A.f_31), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			MISC::SET_BIT(uParam0, 3);
			StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
			func_442(&(Global_1C171A.f_3), 0);
		}
		else if (!MISC::IS_BIT_SET(*uParam0, 3))
		{
			if (!MISC::IS_BIT_SET(*uParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
				MISC::SET_BIT(uParam0, 1);
				StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
				func_442(&(Global_1C171A.f_3), 0);
			}
		}
		if (func_441(&Global_1C171A))
		{
			if (!func_419(&Global_1C171A, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						if (!MISC::IS_BIT_SET(*uParam0, 0))
						{
							if (!PAD::IS_CONTROL_PRESSED(2, 201))
							{
								MISC::SET_BIT(uParam0, 0);
							}
						}
						else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							func_341(&Global_1C171A);
							*uParam0 = 0;
							Global_1C171A.f_2 = 0;
							func_449(0);
							return 1;
						}
					}
				}
				else
				{
					func_341(&Global_1C171A);
					*uParam0 = 0;
					Global_1C171A.f_2 = 0;
					func_449(0);
					return 1;
				}
			}
			else if (MISC::IS_BIT_SET(*uParam0, 3))
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!MISC::IS_BIT_SET(*uParam0, 0))
				{
					if (!PAD::IS_CONTROL_PRESSED(2, 201))
					{
						MISC::SET_BIT(uParam0, 0);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					func_341(&(Global_1C171A.f_31));
					func_341(&Global_1C171A);
					*uParam0 = 0;
					Global_1C171A.f_2 = 0;
					func_449(0);
					return 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
					if (!MISC::IS_BIT_SET(*uParam0, 0))
					{
						if (!PAD::IS_CONTROL_PRESSED(2, 201))
						{
							MISC::SET_BIT(uParam0, 0);
						}
					}
					else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_341(&(Global_1C171A.f_31));
						func_341(&Global_1C171A);
						*uParam0 = 0;
						Global_1C171A.f_2 = 0;
						func_449(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_441(var uParam0)//Position - 0x16749
{
	return uParam0->f_1;
}

void func_442(var uParam0, bool bParam1)//Position - 0x16755
{
	func_443(uParam0);
	if (bParam1)
	{
		func_449(0);
	}
	uParam0->f_23 = 1;
}

void func_443(var uParam0)//Position - 0x16772
{
	struct<46> Var0;
	
	Var0.f_29 = 1;
	*uParam0 = { Var0 };
}

void func_444(var uParam0, int iParam1)//Position - 0x1678D
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_445(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_24)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else if (uParam0->f_25)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else if (uParam0->f_27)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_11));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else if (uParam0->f_26)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_11));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else if (uParam0->f_28)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_21, 70);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_445(var uParam0)//Position - 0x1688B
{
	uParam0->f_23 = 0;
}

int func_446(var uParam0)//Position - 0x16898
{
	return uParam0->f_23;
}

int func_447()//Position - 0x168A4
{
	if (func_448())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_448()//Position - 0x168C4
{
	return Global_2528EC;
}

void func_449(bool bParam0)//Position - 0x168D0
{
	HUD::BUSYSPINNER_OFF();
	if (bParam0)
	{
		HUD::PRELOAD_BUSYSPINNER();
	}
}

void func_450(var uParam0, int iParam1, char[4] cParam2)//Position - 0x168E5
{
	func_138(&(Local_44.f_77), 1128792064, 1, 0, 1, 1065353216);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	func_435(iParam1, cParam2);
	func_451(uParam0, &uLocal_1233);
}

void func_451(var uParam0, var uParam1)//Position - 0x1691E
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	char cVar6[64];
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	struct<3> Var12;
	struct<3> Var13;
	bool bVar14;
	
	func_412(&(Global_1C171A.f_31), 1, 0);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_511();
	func_510();
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_508();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	func_507(1);
	func_506(1);
	if (!func_414())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!MISC::IS_BIT_SET(uParam1->f_2A, 3))
	{
		*uParam0 = func_332();
		MISC::SET_BIT(&(uParam1->f_2A), 3);
	}
	Var10 = { func_430(PLAYER::PLAYER_ID()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) || Global_1C017E.f_B10 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_1C017E.f_B0D != 2)
				{
					MISC::CLEAR_BIT(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
			{
				if (Global_1C017E.f_B0D != 3)
				{
					MISC::CLEAR_BIT(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 3;
				}
			}
			else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
			{
				if (Global_1C017E.f_B0D != 4)
				{
					MISC::CLEAR_BIT(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 4;
				}
			}
			else if (Global_1C017E.f_B10 != 0)
			{
				if (Global_1C017E.f_B0D != 5)
				{
					MISC::CLEAR_BIT(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 5;
				}
			}
			if (!MISC::IS_BIT_SET(uParam1->f_2A, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_505(*uParam0, Global_1C017E.f_ADC);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1C017E.f_ADC.f_1)))
				{
					if (!func_431(uParam1->f_2C))
					{
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							cVar6 = { Global_1C017E.f_ADC.f_9 };
							func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &cVar6, Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					else if (!Global_1C017E.f_ADC.f_1B)
					{
						StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					else
					{
						StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					func_503(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
				}
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 4);
				func_502(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 5);
				func_502(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 6);
				func_502(*uParam0, &iVar3, iVar9, 1, 1);
				MISC::SET_BIT(&(uParam1->f_2A), 1);
				func_501(*uParam0);
				MISC::CLEAR_BIT(&(uParam1->f_2A), 2);
				HUD::CLEAR_HELP(1);
			}
			else
			{
				func_501(*uParam0);
			}
		}
		else
		{
			if (Global_1C017E.f_B0D != 1)
			{
				MISC::CLEAR_BIT(&(uParam1->f_2A), 1);
				Global_1C017E.f_B0D = 1;
			}
			if (!func_473(uParam1))
			{
				uParam1->f_F6.f_1 = -1;
				MISC::CLEAR_BIT(&(uParam1->f_2A), 1);
				if (!MISC::IS_BIT_SET(uParam1->f_2A, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_505(*uParam0, Global_1C017E.f_ADC);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1C017E.f_ADC.f_1)))
					{
						if (!func_431(uParam1->f_2C))
						{
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								cVar6 = { Global_1C017E.f_ADC.f_9 };
								func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &cVar6, 1, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else if (!Global_1C017E.f_ADC.f_1B)
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						func_503(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
					}
					MISC::SET_BIT(&(uParam1->f_2A), 0);
					MISC::CLEAR_BIT(&(uParam1->f_2A), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1C017E.f_B09 == -1)
				{
					StringCopy(&Var12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_502(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_502(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_502(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						func_472(*uParam0, iVar3, iVar9, &Var12);
						iVar3++;
						iVar0++;
					}
					Global_1C017E.f_B09 = 1;
					func_341(&(Global_1C017E.f_B07));
				}
				else if (func_419(&(Global_1C017E.f_B07), 300, 0))
				{
					StringCopy(&Var13, "SC_LB_DL", 24);
					StringIntConCat(&Var13, Global_1C017E.f_B09, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_502(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_502(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_502(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						func_472(*uParam0, iVar3, iVar9, &Var13);
						iVar3++;
						iVar0++;
					}
					Global_1C017E.f_B09++;
					if (Global_1C017E.f_B09 > 3)
					{
						Global_1C017E.f_B09 = 0;
					}
					func_341(&(Global_1C017E.f_B07));
				}
				func_501(*uParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam1->f_2A), 0);
				if (!MISC::IS_BIT_SET(uParam1->f_2A, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_F6.f_BB[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_505(*uParam0, Global_1C017E.f_ADC);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1C017E.f_ADC.f_1)))
					{
						if (!func_431(uParam1->f_2C))
						{
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								cVar6 = { Global_1C017E.f_ADC.f_9 };
								func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &cVar6, 1, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else if (!Global_1C017E.f_ADC.f_1B)
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_504(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						func_503(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_2A, 6))
					{
						func_344(&Global_1C1269);
						func_468(uParam1, &Global_1C1269);
						func_467(uParam1, &Global_1C1269);
					}
					iVar3 = 0;
					uParam1->f_F6.f_2 = 0;
					if ((Global_1C017E.f_A90[0] > 1 || (Global_1C017E.f_A90[0] > 0 && Global_1C017E.f_AD7[0] != -1)) || (((Global_1C017E.f_A90[0] > 0 && Global_1C017E.f_ADC.f_1B) && func_431(uParam1->f_2C)) && Global_1C017E.f_AD7[0] != -1))
					{
						uParam1->f_F6.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1C1269[iVar0 /*100*/].f_4B == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 4);
									func_502(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1C1269[iVar0 /*100*/].f_4B == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 5);
									if ((Global_1C017E.f_A90[1] < 1 && Global_1C017E.f_AD7[1] == -1) && !(((Global_1C017E.f_A90[1] > 0 && Global_1C017E.f_ADC.f_1B) && func_431(uParam1->f_2C)) && Global_1C017E.f_AD7[1] != -1))
									{
										func_502(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_502(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1C1269[iVar0 /*100*/].f_4B == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 6);
									if (!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
									{
										bVar14 = true;
									}
									else if (!NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
									{
										bVar14 = true;
									}
									if ((Global_1C017E.f_A90[2] < 2 && Global_1C017E.f_AD7[2] == -1) && !(((Global_1C017E.f_A90[2] > 0 && Global_1C017E.f_ADC.f_1B) && func_431(uParam1->f_2C)) && Global_1C017E.f_AD7[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_502(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_502(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_425(Global_1C1269[iVar0 /*100*/].f_20))
							{
								if (func_431(uParam1->f_2C))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar11);
									if (!Global_1C1269[iVar0 /*100*/].f_4A && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_2C.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1C017E.f_ADC.f_1B)
									{
										if (func_466(&(Global_1C1269[iVar0 /*100*/].f_20), &Var10))
										{
											MISC::SET_BIT(&iVar9, 1);
											if (uParam1->f_F6.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_F6.f_1 = iVar0;
												MISC::SET_BIT(&iVar9, 3);
											}
										}
									}
									if (func_431(uParam1->f_2C))
									{
										cVar6 = { Global_1C1269[iVar0 /*100*/] };
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1C1269[iVar0 /*100*/].f_54)) && !MISC::ARE_STRINGS_EQUAL(&(Global_1C1269[iVar0 /*100*/].f_54), ""))
										{
											StringConCat(&cVar6, "/", 64);
											StringConCat(&cVar6, &(Global_1C1269[iVar0 /*100*/].f_54), 64);
										}
										func_465(*uParam0, iVar3, iVar9, Global_1C1269[iVar0 /*100*/].f_3B, &cVar6, &(Global_1C1269[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C1269[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									else
									{
										func_465(*uParam0, iVar3, iVar9, Global_1C1269[iVar0 /*100*/].f_3B, &(Global_1C1269[iVar0 /*100*/]), &(Global_1C1269[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C1269[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1C017E.f_A94)
									{
										bVar5 = false;
										if (MISC::IS_BIT_SET(Global_1C017E.f_AD2, iVar1))
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD0, iVar1))
											{
												if (Global_1C017E.f_AC2[iVar1] == Global_1C1269[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_460(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_43[iVar1], 0, Global_1C1269[iVar0 /*100*/].f_3A);
											}
											else
											{
												func_460(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_43[iVar1], Global_1C1269[iVar0 /*100*/].f_4A, Global_1C1269[iVar0 /*100*/].f_3A);
											}
										}
										else
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD0, iVar1))
											{
												if (Global_1C017E.f_AC9[iVar1] == Global_1C1269[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_457(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_3C[iVar1], 0);
											}
											else
											{
												func_457(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_3C[iVar1], Global_1C1269[iVar0 /*100*/].f_4A);
											}
										}
										iVar1++;
									}
									func_456();
									uVar2[(Global_1C1269[iVar0 /*100*/].f_4B - 1)]++;
									if (uVar2[(Global_1C1269[iVar0 /*100*/].f_4B - 1)] == 2)
									{
										if (Global_1C1269[iVar0 /*100*/].f_3B > 2)
										{
											MISC::SET_BIT(&iVar9, 2);
											MISC::SET_BIT(&(uParam1->f_F6.f_6[0 /*15*/].f_1), 2);
											func_455(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_F6.f_BB[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 4);
						func_502(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 5);
						func_502(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 6);
						func_502(*uParam0, &iVar3, iVar9, 1, 0);
					}
					MISC::SET_BIT(&(uParam1->f_2A), 1);
					MISC::CLEAR_BIT(&(uParam1->f_2A), 2);
					func_501(*uParam0);
					HUD::CLEAR_HELP(1);
					if (uParam1->f_F6.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_1C017E.f_A90[0] > 1)
						{
							uParam1->f_F6.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
							func_455(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_501(*uParam0);
					func_452(uParam0, uParam1);
				}
			}
		}
	}
}

void func_452(var uParam0, var uParam1)//Position - 0x178FA
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_F6.f_1;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		PAD::SET_INPUT_EXCLUSIVE(2, 239);
		PAD::SET_INPUT_EXCLUSIVE(2, 240);
		PAD::SET_INPUT_EXCLUSIVE(2, 237);
		PAD::SET_INPUT_EXCLUSIVE(2, 238);
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241))
		{
			PAD::_SET_CONTROL_NORMAL(2, 188, 1f);
		}
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242))
		{
			PAD::_SET_CONTROL_NORMAL(2, 187, 1f);
		}
		if (HUD::_0x632B2940C67F4EA9(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_F6.f_BB[0])
				{
					if (iVar3 <= (uParam1->f_F6.f_BB[0] + uParam1->f_F6.f_BB[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_F6.f_1 != iVar3)
				{
					uParam1->f_F6.f_1 = iVar3;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					PAD::_SET_CONTROL_NORMAL(2, 217, 1f);
				}
			}
		}
	}
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		func_454(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_F6.f_2 > 0)
	{
		if (!MISC::IS_BIT_SET(uParam1->f_F6, 0))
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 188) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 188)) || iVar6 < -100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_F6.f_1 = (uParam1->f_F6.f_1 + -1);
				MISC::SET_BIT(&(uParam1->f_F6), 0);
				func_341(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_453(uParam1, 188))
		{
			MISC::CLEAR_BIT(&(uParam1->f_F6), 0);
		}
		if (!MISC::IS_BIT_SET(uParam1->f_F6, 1))
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 187) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 187)) || iVar6 > 100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_F6.f_1++;
				MISC::SET_BIT(&(uParam1->f_F6), 1);
				func_341(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_453(uParam1, 187))
		{
			MISC::CLEAR_BIT(&(uParam1->f_F6), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_F6.f_1 < 0)
		{
			uParam1->f_F6.f_1 = (uParam1->f_F6.f_2 - 1);
		}
		if (uParam1->f_F6.f_1 >= uParam1->f_F6.f_2)
		{
			uParam1->f_F6.f_1 = 0;
		}
	}
	if (!MISC::IS_BIT_SET(uParam1->f_F6, 3))
	{
		if ((PAD::IS_CONTROL_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			MISC::SET_BIT(&(uParam1->f_F6), 3);
			func_341(&(uParam1->f_F6.f_3));
			bVar0 = true;
		}
	}
	else if (func_453(uParam1, 204))
	{
		MISC::CLEAR_BIT(&(uParam1->f_F6), 3);
	}
	if (uParam1->f_F6.f_1 >= 0)
	{
		if (uParam1->f_F6.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				MISC::CLEAR_BIT(&(uParam1->f_F6.f_6[iVar1 /*15*/].f_1), 3);
				func_455(*uParam0, uParam1->f_F6.f_6[iVar1 /*15*/], uParam1->f_F6.f_6[iVar1 /*15*/].f_1);
			}
			MISC::SET_BIT(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
			func_455(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
			MISC::CLEAR_BIT(&(uParam1->f_2A), 2);
		}
		if (func_425(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_F6, 2))
			{
				if (PAD::IS_CONTROL_PRESSED(2, 217) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 217))
				{
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						MISC::SET_BIT(&(uParam1->f_F6), 2);
						NETWORK::NETWORK_SHOW_PROFILE_UI(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!PAD::IS_CONTROL_PRESSED(2, 217))
			{
				MISC::CLEAR_BIT(&(uParam1->f_F6), 2);
			}
		}
	}
}

int func_453(var uParam0, int iParam1)//Position - 0x17C9B
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_454(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_419(&(uParam0->f_F6.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) || func_419(&(uParam0->f_F6.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_454(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x17D3A
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

void func_455(var uParam0, int iParam1, int iParam2)//Position - 0x17E0F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_456()//Position - 0x17E32
{
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_457(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)//Position - 0x17E3E
{
	switch (Param0.f_1D[iParam14])
	{
		case 4:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(SYSTEM::FLOOR(fParam15));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 18 || Param0.f_1D[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_1D[iParam14] == 19 || Param0.f_1D[iParam14] == 20)
					{
						fParam15 = func_459(fParam15);
					}
					else
					{
						fParam15 = func_458(fParam15);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

float func_458(float fParam0)//Position - 0x17F60
{
	return (fParam0 / 0.3048f);
}

float func_459(float fParam0)//Position - 0x17F70
{
	return (fParam0 / 1609.344f);
}

void func_460(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)//Position - 0x17F80
{
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	switch (Param0.f_1D[iParam14])
	{
		case 5:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(-iParam15);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_1D[iParam14] == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_1D[iParam14] == 10)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam15))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SCLB_VEH_CUST");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam15))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 8:
			if (func_464(iParam15) != 0)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_461(func_464(iParam15), 0));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 14 || Param0.f_1D[iParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_1D[iParam14] == 15 || Param0.f_1D[iParam14] == 16)
					{
						iParam15 = SYSTEM::FLOOR(func_459(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_458(SYSTEM::TO_FLOAT(iParam15)));
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_461(int iParam0, bool bParam1)//Position - 0x18371
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		default:
			if (func_463(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_462(&(Var0.f_1F));
				}
				else
				{
					return func_462(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_462(var uParam0)//Position - 0x18BCE
{
	return uParam0;
}

int func_463(int iParam0, var uParam1)//Position - 0x18BD8
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

int func_464(int iParam0)//Position - 0x18C13
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_465(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char[4] cParam5)//Position - 0x18D86
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (iParam3 > 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(cParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam5);
}

int func_466(var uParam0, var uParam1)//Position - 0x18DD8
{
	if (!func_425(*uParam0))
	{
		return 0;
	}
	if (!func_425(*uParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

void func_467(var uParam0, var uParam1)//Position - 0x18E12
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	if (!MISC::IS_BIT_SET(uParam0->f_2A, 5) && !MISC::IS_BIT_SET(uParam0->f_2A, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_4B != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_4B != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_4B < (uParam1[iVar0 /*100*/])->f_4B)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
							(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
							(uParam1[iVar0 /*100*/])->f_4B = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_4B == (uParam1[iVar0 /*100*/])->f_4B)
						{
							if ((uParam1[iVar1 /*100*/])->f_3B != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_3B < (uParam1[iVar0 /*100*/])->f_3B || (uParam1[iVar0 /*100*/])->f_3B == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
									(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
									(uParam1[iVar0 /*100*/])->f_4B = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_468(var uParam0, var uParam1)//Position - 0x18F83
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!MISC::IS_BIT_SET(uParam0->f_2A, 5) && !MISC::IS_BIT_SET(uParam0->f_2A, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_471(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_471(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_471(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_469(uParam1);
	}
}

void func_469(var uParam0)//Position - 0x19038
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C017E.f_A90[iVar0] = 0;
		Global_1C017E.f_AD7[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_430(PLAYER::PLAYER_ID()) };
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C017E.f_B0A))
	{
		iVar4 = STATS::LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Global_1C017E.f_B0A);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_470(&Global_1C11E7);
				iVar2 = 0;
				STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(Global_1C017E.f_B0A, iVar0, &Global_1C11E7);
				*(uParam0[iVar0 /*100*/]) = { Global_1C11E7.f_1 };
				(uParam0[iVar0 /*100*/])->f_10 = { Global_1C11E7.f_11 };
				(uParam0[iVar0 /*100*/])->f_20 = { Global_1C11E7.f_21 };
				(uParam0[iVar0 /*100*/])->f_2D = { Global_1C11E7.f_2E };
				(uParam0[iVar0 /*100*/])->f_3A = Global_1C11E7.f_3B;
				(uParam0[iVar0 /*100*/])->f_3B = Global_1C11E7.f_3C;
				Global_1C017E.f_A94 = Global_1C11E7.f_3E;
				Global_1C017E.f_AD1 = Global_1C11E7.f_3F;
				iVar2 = 0;
				if (MISC::IS_BIT_SET(Global_1C11E7.f_3D, 1))
				{
					iVar2 = 1;
				}
				else if (MISC::IS_BIT_SET(Global_1C11E7.f_3D, 2))
				{
					iVar2 = 2;
				}
				else if (MISC::IS_BIT_SET(Global_1C11E7.f_3D, 3))
				{
					iVar2 = 3;
				}
				Global_1C017E.f_A90[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_4B = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_3B != -1)
				{
					if (MISC::IS_BIT_SET(Global_1C11E7.f_3D, 0))
					{
						(uParam0[iVar0 /*100*/])->f_4A = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_4A = 0;
					}
					if (func_466(&((uParam0[iVar0 /*100*/])->f_20), &Var3))
					{
						Global_1C017E.f_AD7[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1C11E7.f_3E)
				{
					if (MISC::IS_BIT_SET(Global_1C11E7.f_3F, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_43[iVar1] = Global_1C11E7.f_61[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_3C[iVar1] = Global_1C11E7.f_40[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_470(var uParam0)//Position - 0x19258
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_11), "", 64);
	uParam0->f_21 = { Var0 };
	uParam0->f_2E = { Var0 };
	uParam0->f_3B = 0;
	uParam0->f_3C = 0;
	uParam0->f_3D = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_40[iVar1] = 0f;
		uParam0->f_61[iVar1] = 0;
		iVar1++;
	}
}

int func_471(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x192CE
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1C017E[iParam3 /*901*/][0 /*75*/].f_3B > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][0 /*75*/] };
			Global_1C11AE[iParam3 /*16*/] = { Global_1C017E[iParam3 /*901*/][0 /*75*/] };
			Global_1C11AE.f_31[iParam3] = Global_1C017E[iParam3 /*901*/][0 /*75*/].f_43[Global_1C017E.f_ADB];
			Global_1C11AE.f_35[iParam3] = Global_1C017E[iParam3 /*901*/][0 /*75*/].f_3C[Global_1C017E.f_ADB];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1C017E.f_AD7[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][Global_1C017E.f_AD7[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1C017E.f_AD7[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
				(uParam0[iParam1 /*100*/])->f_20 = { func_430(PLAYER::PLAYER_ID()) };
				(uParam0[iParam1 /*100*/])->f_3B = -1;
				(uParam0[iParam1 /*100*/])->f_43[0] = -1;
				(uParam0[iParam1 /*100*/])->f_43[1] = -1;
				(uParam0[iParam1 /*100*/])->f_43[2] = -1;
				(uParam0[iParam1 /*100*/])->f_43[3] = -1;
				(uParam0[iParam1 /*100*/])->f_3C[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1C017E.f_AD7[iParam3] - iVar0) >= 1)
		{
			if (Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] - iVar0) /*75*/].f_3B > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1C017E.f_AD7[iParam3] + iVar0) < 12 && (Global_1C017E.f_AD7[iParam3] + iVar0) > 0)
		{
			if (Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] + iVar0) /*75*/].f_3B > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_472(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x19577
{
	MISC::SET_BIT(&iParam2, 7);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_473(var uParam0)//Position - 0x195AB
{
	if (!Global_1C017C)
	{
		if (!func_441(&(Global_1C017E.f_B0B)))
		{
			func_420(&(Global_1C017E.f_B0B), 1, 0);
			return 0;
		}
		else if (!func_419(&(Global_1C017E.f_B0B), 1000, 1))
		{
			return 0;
		}
	}
	if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) || Global_1C017E.f_B10 != 0)
	{
		MISC::CLEAR_BIT(&(uParam0->f_2A), 4);
		return 1;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_2A, 4))
	{
		func_500(uParam0);
		MISC::SET_BIT(&(uParam0->f_2A), 4);
		return 0;
	}
	else if (MISC::IS_BIT_SET(uParam0->f_2A, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_498(uParam0))
	{
		return 0;
	}
	if (!func_496(uParam0))
	{
		return 0;
	}
	if (!func_489(uParam0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_2A, 6))
	{
		func_344(&Global_1C1269);
		func_468(uParam0, &Global_1C1269);
		func_467(uParam0, &Global_1C1269);
		MISC::SET_BIT(&(uParam0->f_2A), 6);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_2A, 7))
	{
		if (!func_441(&(Global_1C017E.f_B0E)))
		{
			func_420(&(Global_1C017E.f_B0E), 1, 0);
		}
		else if (func_419(&(Global_1C017E.f_B0E), 30000, 1))
		{
			MISC::SET_BIT(&(uParam0->f_2A), 7);
		}
		if (func_486(&Global_1C1269))
		{
		}
		else
		{
			return 0;
		}
		if (func_483(&Global_1C1269))
		{
		}
		else
		{
			return 0;
		}
		if (func_477(&Global_1C1269))
		{
			func_474(&Global_1C1269);
			MISC::SET_BIT(&(uParam0->f_2A), 7);
			func_474(&Global_1C1269);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_474(var uParam0)//Position - 0x19770
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_476(Global_1C017E.f_B0A);
	if (Global_1C0DEF.f_51[iVar2] != 0)
	{
		func_475(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_470(&Global_1C11E7);
		if ((uParam0[iVar0 /*100*/])->f_4B != 0)
		{
			Global_1C11E7 = Global_1C017E.f_B0A;
			Global_1C11E7.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*100*/])->f_10), ""))
			{
				Global_1C11E7.f_11 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1C11E7.f_11 = { (uParam0[iVar0 /*100*/])->f_10 };
			}
			Global_1C11E7.f_21 = { (uParam0[iVar0 /*100*/])->f_20 };
			if (func_425((uParam0[iVar0 /*100*/])->f_2D))
			{
				Global_1C11E7.f_2E = { (uParam0[iVar0 /*100*/])->f_2D };
			}
			else
			{
				Global_1C11E7.f_2E = { (uParam0[iVar0 /*100*/])->f_20 };
			}
			Global_1C11E7.f_3B = (uParam0[iVar0 /*100*/])->f_3A;
			Global_1C11E7.f_3C = (uParam0[iVar0 /*100*/])->f_3B;
			Global_1C11E7.f_3E = Global_1C017E.f_A94;
			Global_1C11E7.f_3F = Global_1C017E.f_AD2;
			if ((uParam0[iVar0 /*100*/])->f_4A)
			{
				MISC::SET_BIT(&(Global_1C11E7.f_3D), 0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1C11E7.f_3D), 0);
			}
			MISC::SET_BIT(&(Global_1C11E7.f_3D), (uParam0[iVar0 /*100*/])->f_4B);
			iVar1 = 0;
			while (iVar1 < Global_1C11E7.f_3E)
			{
				if (MISC::IS_BIT_SET(Global_1C11E7.f_3F, iVar1))
				{
					Global_1C11E7.f_61[iVar1] = (uParam0[iVar0 /*100*/])->f_43[iVar1];
				}
				else
				{
					Global_1C11E7.f_40[iVar1] = (uParam0[iVar0 /*100*/])->f_3C[iVar1];
				}
				iVar1++;
			}
			Global_1C0DEF.f_51[iVar2] = Global_1C017E.f_B0A;
			STATS::LEADERBOARDS_CACHE_DATA_ROW(&Global_1C11E7);
		}
		iVar0++;
	}
	Global_1C0DEF.f_57[iVar2 /*3*/] = { func_205(PLAYER::PLAYER_ID()) };
}

void func_475(int iParam0, int iParam1)//Position - 0x1995A
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C0DEF.f_51[iParam1]))
		{
			STATS::_0x8EC74CEB042E7CFF(Global_1C0DEF.f_51[iParam1]);
		}
		Global_1C0DEF.f_51[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0))
		{
			STATS::_0x8EC74CEB042E7CFF(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1C0DEF.f_51[iVar0] == iParam0)
			{
				Global_1C0DEF.f_51[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_476(int iParam0)//Position - 0x199D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DEF.f_51[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DEF.f_51[iVar0] == 0)
		{
			return iVar0;
		}
		else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C0DEF.f_51[iVar0]))
		{
			iVar3 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1C0DEF.f_51[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_477(var uParam0)//Position - 0x19A69
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_4C)
	{
		case 0:
			func_481(uParam0);
			if (MISC::IS_ORBIS_VERSION() && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				(uParam0[0 /*100*/])->f_4C = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_425((uParam0[iVar0 /*100*/])->f_20))
				{
					if (!func_480(&((uParam0[iVar0 /*100*/])->f_20), &Global_1C177A))
					{
						Global_1C177A[Global_1C177A.f_CE /*13*/] = { (uParam0[iVar0 /*100*/])->f_20 };
						Global_1C177A.f_CE++;
					}
				}
				iVar0++;
			}
			if (Global_1C177A.f_CE > 0)
			{
				(uParam0[0 /*100*/])->f_4C = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4C = 3;
			}
			break;
		
		case 1:
			if (func_478(&((uParam0[1 /*100*/])->f_4C), &(Global_1C177A.f_CE), &Global_1C177A, &(Global_1C177A.f_9D)))
			{
				(uParam0[0 /*100*/])->f_4C = 2;
			}
			break;
		
		case 2:
			if (Global_1C177A.f_CE > 12)
			{
				Global_1C177A.f_CE = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1C177A.f_CE)
				{
					if (func_425((uParam0[iVar0 /*100*/])->f_20) && func_425(Global_1C177A[iVar1 /*13*/]))
					{
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((uParam0[iVar0 /*100*/])->f_20), &(Global_1C177A[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_50 = { Global_1C177A.f_9D[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_4C = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_478(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x19C0C
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_START(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_NEW(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_479(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_479(var uParam0, var uParam1)//Position - 0x19CC5
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, uParam1);
}

int func_480(var uParam0, var uParam1)//Position - 0x19CD7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_425(*(uParam1[iVar0 /*13*/])))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_481(var uParam0)//Position - 0x19D16
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_482(&(Global_1C177A[iVar0 /*13*/]));
		StringCopy(&(Global_1C177A.f_9D[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_4C > 0)
	{
		(uParam0[0 /*100*/])->f_4C = 0;
		(uParam0[1 /*100*/])->f_4C = 0;
		if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
		{
			NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
		}
	}
	if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
	{
		NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
	}
	Global_1C177A.f_CE = 0;
}

void func_482(var uParam0)//Position - 0x19D87
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

int func_483(var uParam0)//Position - 0x19DCF
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	else if (MISC::IS_DURANGO_VERSION())
	{
		if (!func_485(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_484(&((uParam0[iVar0 /*100*/])->f_4E), &((uParam0[iVar0 /*100*/])->f_20), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_484(var uParam0, var uParam1, char* sParam2)//Position - 0x19E33
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_425(*uParam1))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
				{
					if (MISC::IS_DURANGO_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (MISC::IS_XBOX360_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (MISC::IS_ORBIS_VERSION())
						{
						}
						else if (MISC::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_485(var uParam0)//Position - 0x19F3A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!MISC::IS_DURANGO_VERSION())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_4E == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_4E)
	{
		case 0:
			Global_1C017E.f_C6F = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1C017E.f_B11[iVar1 /*16*/]), "", 64);
				func_482(&(Global_1C017E.f_BD2[iVar1 /*13*/]));
				if (func_425((uParam0[iVar1 /*100*/])->f_20))
				{
					Global_1C017E.f_BD2[Global_1C017E.f_C6F /*13*/] = { (uParam0[iVar1 /*100*/])->f_20 };
					Global_1C017E.f_C6F++;
				}
				iVar1++;
			}
			if (Global_1C017E.f_C6F > 0)
			{
				(uParam0[0 /*100*/])->f_4F = NETWORK::_0xD66C9E72B3CC4982(&(Global_1C017E.f_BD2), Global_1C017E.f_C6F);
				(uParam0[0 /*100*/])->f_4E = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES((uParam0[0 /*100*/])->f_4F, &(Global_1C017E.f_B11), Global_1C017E.f_C6F);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_425((uParam0[iVar1 /*100*/])->f_20))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1C017E.f_B11[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_4F = -1;
			return 1;
			break;
	}
	return 0;
}

int func_486(var uParam0)//Position - 0x1A0C6
{
	int iVar0;
	
	if (MISC::IS_DURANGO_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_488(&((uParam0[iVar0 /*100*/])->f_4D), &((uParam0[iVar0 /*100*/])->f_10), &((uParam0[iVar0 /*100*/])->f_54), &(Global_1C017E.f_B11), &((uParam0[iVar0 /*100*/])->f_4F)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_487(&((uParam0[iVar0 /*100*/])->f_4D), (uParam0[iVar0 /*100*/])->f_10, &((uParam0[iVar0 /*100*/])->f_54)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_487(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)//Position - 0x1A159
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_425(Var0))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
				{
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (MISC::IS_ORBIS_VERSION())
						{
						}
						else if (MISC::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_488(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x1A271
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!MISC::IS_DURANGO_VERSION())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_425(Var1[0 /*13*/]))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var1[0 /*13*/])))
				{
					*uParam4 = NETWORK::_0xD66C9E72B3CC4982(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_489(var uParam0)//Position - 0x1A36D
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_13.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_430(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1C017E.f_AD7[iVar9] = -1;
			Global_1C017E.f_A90[iVar9] = 0;
			Global_1C0005.f_176 = -1;
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var12))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_2C.f_2 = uParam0->f_7;
						uParam0->f_2C.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_410(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var12, func_495(), 0, 0, 0))
			{
				func_428(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_495())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar7, &Var0);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_466(&Var0, &Var12) || func_466(&Var0, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var0.f_60;
									}
								}
								if (iVar5 < 0)
								{
									if (MISC::IS_BIT_SET(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= STATS::_0x88578F6EC36B4A3A(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_494(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_60 <= 1)
						{
							if (Global_1C017E.f_A90[iVar9] < 12)
							{
								if (func_495() && iVar5 == 0)
								{
									func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
									Global_1C017E.f_AD7[iVar9] = 0;
									Global_1C017E.f_A90[iVar9]++;
								}
								if (func_495() && (func_466(&Var0, &Var12) || func_466(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_466(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1C017E.f_AD7[iVar9] = 0;
									}
									MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									if (func_492(uParam0->f_2C))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A95);
										if (iVar4 == 1)
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_431(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C017E.f_A90[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1C017E.f_A90[iVar9]++;
						}
						if (!func_495())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_494(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar7, &Var0);
							if (Global_1C017E.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_495() && iVar5 == iVar7)
								{
									if (!func_466(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20), &Var12))
									{
										func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
										Global_1C017E.f_A90[iVar9]++;
									}
								}
								if (func_495() && (func_466(&Var0, &Var12) || func_466(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[iVar9] < 12)
								{
									if (func_425(Var0) && !func_466(&Var0, &(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_466(&Var0, &Var12))
										{
											if (Global_1C017E.f_AD7[iVar9] < 0)
											{
												Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
											}
										}
										MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
										Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
										Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
										Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
										if (func_492(uParam0->f_2C))
										{
											iVar4 = STATS::_0x88578F6EC36B4A3A(iVar7, Global_1C017E.f_A95);
											if (iVar4 == 1)
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
											}
										}
										if (func_431(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1C017E.f_A94)
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar2] = STATS::_0x88578F6EC36B4A3A(iVar7, Global_1C017E.f_A96[iVar2]);
											}
											else
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar2] = STATS::_0x38491439B6BA7F7D(iVar7, Global_1C017E.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C017E.f_A90[iVar9]++;
									}
								}
							}
							func_494(&Var0);
							iVar7++;
						}
						STATS::_0x71B008056E5692D6();
						func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar8)
						{
							if (Global_1C017E.f_AD7[iVar9] == -1 && func_495())
							{
								if (Global_1C017E.f_A90[iVar9] >= 1)
								{
									func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
								Global_1C017E.f_A90[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1C017E.f_A90[iVar9]++;
						}
						STATS::_0x71B008056E5692D6();
						func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_AD7[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_AD7[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					MISC::SET_BIT(&(Global_1C017E.f_B10), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1C017E.f_AD7[iVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_491(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar11))
			{
				func_428(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar2, &Var0);
							bVar10 = false;
							if (Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B > 1 || Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B <= 0)
							{
								bVar10 = true;
							}
							if (Global_1C017E.f_A90[iVar9] < 12 || bVar10)
							{
								if (func_495() && (func_466(&Var0, &Var12) || func_466(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1C017E[iVar9 /*901*/][0 /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20 = { Var0 };
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B = Var0.f_60;
									if (func_492(uParam0->f_2C))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A95);
										if (iVar4 == 1)
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3A = 0;
										}
									}
									if (func_431(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (Global_1C017E.f_A90[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1C017E.f_A90[iVar9]++;
										}
									}
								}
								else if (Global_1C017E.f_A90[iVar9] < 12)
								{
									MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									if (func_492(uParam0->f_2C))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(iVar2, Global_1C017E.f_A95);
										if (iVar4 == 1)
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_431(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(iVar2, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(iVar2, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1C017E.f_A90[iVar9]++;
									}
								}
							}
							func_494(&Var0);
							iVar2++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					STATS::_0x71B008056E5692D6();
					func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					MISC::SET_BIT(&(Global_1C017E.f_B10), iVar9);
					Global_1C017E.f_A90[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1C017E.f_AD7[iVar9] == -1 && func_495())
				{
					if (Global_1C017E.f_A90[iVar9] >= 1)
					{
						func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
					}
					else
					{
						func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
					}
					Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
					Global_1C017E.f_A90[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_490(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_490(int iParam0, int iParam1)//Position - 0x1B1A0
{
	int iVar0;
	
	if ((func_495() && Global_1C017E.f_A90[iParam0] > Global_1C017E.f_AD7[iParam0]) && Global_1C017E.f_AD7[iParam0] >= 0)
	{
		if (iParam1 != Global_1C017E[iParam0 /*901*/][Global_1C017E.f_AD7[iParam0] /*75*/].f_3B)
		{
			iVar0 = 0;
			while (iVar0 < Global_1C017E.f_A90[iParam0])
			{
				if (iVar0 != Global_1C017E.f_AD7[iParam0])
				{
					if (Global_1C017E[iParam0 /*901*/][iVar0 /*75*/].f_3B >= Global_1C017E[iParam0 /*901*/][Global_1C017E.f_AD7[iParam0] /*75*/].f_3B)
					{
						if (Global_1C017E[iParam0 /*901*/][iVar0 /*75*/].f_3B < iParam1 || iParam1 == -1)
						{
							Global_1C017E[iParam0 /*901*/][iVar0 /*75*/].f_3B++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_495())
		{
		}
		if (Global_1C017E.f_A90[iParam0] <= Global_1C017E.f_AD7[iParam0])
		{
		}
		if (Global_1C017E.f_AD7[iParam0] < 0)
		{
		}
	}
}

int func_491(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x1B2C5
{
	switch (*uParam0)
	{
		case 0:
			if (!func_417() && !func_413())
			{
				func_411(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_RANK(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_492(int iParam0)//Position - 0x1B37B
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_493(var uParam0, char* sParam1, int iParam2)//Position - 0x1B3D9
{
	int iVar0;
	int iVar1;
	
	if (func_431(uParam0->f_2C))
	{
		MemCopy(sParam1, {Global_1C0005.f_163}, 16);
		sParam1->f_20 = { Global_1C0005.f_169 };
		MemCopy(&(sParam1->f_10), {Global_1C0005.f_15D}, 16);
	}
	else
	{
		StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
		sParam1->f_20 = { func_430(PLAYER::PLAYER_ID()) };
	}
	sParam1->f_3B = iParam2;
	if (func_492(uParam0->f_2C))
	{
		iVar0 = Global_1C0005.f_D3.f_24[Global_1C017E.f_A95];
		if (iVar0 == 1)
		{
			sParam1->f_3A = 1;
		}
		else
		{
			sParam1->f_3A = 0;
		}
	}
	sParam1->f_4A = 1;
	iVar1 = 0;
	while (iVar1 < Global_1C017E.f_A94)
	{
		if (MISC::IS_BIT_SET(Global_1C0005.f_8E.f_2, Global_1C017E.f_A96[iVar1]))
		{
			sParam1->f_43[iVar1] = Global_1C0005.f_D3.f_24[Global_1C017E.f_A96[iVar1]];
		}
		else
		{
			sParam1->f_3C[iVar1] = Global_1C0005.f_D3.f_3[Global_1C017E.f_A96[iVar1]];
		}
		iVar1++;
	}
}

void func_494(var uParam0)//Position - 0x1B4E6
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
	StringCopy(&(uParam0->f_D), "", 24);
	uParam0->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_55 = 0;
	StringCopy(&(uParam0->f_56), "", 32);
	StringCopy(&(uParam0->f_5E), "", 8);
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
}

int func_495()//Position - 0x1B594
{
	if (Global_1C017C && Global_1C017D)
	{
		return 1;
	}
	return 0;
}

int func_496(var uParam0)//Position - 0x1B5B1
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_13.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_430(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = NETWORK::NETWORK_GET_FRIEND_COUNT();
			Global_1C017E.f_AD7[1] = -1;
			Global_1C0005.f_176 = -1;
			Global_1C017E.f_A90[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_495())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_497(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &(uParam0->f_71), uParam0->f_71[0 /*66*/], iVar8, 0, 100))
				{
					func_428(&Var1, &(uParam0->f_2C));
					if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
					{
						if (func_495())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									STATS::_0x34770B9CE0E03B91(iVar6, &Var0);
									if (func_431(uParam0->f_2C))
									{
										if (Global_1C0005.f_176 < 0)
										{
											if (func_466(&Var0, &(Global_1C0005.f_169)))
											{
												Global_1C0005.f_176 = Var0.f_60;
											}
										}
									}
									if (MISC::IS_BIT_SET(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= STATS::_0x88578F6EC36B4A3A(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_494(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_495() && iVar4 == 0)
						{
							if (Global_1C017E.f_A90[iVar9] < 12)
							{
								func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								Global_1C017E.f_AD7[iVar9] = 0;
								Global_1C017E.f_A90[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							STATS::_0x34770B9CE0E03B91(0, &Var0);
							if (func_495() && (func_466(&Var0, &Var10) || func_466(&Var0, &(Global_1C0005.f_169))))
							{
							}
							else if (func_425(Var0) && Global_1C017E.f_A90[iVar9] < 12)
							{
								if (func_466(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1C017E.f_AD7[1] = 0;
								}
								MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = 1;
								if (func_492(uParam0->f_2C))
								{
									iVar7 = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A95);
									if (iVar7 == 1)
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
									}
									else
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
									}
								}
								if (func_431(uParam0->f_2C))
								{
									MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
								iVar2 = 0;
								while (iVar2 < Global_1C017E.f_A94)
								{
									if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar2] = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A96[iVar2]);
									}
									else
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar2] = STATS::_0x38491439B6BA7F7D(0, Global_1C017E.f_A96[iVar2]);
									}
									iVar2++;
								}
								Global_1C017E.f_A90[1]++;
							}
							else
							{
								func_494(&Var0);
								STATS::_0x71B008056E5692D6();
								func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
								Global_1C017E.f_A90[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1C017E.f_AD7[iVar9] == -1 && func_495())
								{
									if (Global_1C017E.f_A90[iVar9] >= 1)
									{
										func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
									}
									else
									{
										func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
									}
									Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
									Global_1C017E.f_A90[iVar9]++;
								}
								return 0;
							}
							func_494(&Var0);
						}
						else
						{
							Global_1C017E.f_A90[1] = 0;
							func_494(&Var0);
							STATS::_0x71B008056E5692D6();
							func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
							if (Global_1C017E.f_AD7[iVar9] == -1 && func_495())
							{
								if (Global_1C017E.f_A90[iVar9] >= 1)
								{
									func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
								Global_1C017E.f_A90[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_495())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar6, &Var0);
							if (Global_1C017E.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_495() && iVar4 == iVar6)
								{
									if (!func_466(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20), &Var10))
									{
										func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
										Global_1C017E.f_A90[iVar9]++;
									}
								}
								if (func_495() && (func_466(&Var0, &Var10) || func_466(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[1] < 12)
								{
									if (func_425(Var0) && !func_466(&Var0, &(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_466(&Var0, &Var10))
										{
											if (Global_1C017E.f_AD7[1] < 0)
											{
												Global_1C017E.f_AD7[1] = Global_1C017E.f_A90[1];
											}
										}
										MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/]), {Var0.f_D}, 16);
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_20 = { Var0 };
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_4A = 1;
										if (func_492(uParam0->f_2C))
										{
											iVar7 = STATS::_0x88578F6EC36B4A3A(iVar6, Global_1C017E.f_A95);
											if (iVar7 == 1)
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3A = 0;
											}
										}
										if (func_431(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1C017E.f_A94)
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_43[iVar2] = STATS::_0x88578F6EC36B4A3A(iVar6, Global_1C017E.f_A96[iVar2]);
											}
											else
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3C[iVar2] = STATS::_0x38491439B6BA7F7D(iVar6, Global_1C017E.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C017E.f_A90[1]++;
									}
								}
							}
							func_494(&Var0);
							iVar6++;
						}
						STATS::_0x71B008056E5692D6();
						func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						(*uParam0)[1] = 1;
						if (Global_1C017E.f_AD7[iVar9] == -1 && func_495())
						{
							if (Global_1C017E.f_A90[iVar9] >= 1)
							{
								func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
							}
							else
							{
								func_493(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
							}
							Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
							Global_1C017E.f_A90[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_A90[1] = 0;
						(*uParam0)[1] = 1;
						MISC::SET_BIT(&(Global_1C017E.f_B10), 1);
						return 0;
					}
				}
			}
			else
			{
				func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
				Global_1C017E.f_A90[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_490(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_497(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1BFB5
{
	switch (*uParam0)
	{
		case 0:
			if (!func_417() && !func_413())
			{
				func_411(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_498(var uParam0)//Position - 0x1C072
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_13.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_430(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1C017E.f_AD7[iVar10] = -1;
			Global_1C017E.f_A90[iVar10] = 0;
			Global_1C0005.f_176 = -1;
			Global_1C017D = 0;
			if (func_499(uParam0->f_2C))
			{
				if (!Global_1C017D)
				{
					Global_1C017D = 1;
				}
			}
			else if (Global_1C017D)
			{
				Global_1C017D = 0;
			}
			if (!Global_1C017D)
			{
			}
			if (func_410(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var0, func_495(), 0, 0, 0))
			{
				func_428(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_495())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar8, &Var1);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_466(&Var1, &Var0) || func_466(&Var1, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var1.f_60;
									}
								}
								if (iVar6 < 0)
								{
									if (MISC::IS_BIT_SET(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= STATS::_0x88578F6EC36B4A3A(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_494(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var1);
						if (Var1.f_60 <= 1)
						{
							if (Global_1C017E.f_A90[iVar10] < 12)
							{
								if (func_495() && iVar6 == 0)
								{
									func_493(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Var1.f_60);
									Global_1C017E.f_AD7[iVar10] = 0;
									Global_1C017E.f_A90[iVar10]++;
								}
								if (func_495() && (func_466(&Var1, &Var0) || func_466(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_466(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1C017E.f_AD7[iVar10] = 0;
									}
									MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
									if (func_492(uParam0->f_2C))
									{
										iVar5 = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A95);
										if (iVar5 == 1)
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 0;
										}
									}
									if (func_431(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_4A = 1;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C017E.f_A90[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1C017E.f_A90[iVar10]++;
						}
						if (!func_495())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_494(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar8, &Var1);
							if (Global_1C017E.f_A90[iVar10] < 12 && Var1.f_60 > 1)
							{
								if (func_495() && iVar6 == iVar8)
								{
									if (!func_466(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										func_493(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Var1.f_60);
										Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
										Global_1C017E.f_A90[iVar10]++;
									}
								}
								if (func_495() && (func_466(&Var1, &Var0) || func_466(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[iVar10] < 12)
								{
									if (func_425(Var1) && !func_466(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										if (func_466(&Var1, &Var0))
										{
											if (Global_1C017E.f_AD7[iVar10] < 0)
											{
												Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
											}
										}
										MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_4A = 1;
										if (func_492(uParam0->f_2C))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(iVar8, Global_1C017E.f_A95);
											if (iVar5 == 1)
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_431(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1C017E.f_A94)
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(iVar8, Global_1C017E.f_A96[iVar3]);
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(iVar8, Global_1C017E.f_A96[iVar3]);
											}
											iVar3++;
										}
										Global_1C017E.f_A90[iVar10]++;
									}
								}
							}
							func_494(&Var1);
							iVar8++;
						}
						STATS::_0x71B008056E5692D6();
						func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar9)
						{
							if (Global_1C017E.f_AD7[iVar10] == -1 && func_495())
							{
								if (Global_1C017E.f_A90[iVar10] >= 1)
								{
									func_493(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Global_1C017E[iVar10 /*901*/][(Global_1C017E.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_493(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
								Global_1C017E.f_A90[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1C017E.f_A90[iVar10]++;
						}
						STATS::_0x71B008056E5692D6();
						func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_AD7[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_AD7[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					MISC::SET_BIT(&(Global_1C017E.f_B10), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1C017E.f_AD7[iVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_491(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar12))
			{
				func_428(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar3, &Var1);
							if (func_495() && (func_466(&Var1, &Var0) || func_466(&Var1, &(Global_1C0005.f_169))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3B > 1 || Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3B <= 0)
								{
									bVar11 = true;
								}
								if (Global_1C017E.f_A90[iVar10] < 12 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1C017E[iVar10 /*901*/][0 /*75*/]), {Var1.f_D}, 16);
										Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20 = { Var1 };
										Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3B = Var1.f_60;
										if (func_492(uParam0->f_2C))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A95);
											if (iVar5 == 1)
											{
												Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3A = 0;
											}
										}
										if (func_431(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C017E[iVar10 /*901*/][0 /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C017E.f_A94)
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar4]))
											{
												Global_1C017E[iVar10 /*901*/][iVar3 /*75*/].f_43[iVar4] = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][iVar3 /*75*/].f_3C[iVar4] = STATS::_0x38491439B6BA7F7D(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (Global_1C017E.f_A90[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1C017E.f_A90[iVar10]++;
											}
										}
										else if (Global_1C017E.f_A90[iVar10] == 1 && Global_1C017E.f_AD7[iVar10] == -1)
										{
											Global_1C017E.f_A90[iVar10]++;
										}
									}
									else if (Global_1C017E.f_A90[iVar10] < 12)
									{
										MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										if (func_492(uParam0->f_2C))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1C017E.f_A95);
											if (iVar5 == 1)
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_431(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C017E.f_A94)
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar4]))
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_43[iVar4] = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3C[iVar4] = STATS::_0x38491439B6BA7F7D(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1C017E.f_A90[iVar10]++;
										}
									}
								}
							}
							func_494(&Var1);
							iVar3++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					MISC::SET_BIT(&(Global_1C017E.f_B10), iVar10);
					func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_A90[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1C017E.f_A90[1] = 0;
					(*uParam0)[1] = 1;
					Global_1C017E.f_A90[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1C017E.f_AD7[iVar10] == -1 && func_495())
			{
				if (Global_1C017E.f_A90[iVar10] >= 1)
				{
					func_493(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Global_1C017E[iVar10 /*901*/][(Global_1C017E.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
				}
				else
				{
					func_493(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), 1);
				}
				Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
				Global_1C017E.f_A90[iVar10]++;
			}
			break;
		
		case 2:
			func_490(iVar10, Global_1C0005.f_176);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_499(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)//Position - 0x1CEAD
{
	int iVar0;
	
	if (Global_1C017C)
	{
		if (Global_1C0005.f_5 != 0)
		{
			if (Global_1C0005.f_5 == Param0)
			{
				if (Global_1C0005.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_500(var uParam0)//Position - 0x1CF45
{
	int iVar0;
	
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C017E.f_B0A))
	{
		iVar0 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1C017E.f_B0A);
		if (iVar0 < 300000)
		{
			MISC::SET_BIT(&(uParam0->f_2A), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_2A), 5);
			func_475(Global_1C017E.f_B0A, -1);
		}
	}
}

void func_501(var uParam0)//Position - 0x1CF95
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_502(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1CFB5
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (MISC::IS_BIT_SET(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (MISC::IS_BIT_SET(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (MISC::IS_BIT_SET(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if (MISC::IS_ORBIS_VERSION() && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_430(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var4))
				{
					NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var4);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bVar3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		MISC::SET_BIT(&iVar5, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1C017E.f_B10 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (MISC::IS_BIT_SET(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (MISC::IS_BIT_SET(iParam2, 5))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (MISC::IS_BIT_SET(iParam2, 6))
		{
			if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				if (NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
					{
						if (MISC::IS_ORBIS_VERSION() && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_430(PLAYER::PLAYER_ID()) };
							if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var6))
							{
								NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var6);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		MISC::SET_BIT(&iVar7, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
		if (bVar3)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
}

void func_503(var uParam0, char* sParam1, var uParam2, int iParam3)//Position - 0x1D28B
{
	int iVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam2[iVar0 /*6*/]);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		iVar0++;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_504(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x1D2CD
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_MULTIPLAYER_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_505(var uParam0, int iParam1)//Position - 0x1D35D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_506(int iParam0)//Position - 0x1D37A
{
	Global_141F58 = iParam0;
}

void func_507(int iParam0)//Position - 0x1D388
{
	Global_1446E8.f_2F4 = iParam0;
}

void func_508()//Position - 0x1D399
{
	func_511();
	func_509(4, -1);
	func_509(6, -1);
	func_509(7, -1);
	func_509(3, -1);
	func_509(1, -1);
	func_509(2, -1);
	func_509(11, -1);
	func_509(13, -1);
	func_509(14, -1);
	func_509(16, -1);
}

void func_509(int iParam0, int iParam1)//Position - 0x1D3E5
{
	MISC::SET_BIT(&(Global_1441E9.f_3B4), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1441E9.f_AA[iParam1] = 1;
			}
			break;
	}
}

void func_510()//Position - 0x1D41B
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_128(0))
		{
			func_125(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

void func_511()//Position - 0x1D443
{
	Global_2554DA.f_110E = 0;
}

void func_512(bool bParam0)//Position - 0x1D453
{
	if (bParam0)
	{
		func_239(&(Local_44.f_77), 0, 0, 1, 1);
		func_238(&(Local_44.f_77), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_238(&(Local_44.f_77), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_513(&(Local_44.f_77), 1);
	}
	else
	{
		func_239(&(Local_44.f_77), 0, 0, 1, 1);
		func_238(&(Local_44.f_77), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_513(&(Local_44.f_77), 1);
	}
}

void func_513(var uParam0, bool bParam1)//Position - 0x1D4C6
{
	if (bParam1)
	{
		func_140(&(uParam0->f_1), 1024);
	}
	else
	{
		func_139(&(uParam0->f_1), 1024);
	}
}

int func_514(var uParam0)//Position - 0x1D4EC
{
	if ((MISC::IS_BIT_SET(uParam0->f_2A, 1) && Global_1C017E.f_A90[0] > 0) && uParam0->f_F6.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_515(var uParam0)//Position - 0x1D523
{
	if (Global_1787F != 0 && Global_17C49.f_4391.f_C[Global_1787F /*8*/].f_4 == 0)
	{
		func_239(uParam0, 0, 0, 1, 1);
		func_238(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			func_238(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_194 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && iLocal_193)
		{
			func_238(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_194 = 0;
		}
		else
		{
			iLocal_194 = 0;
		}
	}
	else
	{
		func_239(uParam0, 0, 0, 1, 1);
		func_238(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_238(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			func_238(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_194 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && iLocal_193)
		{
			func_238(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_194 = 0;
		}
		else
		{
			iLocal_194 = 0;
		}
	}
	func_513(&(Local_44.f_77), 1);
}

void func_516()//Position - 0x1D635
{
	func_545();
	func_405();
	func_544(&(Local_2058.f_166[0 /*189*/].f_18), 0, 0, "PilotDispatch", 0, 1);
	func_544(&uLocal_1750, 0, 0, "PilotDispatch", 0, 1);
	func_533(&Local_2058);
	func_517(&Local_2058, Local_44.f_A);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2058.f_166[0 /*189*/].f_9))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2058.f_166[0 /*189*/].f_9, 4);
	}
}

void func_517(var uParam0, int iParam1)//Position - 0x1D69F
{
	switch (iParam1)
	{
		case 0:
			func_532(&Local_2058);
			break;
		
		case 1:
			func_531(&Local_2058);
			break;
		
		case 2:
			func_530(&Local_2058);
			func_529(&(Local_2058.f_1B[2 /*10*/]), 1);
			func_529(&(Local_2058.f_1B[3 /*10*/]), 1);
			break;
		
		case 3:
			func_528(&Local_2058);
			break;
		
		case 4:
			func_518(&Local_2058);
			break;
	}
}

void func_518(var uParam0)//Position - 0x1D718
{
	func_533(uParam0);
	uParam0->f_C = 32;
	func_527(&(uParam0->f_1B[0 /*10*/]), 947.1314f, 4146.46f, 80.494f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[1 /*10*/]), 762.498f, 4589.213f, 105.5935f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[2 /*10*/]), 659.2919f, 4806.028f, 175.759f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[3 /*10*/]), 621.3849f, 5032.051f, 343.6387f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[4 /*10*/]), 503.8404f, 5297.335f, 508.6478f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[5 /*10*/]), 555.4404f, 5426.935f, 708.948f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[6 /*10*/]), 637.6946f, 5491.08f, 717.522f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[7 /*10*/]), 790.3913f, 5491.866f, 566.103f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[8 /*10*/]), 910.6804f, 5313.552f, 388.8567f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[9 /*10*/]), 1159.749f, 5183.155f, 253.1068f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[10 /*10*/]), 1354.13f, 4998.078f, 141.6288f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[11 /*10*/]), 1612.532f, 4941.23f, 61.8549f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[12 /*10*/]), 2200.396f, 4800.332f, 69.9321f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[13 /*10*/]), 2527.632f, 5144.98f, 66.763f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[14 /*10*/]), 2527.131f, 5275.334f, 62.3622f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[15 /*10*/]), 2413.345f, 5443.203f, 99.4297f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[16 /*10*/]), 2236.067f, 5524.246f, 108.3291f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[17 /*10*/]), 1944.463f, 5520.007f, 177.2808f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[18 /*10*/]), 1712.477f, 5624.937f, 324.9427f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[19 /*10*/]), 1601.158f, 5663.75f, 335.8832f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[20 /*10*/]), 1410.764f, 5675.836f, 425.9678f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[21 /*10*/]), 1225.682f, 5678.654f, 497.3169f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[22 /*10*/]), 1094.47f, 5664.07f, 563.0829f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[23 /*10*/]), 1001.427f, 5633.827f, 633.2537f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[24 /*10*/]), 875.5358f, 5642.667f, 682.5352f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[25 /*10*/]), 741.3275f, 5688.046f, 709.5683f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[26 /*10*/]), 487.2532f, 5654.821f, 802.0096f, 30f, 3, 1);
	func_527(&(uParam0->f_1B[27 /*10*/]), 362.6602f, 5620.538f, 723.2353f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[28 /*10*/]), 134.4865f, 5555.637f, 520.3109f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[29 /*10*/]), -128.2242f, 5510.46f, 307.4505f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[30 /*10*/]), -397.7556f, 5438.69f, 175.4529f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[31 /*10*/]), -520.8975f, 5424.283f, 165.285f, 30f, 4, 0);
	uParam0->f_D = 1;
	func_526(&(uParam0->f_166[0 /*189*/]));
	func_525(&(uParam0->f_166[0 /*189*/]), "Player");
	func_521(&(uParam0->f_166[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_44.f_1);
	func_520(&(uParam0->f_166[0 /*189*/]), 1135.682f, 3700.644f, 80.494f, 22.3451f);
	func_519(&(uParam0->f_166[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_519(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1DBD0
{
	uParam0->f_14 = iParam1;
	uParam0->f_15 = iParam2;
	uParam0->f_16 = iParam3;
}

void func_520(var uParam0, struct<3> Param1, float fParam2)//Position - 0x1DBEA
{
	uParam0->f_10 = { Param1 };
	uParam0->f_13 = fParam2;
}

void func_521(var uParam0, int iParam1, var uParam2)//Position - 0x1DC02
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = uParam2;
	func_522(uParam2, &(Local_44.f_F3));
}

void func_522(int iParam0, var uParam1)//Position - 0x1DC20
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		func_524(uParam1);
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
		func_523(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_35), func_112(iVar0 + 1));
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

int func_523(var uParam0, var uParam1, var uParam2)//Position - 0x1DECC
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
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
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_524(var uParam0)//Position - 0x1DFA6
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

void func_525(char* sParam0, char* sParam1)//Position - 0x1E057
{
	StringCopy(sParam0, sParam1, 32);
}

void func_526(var uParam0)//Position - 0x1E065
{
	uParam0->f_A = 0;
	uParam0->f_B = -1;
	uParam0->f_C = 0;
	uParam0->f_D = 0f;
	uParam0->f_17 = 13;
}

void func_527(var uParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4)//Position - 0x1E087
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam2;
	uParam0->f_7 = iParam3;
	uParam0->f_8 = iParam4;
}

void func_528(var uParam0)//Position - 0x1E0A9
{
	func_533(uParam0);
	uParam0->f_C = 28;
	func_527(&(uParam0->f_1B[0 /*10*/]), -1737.725f, -2720.967f, 38f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[1 /*10*/]), -1384.515f, -2880.773f, 38f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[2 /*10*/]), -1156.435f, -2957.284f, 40f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[3 /*10*/]), -795.3043f, -2987.754f, 60f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[4 /*10*/]), -429.0231f, -2969.528f, 30f, 30f, 3, 1);
	func_527(&(uParam0->f_1B[5 /*10*/]), -15.5168f, -2912.484f, 60f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[6 /*10*/]), 656.9059f, -2798.444f, 80f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[7 /*10*/]), 990.7529f, -2452.092f, 70f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[8 /*10*/]), 1019.531f, -2182.119f, 60f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[9 /*10*/]), 1019.899f, -1886.15f, 60f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[10 /*10*/]), 944.9045f, -1488.589f, 107.7f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[11 /*10*/]), 698.908f, -1013.024f, 100.5f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[12 /*10*/]), 388.7276f, -822.8241f, 90f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[13 /*10*/]), 20.7016f, -653.9637f, 101.8f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[14 /*10*/]), -135.3874f, -670.6069f, 112f, 30f, 3, 3);
	func_527(&(uParam0->f_1B[15 /*10*/]), -360.3365f, -655.137f, 90f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[16 /*10*/]), -700.3533f, -657.1476f, 70f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[17 /*10*/]), -951.5859f, -654.0262f, 68f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[18 /*10*/]), -1125.587f, -769.7247f, 67f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[19 /*10*/]), -1281.291f, -851.0229f, 82f, 30f, 3, 1);
	func_527(&(uParam0->f_1B[20 /*10*/]), -1580.865f, -1009.944f, 40f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[21 /*10*/]), -1877.52f, -1152.927f, 30f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[22 /*10*/]), -2101.111f, -1330.267f, 20f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[23 /*10*/]), -2230.15f, -1555.89f, 10f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[24 /*10*/]), -2214.946f, -1978.262f, 10f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[25 /*10*/]), -2055.091f, -2359.626f, 20f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[26 /*10*/]), -1893.392f, -2559.46f, 22f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[27 /*10*/]), -1737.725f, -2720.967f, 83.7f, 30f, 4, 0);
	uParam0->f_D = 1;
	func_526(&(uParam0->f_166[0 /*189*/]));
	func_525(&(uParam0->f_166[0 /*189*/]), "Player");
	func_521(&(uParam0->f_166[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_44.f_1);
	func_520(&(uParam0->f_166[0 /*189*/]), -2102.16f, -2556.082f, 38f, 245.6561f);
	func_519(&(uParam0->f_166[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_529(var uParam0, int iParam1)//Position - 0x1E4D9
{
	func_309(&(uParam0->f_9), iParam1);
}

void func_530(var uParam0)//Position - 0x1E4EB
{
	func_533(uParam0);
	uParam0->f_C = 21;
	func_527(&(uParam0->f_1B[0 /*10*/]), 1167.2f, -2557.195f, 90f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[1 /*10*/]), 869.9235f, -2613.705f, 57.8325f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[2 /*10*/]), 652.3818f, -2651.991f, 54.935f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[3 /*10*/]), 249.3849f, -2579.821f, 60.1264f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[4 /*10*/]), -31.7179f, -2590.793f, 19.9452f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[5 /*10*/]), -317.409f, -2582.66f, 48.7654f, 30f, 3, 3);
	func_527(&(uParam0->f_1B[6 /*10*/]), -395.6915f, -2334.057f, 39.3612f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[7 /*10*/]), -300.2367f, -2118.431f, 53.3728f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[8 /*10*/]), -157.1812f, -1967.885f, 56.4093f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[9 /*10*/]), -199.4688f, -1803.328f, 13.6363f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[10 /*10*/]), -383.5264f, -1738.067f, 60.8194f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[11 /*10*/]), -649.8698f, -1710.374f, 61.3036f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[12 /*10*/]), -861.6902f, -1857.194f, 77.0621f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[13 /*10*/]), -716.8034f, -2111.744f, 65.9868f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[14 /*10*/]), -548.7557f, -2230.616f, 97.2887f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[15 /*10*/]), -270.7834f, -2425.144f, 96.7744f, 30f, 3, 1);
	func_527(&(uParam0->f_1B[16 /*10*/]), 5.435f, -2665.31f, 46.2903f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[17 /*10*/]), 299.0821f, -2834.288f, 27.0191f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[18 /*10*/]), 514.295f, -2880.863f, 42.0956f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[19 /*10*/]), 842.6024f, -2599.042f, 25.978f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[20 /*10*/]), 991.974f, -2468.436f, 87.493f, 30f, 4, 0);
	uParam0->f_D = 1;
	func_526(&(uParam0->f_166[0 /*189*/]));
	func_525(&(uParam0->f_166[0 /*189*/]), "Player");
	func_521(&(uParam0->f_166[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_44.f_1);
	func_520(&(uParam0->f_166[0 /*189*/]), 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	func_519(&(uParam0->f_166[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_531(var uParam0)//Position - 0x1E82D
{
	func_533(uParam0);
	uParam0->f_C = 19;
	func_527(&(uParam0->f_1B[0 /*10*/]), -2819.07f, -81.2779f, 76.1411f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[1 /*10*/]), -2737.77f, 342.665f, 175.645f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[2 /*10*/]), -2631.929f, 499.7495f, 210.0935f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[3 /*10*/]), -2438.01f, 692.3843f, 285.745f, 30f, 3, 3);
	func_527(&(uParam0->f_1B[4 /*10*/]), -2039.406f, 708.7898f, 170.6556f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[5 /*10*/]), -1633.076f, 751.8171f, 220.188f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[6 /*10*/]), -1187.955f, 874.4288f, 246.4972f, 30f, 3, 1);
	func_527(&(uParam0->f_1B[7 /*10*/]), -893.826f, 994.239f, 239.512f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[8 /*10*/]), -565.788f, 1098.308f, 349.0507f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[9 /*10*/]), -326.8564f, 1129.9f, 336.1296f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[10 /*10*/]), -155.9212f, 1149.858f, 312.2522f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[11 /*10*/]), 145.603f, 1162.599f, 277.7465f, 30f, 3, 1);
	func_527(&(uParam0->f_1B[12 /*10*/]), 355.6647f, 1234.464f, 287.6501f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[13 /*10*/]), 640.85f, 1191.643f, 329.783f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[14 /*10*/]), 783.3697f, 1157.395f, 329.0691f, 30f, 3, 3);
	func_527(&(uParam0->f_1B[15 /*10*/]), 1016.378f, 1000.386f, 252.4894f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[16 /*10*/]), 1243.37f, 945.084f, 150.5214f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[17 /*10*/]), 1494.048f, 863.8886f, 110.4097f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[18 /*10*/]), 1751.842f, 687.7875f, 296.787f, 30f, 4, 0);
	uParam0->f_D = 1;
	func_526(&(uParam0->f_166[0 /*189*/]));
	func_525(&(uParam0->f_166[0 /*189*/]), "Player");
	func_521(&(uParam0->f_166[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_44.f_1);
	func_520(&(uParam0->f_166[0 /*189*/]), -2818.17f, -500.178f, 76.1411f, 0f);
	func_519(&(uParam0->f_166[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_532(var uParam0)//Position - 0x1EB27
{
	func_533(uParam0);
	uParam0->f_C = 18;
	func_527(&(uParam0->f_1B[0 /*10*/]), 1025.724f, 3073.133f, 70f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[1 /*10*/]), 847.4132f, 3025.239f, 80f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[2 /*10*/]), 624.897f, 2968.416f, 80f, 30f, 3, 1);
	func_527(&(uParam0->f_1B[3 /*10*/]), 398.5529f, 2921.654f, 75f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[4 /*10*/]), 68.1f, 2896.4f, 80f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[5 /*10*/]), -290.7f, 2895.4f, 80f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[6 /*10*/]), -1033.31f, 2832.959f, 37.5f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[7 /*10*/]), -1195.153f, 2729.109f, 18f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[8 /*10*/]), -1414.6f, 2636.365f, 8.25f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[9 /*10*/]), -1684.856f, 2630.035f, 10f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[10 /*10*/]), -2024.536f, 2677.336f, 30f, 30f, 3, 1);
	func_527(&(uParam0->f_1B[11 /*10*/]), -2659.106f, 2670.574f, 5.4745f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[12 /*10*/]), -2880.136f, 2732.084f, 21.0365f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[13 /*10*/]), -3200.826f, 2826.548f, 40f, 30f, 3, 2);
	func_527(&(uParam0->f_1B[14 /*10*/]), -3363.374f, 2580.812f, 50f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[15 /*10*/]), -3242.432f, 2370.19f, 40f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[16 /*10*/]), -2879.09f, 2382.111f, 20f, 30f, 2, 0);
	func_527(&(uParam0->f_1B[17 /*10*/]), -2650.532f, 2450.207f, 66.6f, 30f, 4, 0);
	uParam0->f_D = 1;
	func_526(&(uParam0->f_166[0 /*189*/]));
	func_525(&(uParam0->f_166[0 /*189*/]), "Player");
	func_521(&(uParam0->f_166[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_44.f_1);
	func_520(&(uParam0->f_166[0 /*189*/]), Local_1963, 154.8464f);
	func_519(&(uParam0->f_166[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_533(var uParam0)//Position - 0x1EDF9
{
	float fVar0;
	
	func_4(&(uParam0->f_3));
	if (Local_44.f_A != -1)
	{
		fVar0 = func_35(Local_44.f_A);
		if (fVar0 <= 0f || fVar0 > Local_44.f_C[Local_44.f_A])
		{
			fVar0 = Local_44.f_C[Local_44.f_A];
		}
		uParam0->f_9 = fVar0;
		uParam0->f_A = (uParam0->f_9 / 2f);
	}
	func_541(uParam0);
	uParam0->f_C = 0;
	func_534(uParam0);
	uParam0->f_D = 0;
}

void func_534(var uParam0)//Position - 0x1EE67
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		func_535(uParam0, iVar0);
		iVar0++;
	}
}

void func_535(var uParam0, int iParam1)//Position - 0x1EE8C
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_537(&(uParam0->f_166[iParam1 /*189*/]));
	func_536(&(uParam0->f_166[iParam1 /*189*/]));
}

void func_536(char* sParam0)//Position - 0x1EEC2
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_A = 0;
	sParam0->f_B = -1;
	sParam0->f_C = 0;
	sParam0->f_D = 0f;
	sParam0->f_E = 0f;
	sParam0->f_F = 0f;
	sParam0->f_17 = 13;
	sParam0->f_10 = { Local_44.f_3 };
	sParam0->f_13 = Local_44.f_6;
	sParam0->f_14 = Local_44.f_7;
	sParam0->f_15 = Local_44.f_8;
	sParam0->f_16 = Local_44.f_9;
}

void func_537(var uParam0)//Position - 0x1EF2C
{
	func_540(uParam0);
	func_539(uParam0);
	func_538(uParam0);
}

void func_538(var uParam0)//Position - 0x1EF46
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_44.f_1)
		{
			if (!(ENTITY::IS_ENTITY_DEAD(uParam0->f_8) || ENTITY::IS_ENTITY_DEAD(uParam0->f_9)))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
				}
			}
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
		}
	}
}

void func_539(var uParam0)//Position - 0x1EF9E
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
		{
			PED::DELETE_PED(&(uParam0->f_8));
		}
	}
}

void func_540(var uParam0)//Position - 0x1EFC4
{
	func_83(&(uParam0->f_A));
}

void func_541(var uParam0)//Position - 0x1EFD4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_C)
	{
		func_542(uParam0, iVar0);
		iVar0++;
	}
}

void func_542(var uParam0, int iParam1)//Position - 0x1EFF9
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_1B[iParam1 /*10*/]));
	func_79(&(uParam0->f_1B[iParam1 /*10*/]));
	func_543(&(uParam0->f_1B[iParam1 /*10*/]));
}

void func_543(var uParam0)//Position - 0x1F03A
{
	*uParam0 = { Local_44.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_544(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1F063
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

void func_545()//Position - 0x1F0FE
{
	struct<68> Var0;
	
	Global_1C0005 = 0;
	Global_1C0005.f_1 = 0;
	Global_1C0005.f_2 = 0;
	Global_1C0005.f_3 = 0;
	Global_1C0005.f_4 = 0;
	func_546(&(Global_1C0005.f_49));
	func_546(&(Global_1C0005.f_8E));
	func_546(&(Global_1C0005.f_D3));
	func_546(&(Global_1C0005.f_118));
	StringCopy(&(Global_1C0005.f_15D), "", 24);
	StringCopy(&(Global_1C0005.f_163), "", 24);
	func_482(&(Global_1C0005.f_169));
	Global_1C0005.f_176 = -1;
	Global_1C017C = 0;
	Global_1C017D = 0;
	Var0.f_2.f_1 = 4;
	Global_1C0005.f_5 = { Var0 };
}

void func_546(var uParam0)//Position - 0x1F1A2
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_547(bool bParam0)//Position - 0x1F1DD
{
	if (bParam0)
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		MISC::PAUSE_DEATH_ARREST_RESTART(1);
		MISC::SET_FADE_OUT_AFTER_DEATH(0);
		func_156(1);
		Global_14E79 = 1;
	}
	else
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
		MISC::PAUSE_DEATH_ARREST_RESTART(0);
		MISC::SET_FADE_OUT_AFTER_DEATH(1);
		func_156(0);
		Global_14E79 = 0;
	}
}

void func_548(var uParam0)//Position - 0x1F21F
{
	*uParam0 = unk_0x67D02A194A2FC2BD("COUNTDOWN");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", 1);
}

int func_549(int iParam0)//Position - 0x1F23C
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	return 0;
}

void func_550()//Position - 0x1F260
{
	int iVar0;
	
	if (!iLocal_2052)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
					{
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							AUDIO::TRIGGER_MUSIC_EVENT("MGSP_START");
							iLocal_2052 = 1;
						}
					}
				}
			}
		}
	}
}

int func_551(int iParam0, int iParam1)//Position - 0x1F2C5
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_552(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1F2DB
{
	*uParam1 = MISC::GET_BITS_IN_RANGE(uParam0, 24, 31);
	*uParam2 = MISC::GET_BITS_IN_RANGE(uParam0, 16, 23);
	*uParam3 = MISC::GET_BITS_IN_RANGE(uParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(uParam0, 0, 7);
}

var func_553(int iParam0)//Position - 0x1F312
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	return func_554(uVar0, uVar1, uVar2, uVar3);
}

var func_554(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1F334
{
	var uVar0;
	
	MISC::SET_BITS_IN_RANGE(&uVar0, 24, 31, uParam0);
	MISC::SET_BITS_IN_RANGE(&uVar0, 16, 23, uParam1);
	MISC::SET_BITS_IN_RANGE(&uVar0, 8, 15, uParam2);
	MISC::SET_BITS_IN_RANGE(&uVar0, 0, 7, uParam3);
	return uVar0;
}

int func_555()//Position - 0x1F369
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_565(23, 1);
	func_564(10);
	switch (Local_1973.f_5)
	{
		case 0:
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 10f);
			func_563();
			func_562(2, 0);
			func_562(1, 0);
			func_562(3, 0);
			func_562(4, 0);
			func_562(5, 0);
			func_562(6, 0);
			func_562(7, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(Local_2064, 600f, 0, 0, 0, 0, 0);
			func_556(&Local_2058, Local_44.f_A);
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 512);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				Local_1973.f_5 = 2;
			}
			else
			{
				Local_1973.f_5 = 1;
			}
			break;
		
		case 1:
			if (func_333(1000))
			{
				Local_1973.f_5 = 2;
			}
			break;
		
		case 2:
			HUD::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", 0);
			while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
			{
				SYSTEM::WAIT(0);
			}
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AWARDS", 0);
			Local_1973.f_5 = 3;
			break;
		
		case 3:
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
			{
				Local_1973.f_5 = 4;
			}
			break;
		
		case 4:
			Local_1973.f_5 = 5;
			func_11(&(Local_1973.f_2));
			break;
		
		case 5:
			if (func_2(&(Local_1973.f_2), 0.5f))
			{
				Local_1973.f_5 = 6;
			}
			break;
		
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				Local_1973.f_5 = 9;
			}
			else
			{
				Local_1973.f_5 = 7;
				func_11(&(Local_1973.f_2));
			}
			break;
		
		case 7:
			if (func_2(&(Local_1973.f_2), 0.5f))
			{
				Local_1973.f_5 = 8;
			}
			break;
		
		case 8:
			if (func_549(5000))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				Local_1973.f_5 = 9;
			}
			break;
		
		case 9:
			func_4(&(Local_1973.f_2));
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_556(var uParam0, int iParam1)//Position - 0x1F58D
{
	Local_44 = 0;
	Local_44.f_1 = 0;
	Local_44.f_2 = 2;
	Local_44.f_3 = { Local_1963 };
	Local_44.f_6 = 154.8464f;
	Local_44.f_7 = 4;
	Local_44.f_8 = joaat("a_m_y_genstreet_01");
	Local_44.f_9 = joaat("stunt");
	StringCopy(&(Local_44.f_18[0 /*8*/]), "AIRPORT", 32);
	Local_44.f_C[0] = 165f;
	StringCopy(&(Local_44.f_18[1 /*8*/]), "BRIDGEBINGE", 32);
	Local_44.f_C[1] = 80f;
	StringCopy(&(Local_44.f_18[2 /*8*/]), "VINEWOOD", 32);
	Local_44.f_C[2] = 165f;
	StringCopy(&(Local_44.f_18[3 /*8*/]), "BRIDGEWORK", 32);
	Local_44.f_C[3] = 165f;
	StringCopy(&(Local_44.f_18[4 /*8*/]), "ALTITUDE", 32);
	Local_44.f_C[4] = 165f;
	switch (iParam1)
	{
		case 0:
			func_561(&Local_2058);
			break;
		
		case 1:
			func_560(&Local_2058);
			break;
		
		case 2:
			func_559(&Local_2058);
			break;
		
		case 3:
			func_558(&Local_2058);
			break;
		
		case 4:
			func_557(&Local_2058);
			break;
	}
}

void func_557(var uParam0)//Position - 0x1F6A1
{
}

void func_558(var uParam0)//Position - 0x1F6A9
{
}

void func_559(var uParam0)//Position - 0x1F6B1
{
}

void func_560(var uParam0)//Position - 0x1F6B9
{
}

void func_561(var uParam0)//Position - 0x1F6C1
{
}

void func_562(int iParam0, int iParam1)//Position - 0x1F6C9
{
	MISC::SET_BIT(&Global_6019, iParam0);
	StringCopy(&(Global_601A[iParam0 /*6*/]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_6051[iParam0] = iParam1;
}

void func_563()//Position - 0x1F6F0
{
	Global_42CA.f_5 = 1;
}

void func_564(int iParam0)//Position - 0x1F6FE
{
	func_286();
	Global_10B94 = iParam0;
	Global_10B93 = 0;
	Global_10B96 = 3;
}

void func_565(int iParam0, bool bParam1)//Position - 0x1F71A
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_6070, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_6070, iParam0);
	}
}

void func_566()//Position - 0x1F73C
{
}

void func_567()//Position - 0x1F744
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_339();
	func_405();
	func_545();
	func_565(23, 0);
	func_547(0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	STREAMING::CLEAR_FOCUS();
	func_286();
	func_214(0);
	func_232(0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	AUDIO::CANCEL_MUSIC_EVENT("MGSP_START");
	AUDIO::CANCEL_MUSIC_EVENT("MGSP_FAIL");
	AUDIO::CANCEL_MUSIC_EVENT("MGTR_COMPLETE");
	AUDIO::TRIGGER_MUSIC_EVENT("MGSP_END");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_575(2, 0);
	func_575(1, 0);
	func_575(3, 0);
	func_575(4, 0);
	func_575(5, 0);
	func_575(6, 0);
	func_575(7, 0);
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_573(&(Local_44.f_76));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
	HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("PilotSchool");
	func_571(&Local_2058, 1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(103, "SPRTaxi");
	VEHICLE::REMOVE_VEHICLE_RECORDING(104, "SPRTaxi");
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	func_570();
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	func_229();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	func_568();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_568()//Position - 0x1F84F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_15504[iVar0 /*17*/] && !Global_15504[iVar0 /*17*/].f_1)
		{
			if (Global_15504[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_15504[iVar0 /*17*/].f_5 != 88 && Global_15504[iVar0 /*17*/].f_5 != 89) && Global_15504[iVar0 /*17*/].f_5 != 92)
				{
					func_569(Global_15504[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_569(int iParam0, bool bParam1)//Position - 0x1F8D6
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

void func_570()//Position - 0x1F914
{
	Global_42CA.f_5 = 0;
}

void func_571(var uParam0, bool bParam1)//Position - 0x1F922
{
	if (bParam1)
	{
		func_533(uParam0);
	}
	else
	{
		func_572(uParam0);
	}
	func_124(0);
	func_27(&(uParam0->f_11));
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	if (iLocal_2051)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2051 = 0;
	}
}

void func_572(var uParam0)//Position - 0x1F96A
{
}

void func_573(var uParam0)//Position - 0x1F972
{
	func_574(*uParam0);
}

void func_574(var uParam0)//Position - 0x1F981
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}

void func_575(int iParam0, bool bParam1)//Position - 0x1F98F
{
	if (MISC::IS_BIT_SET(Global_6019, iParam0))
	{
		if (!bParam1)
		{
			MISC::CLEAR_BIT(&Global_6019, iParam0);
			StringCopy(&(Global_601A[iParam0 /*6*/]), "NULL", 24);
			Global_6051[iParam0] = bParam1;
		}
	}
}

