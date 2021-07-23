#pragma once
#include "sfs.hpp"
namespace sfs {
	int GetLength(float arr[]) {
		size_t len = 0;
		while (*arr) {
			if (+arr == NULL) break;
			++arr;
			++len;
		}
		return len;
	}
	class munit {
	public:
		float value;
		munit(float& _value) {
			value = _value;
		}
		munit(int _value) {
			value = _value;
		}
		munit  operator^(int _amount);
		void operator=(float _value) {
			value = _value;
		}void operator=(int _value) {
			value = _value;
		}
	};
	munit munit::operator^(int _amount) {
		munit M = 0;
		for (int i = 0; i < _amount; ++i) {
			M = M.value * value;
		}
		return M;
	}

	/// <summary>
	/// Algorithmic unit used to run certain algorithms, has a limit of 128 elements or 512 bytes.
	/// </summary>
	class alunit {
	private:
		const float upperlimit = 999999999999;
		float value[128];
		int pos = 0;
		void PushForAlgorithm() {
			for (int i = pos; i < 128; i++) {
				value[i] = upperlimit;
			}
		}
	public:
		void Push(int);
		void Remove(int index);
		void PushAtIndex(int index, int addi);
		/// <summary>
		/// Runs a bubble sort, with index being the how accurate it will be, it will be slower but more accurate , 1 being the lowest will not be accurate at all, 0 will return the exact same number.
		/// </summary>
		/// <param name="index"></param>
		void BubbleSort(int index);
	};
	void alunit::Push(int i) {
		value[pos] = i;
		pos += 1;
	}
	void alunit::Remove(int index) {
		value[index] = 0;
	}
	void alunit::PushAtIndex(int index, int addi) {
		value[index] = addi;
	}
	void alunit::BubbleSort(int index) {
		PushForAlgorithm();
		for (int i = 0; i < index; ++i) {
			for (int ii = 0; ii < pos; ++ii) {
				float current = value[ii];
				if (current > value[ii + 1])
				{
					value[ii] = value[ii + 1];
					value[ii + 1] = current;
				}
			}
		}
		for (int ii = 0; ii < pos; ++ii) {
			std::cout << value[ii];
		}
	}
}