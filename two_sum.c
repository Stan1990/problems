#include <stdio.h>
#include <stdblib.h>

#include "global.h"

//   problem : 从数组中找到两个数使其和能等于给出的数，两个数中的
// 一个数已经给出

// 1. hash table
// 2. bitmap	<= using this

#define WORD 32		// a word
#define SHIFT 5		// >> 5; << 5
#define MASK 0x1f	// 31

// 1. 置位用 '|' 操作; 清位用 '&~' 操作; 测位用 '&' 操作
// 2. m%n 运算，当 n=2^x(幂) 的时候, m%n = m&(n-1) 

struct bitmap {
	int len;
	unsigned int *map;
};

struct bitmap *
bm_create(int max) {
	struct bitmap *bm = (struct bitmap *)malloc(sizeof(*bm));
	if (!bm) { return NULL; }
	else {
		bm->len = max/32 + 1;	// todo
		bm->map = (unsigned int *)malloc(sizeof(unsigned int) * bm->len);
		if (!bm->map) { return NULL; }
		for(int i=0; i < bm->len; i++) bm->map[i] = 0;
	}
	return bm;
}

// Key:
// k>>SHIFT : 找到一个 int值, 该值为 k 对应的 bit位 所在的 int值
// 1 << (k & MASK) : 找到 k 所对应的 bit位 在 int值 的哪个位置

int
bm_set(struct bitmap *bm, int k) {
	int n = k/32;
	if (n > bm->len) return false;
	else {
		// '=' 左边: 找到 k 在 bitmap 中对应的 bit 的所在 uint 值
		// '=' 右边: 找到 k 所在该 int值 对应的 bit
		bm->map[k >> SHIFT] |= 1 << (k & MASK);
		return true;
	}
}

void
bm_clear(struct bitmap *bm, int k) {
	int n = k / 32;
	if (n > bm->len) return false;
	else {
		bm->map[k >> SHIFT] &= ~(1 << (k & MASK));
	}
}

int
bm_test(struct bitmap *bm, int k) {
	int n = k / 32;
	if (n > bm->len) return false;
	return bm->map[k >> SHIFT] & (1 << (k & MASK));
}

void
bm_delete(struct bitmap *bm) {
	free(bm->map);
	bm->len = 0;
	free(bm);
}

// =================

int
main(void) {
	unsigned int i;

	return 0;
}

