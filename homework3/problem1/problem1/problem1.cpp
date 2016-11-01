#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

inline int max( const vector<int> &vec )
{
	return *max_element( vec.begin(),vec.end() );
}

inline float max( const vector<float> &vec)
{
	return *max_element( vec.begin(),vec.end() );
}

inline string max( const vector<string> &vec)
{
	return *max_element( vec.begin(),vec.end() );
}

inline int max( const int *parray, int size)
{
	return *max_element( parray,parray+size );
}

inline float max( const float *parray, int size)
{
	return *max_element( parray,parray+size );
}

inline string max( const string *parray, int size)
{
	return *max_element( parray,parray+size );
}