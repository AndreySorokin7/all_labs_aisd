#include "queue.h"
#include "queue.cpp"
#include <gtest.h>

TEST(TQueue, can_create_queue_with_positive_size) {
	ASSERT_NO_THROW(TQueue<int> A(7));
}

TEST(TQueue, cannot_create_queue_with_negative_size) {
	ASSERT_ANY_THROW(TQueue<int> A(-7));
}

TEST(TQueue, can_create_copied_queue) {
	TQueue<int> A(4);
	ASSERT_NO_THROW(TQueue<int> B(A));
}

TEST(TQueue, check_full_queue_true)
{
	TQueue<int> Qu(1);
	Qu.Push(1);
	EXPECT_EQ(1, Qu.IsFull());
}

TEST(TQueue, check_full_queue_false)
{
	TQueue<int> Qu(1);
	EXPECT_EQ(0, Qu.IsFull());
}

TEST(TQueue, check_empty_queue_true) {
	TQueue<int> Qu(7);
	EXPECT_EQ(1, Qu.IsEmpty());
}

TEST(TQueue, check_empty_queue_false) {
	TQueue<int> Qu(7);
	Qu.Push(1);
	EXPECT_EQ(0, Qu.IsEmpty());
}


TEST(TQueue, cannot_put_element_in_full_queue) {
	TQueue<int> A(4);
	for (int i = 0; i < 4; i++)
		A.Push(7);

	ASSERT_ANY_THROW(A.Push(7));
}

TEST(TQueue, cannot_get_element_in_empty_queue) {
	TQueue<int> A(4);

	ASSERT_ANY_THROW(A.Get());
}

TEST(TQueue, can_put_element) {
	TQueue<int> A(4);

	ASSERT_NO_THROW(A.Push(7));
}

TEST(TQueue, can_get_element) {
	TQueue<int> A(4);
	A.Push(7);

	EXPECT_EQ(7, A.Get());
}

TEST(TQueue, check_get_end_put_in_queue)
{
	TQueue <int> Qu(5);
	for (int i = 1; i < 6; i++)
		Qu.Push(i); 

	Qu.Get(); 
	Qu.Get(); 
	Qu.Get(); 

	Qu.Push(10); 
	Qu.Push(5); 
	Qu.Get(); 
	ASSERT_EQ(5, Qu.Get());
}


TEST(TQueue, correct_ostream)
{
	TQueue<int> Qu(3);
	Qu.Push(1), Qu.Push(2), Qu.Push(3);
	ASSERT_EQ(Qu.Get(), 1);
	ASSERT_EQ(Qu.Get(), 2);
	ASSERT_EQ(Qu.Get(), 3);
}