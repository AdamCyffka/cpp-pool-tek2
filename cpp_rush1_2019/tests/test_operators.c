/*
** EPITECH PROJECT, 2020
** cpp_rush1
** File description:
**operators tests file
*/

#include <signal.h>
#include <criterion/criterion.h>
#include "../point.h"
#include "../vertex.h"
#include "../array.h"
#include "../char.h"
#include "../float.h"
#include "../int.h"
#include "../object.h"
#include "../new.h"


Test(point, addition) {
	Object *a = new(Point, 42, -42);
	Object *b = new(Point, 1, -1);

	cr_assert_str_eq(str(addition(a, b)), "<Point (43, -43)>");
	delete(a);
	delete(b);
}

Test(point, subtraction) {
	Object *a = new(Point, 42, -42);
	Object *b = new(Point, 1, -1);

	cr_assert_str_eq(str(subtraction(a, b)), "<Point (41, -41)>");
	delete(a);
	delete(b);
}

Test(vertex, addition) {
	Object *a = new(Vertex, 0, 1, 2);
	Object *b = new(Vertex, 1, 2, 3);

	cr_assert_str_eq(str(addition(a, b)), "<Vertex (1, 3, 5)>");
	delete(a);
	delete(b);
}

Test(vertex, subtraction) {
	Object *a = new(Vertex, 0, 1, 2);
	Object *b = new(Vertex, 1, 2, 3);

	cr_assert_str_eq(str(subtraction(a, b)), "<Vertex (-1, -1, -1)>");
	delete(a);
	delete(b);
}

Test(char, addition) {
	Object *a = new(Char, 'a');
	Object *b = new(Char, 1);

	cr_assert_str_eq(str(addition(a, b)), "<Char ('b')>");
	delete(a);
	delete(b);
}

Test(char, subtraction) {
	Object *a = new(Char, 'c');
	Object *b = new(Char, 1);

	cr_assert_str_eq(str(subtraction(a, b)), "<Char ('b')>");
	delete(a);
	delete(b);
}

Test(int, addition) {
	Object *a = new(Int, 2);
	Object *b = new(Int, 1);

	cr_assert_str_eq(str(addition(a, b)), "<Int (3)>");
	delete(a);
	delete(b);
}

Test(int, subtraction) {
	Object *a = new(Int, 2);
	Object *b = new(Int, 1);

	cr_assert_str_eq(str(subtraction(a, b)), "<Int (1)>");
	delete(a);
	delete(b);
}

Test(int, multiplication) {
	Object *a = new(Int, 2);
	Object *b = new(Int, 3);

	cr_assert_str_eq(str(multiplication(a, b)), "<Int (6)>");
	delete(a);
	delete(b);
}

Test(int, division) {
	Object *a = new(Int, 2);
	Object *b = new(Int, 3);

	cr_assert_str_eq(str(division(b, a)), "<Int (1)>");
	delete(a);
	delete(b);
}

Test(int, eq) {
	Object *a = new(Int, 2);
	Object *b = new(Int, 3);
	Object *c = new(Int, 2);

	cr_assert_not(eq(a, b));
	cr_assert(eq(a, c));
	delete(a);
	delete(b);
	delete(c);
}

Test(int, gt) {
	Object *a = new(Int, 4);
	Object *b = new(Int, 3);
	Object *c = new(Int, 5);

	cr_assert(gt(a, b));
	cr_assert_not(gt(a, c));
	delete(a);
	delete(b);
	delete(c);
}

Test(int, lt) {
	Object *a = new(Int, 2);
	Object *b = new(Int, 3);
	Object *c = new(Int, 2);

	cr_assert(lt(a, b));
	cr_assert_not(lt(a, c));
	delete(a);
	delete(b);
	delete(c);
}

Test(float, addition) {
	Object *a = new(Float, 2.0);
	Object *b = new(Float, -0.5);

	cr_assert_str_eq(str(addition(a, b)), "<Float (1.5)>");
	delete(a);
	delete(b);
}

Test(float, subtraction) {
	Object *a = new(Float, 2.0);
	Object *b = new(Float, 0.5);

	cr_assert_str_eq(str(subtraction(a, b)), "<Float (1.5)>");
	delete(a);
	delete(b);
}

Test(float, multiplication) {
	Object *a = new(Float, 2.0);
	Object *b = new(Float, 3.2);

	cr_assert_str_eq(str(multiplication(a, b)), "<Float (6.4)>");
	delete(a);
	delete(b);
}

Test(float, division) {
	Object *a = new(Float, 2.0);
	Object *b = new(Float, 3.0);

	cr_assert_str_eq(str(division(b, a)), "<Float (1.5)>");
	delete(a);
	delete(b);
}

Test(float, eq) {
	Object *a = new(Float, 2.1);
	Object *b = new(Float, 3.3);
	Object *c = new(Float, 2.1);

	cr_assert_not(eq(a, b));
	cr_assert(eq(a, c));
	delete(a);
	delete(b);
	delete(c);
}

Test(float, gt) {
	Object *a = new(Float, 4.1);
	Object *b = new(Float, 3.1);
	Object *c = new(Float, 5.1);

	cr_assert(gt(a, b));
	cr_assert_not(gt(a, c));
	delete(a);
	delete(b);
	delete(c);
}

Test(float, lt) {
	Object *a = new(Float, 2.1);
	Object *b = new(Float, 3.1);
	Object *c = new(Float, 2.1);

	cr_assert(lt(a, b));
	cr_assert_not(lt(a, c));
	delete(a);
	delete(b);
	delete(c);
}

