#pragma once

template <typename T>
class Pair {
	T first;
	T second;
public:
	Pair(T first, T second) : first(first), second(second) {};

	T getFirst();
	T getSecond();
	void setFirst();
	void setSecond();
	void swap();
};

template <typename T>
T Pair<T>::getFirst() {
	return first;
}

template <typename T>
T Pair<T>::getSecond() {
	return second;
}

template<typename T>
inline void Pair<T>::setFirst()
{
	this->first = first;
}

template<typename T>
inline void Pair<T>::setSecond()
{
	this->second = second;
}

template <typename T>
inline void Pair<T>::swap()
{
	T temp = first;
	first = second;
	second = temp;
}
