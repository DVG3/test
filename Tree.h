#pragma once
namespace Tree
{
	template<typename T>
	class SegmentTree
	{
		bool (*Check)(T, T);
		T* dat; T* value; T compareValue;
		int size = 0;
#define GETRES(a,b) Check(a,b)?a:b
		void Init(T dat[], T vec[], int index, int l, int r)
		{
			int mid = (l + r) / 2;
			if (l == r)
			{
				dat[index] = vec[l];
				return;
			}
			Init(dat, vec, index * 2, l, mid);
			Init(dat, vec, index * 2 + 1, mid + 1, r);
			dat[index] = GETRES(dat[index * 2], dat[index * 2 + 1]);
		}
		T _GetRange(T dat[], int index, int l, int r, int q, int t)
		{
			if (q > r || t < l)
			{
				return compareValue;
			}
			if (q <= l && t >= r)
			{
				return dat[index];
			}
			int mid = (l + r) / 2;
			return GETRES(_GetRange(dat, index * 2, l, mid, q, t), _GetRange(dat, index * 2 + 1, mid + 1, r, q, t));
		}
	public:
		int Size()
		{
			return size;
		}
		SegmentTree(std::initializer_list<T> inp, bool (*Func)(T, T))
		{

			size = inp.size();
			dat = new T[inp.size() * 4]; value = new T[inp.size()];
			Check = Func;
			int i = 0;
			for (auto x : inp)value[i++] = x;
			Init(dat, value, 1, 0, inp.size() - 1);
		}
		SegmentTree(std::vector<T> inp, bool (*Func)(T, T))
		{
			size = inp.size();
			dat = new T[inp.size() * 4]; value = new T[inp.size()];
			Check = Func;
			int i = 0;
			for (auto x : inp)value[i++] = x;
			Init(dat, value, 1, 0, inp.size() - 1);
		}
		T GetRange(int l, int r)
		{
			compareValue = value[l];
			return _GetRange(dat, 1, 0, size - 1, l, r);
		}
	};
}