#include "Stack.h"
#include "StackOverflowException.h"
#include "StackUnderflowException.h"

namespace StackExercise
{
	template <typename T = int>
	Stack::Stack()
		: m_nextIndex(0)
	{}

	template <typename T = int>
	void Stack::Push(T val)
	{
		if (m_nextIndex < STACK_SIZE)
		{
			m_impl[m_nextIndex] = val;
			++m_nextIndex;
		}
		else
		{
			throw StackOverflowException();
		}
	}

	template <typename T = int>
T Stack::Pop()
	{
		if (m_nextIndex > 0)
		{
			--m_nextIndex;
			return m_impl[m_nextIndex];
		}
		else
		{
			throw StackUnderflowException();
		}
	}
}
