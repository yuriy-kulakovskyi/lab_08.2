#include <gtest/gtest.h>
#include "../include/main.h"
#include <string>

TEST(FindWordsTest, HandleFind) {
	char s[101] = "pip nin bim bim bam bob bom";

	int count = FindWords(s);

	EXPECT_EQ(count, 3);
}