#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"



TEST_CASE("Caesar"){
  CHECK(encryptCaesar("Mama Made Me Mash My M&Ms!" , 60)== "Uiui Uilm Um Uiap Ug U&Ua!");
}

TEST_CASE("Vig"){
  CHECK(encryptVigenere("Mama Made Me Mash My M&Ms!", "Hello")== "Texl Ahhp Xs Teds Af Q&Xd!");
}

TEST_CASE("DeCaesar"){
  CHECK(decryptCaesar("Uiui Uilm Um Uiap Ug U&Ua!", 60) == "Mama Made Me Mash My M&Ms!");
}

TEST_CASE("counting primes"){
  CHECK(decryptVigenere("Texl Ahhp Xs Teds Af Q&Xd!", "Hello") == "Mama Made Me Mash My M&Ms!");
}