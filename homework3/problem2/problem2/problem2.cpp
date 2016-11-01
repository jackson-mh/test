#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

template <typename int>
inline int max( const vector<int> &vec )
{
	return *max_element( vec.begin(),vec.end() );
}

template <typename float>
inline float max( const vector<float> &vec )
{
	return *max_element( vec.begin(),vec.end() );
}

template <typename string>
inline string max( const vector<string> &vec )
{
	return *max_element( vec.begin(),vec.end() );
}

template <typename int>
inline int max( const int *parray, int size )
{
	return *max_element( parray,parray+size);
}

template <typename float>
inline float max( const float *parray, int size )
{
	return *max_element( parray,parray+size);
}

template <typename string>
inline string max( const string *parray, int size)
{
	return *max_element( parray,parray+size);
}
