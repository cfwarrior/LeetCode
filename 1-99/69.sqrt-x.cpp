/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 *
 * https://leetcode.com/problems/sqrtx/description/
 *
 * algorithms
 * Easy (32.14%)
 * Likes:    917
 * Dislikes: 1549
 * Total Accepted:    429.2K
 * Total Submissions: 1.3M
 * Testcase Example:  '4'
 *
 * Implement int sqrt(int x).
 * 
 * Compute and return the square root of x, where x is guaranteed to be a
 * non-negative integer.
 * 
 * Since the return type is an integer, the decimal digits are truncated and
 * only the integer part of the result is returned.
 * 
 * Example 1:
 * 
 * 
 * Input: 4
 * Output: 2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 8
 * Output: 2
 * Explanation: The square root of 8 is 2.82842..., and since 
 * the decimal part is truncated, 2 is returned.
 * 
 * 
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        int lo = 0, hi = x;
        while (lo < hi)
        {
            int m = lo + ((long)hi - lo + 1) / 2;
            if (m == x / m)
                return m;
            else if (m > x / m)
            {
                hi = m - 1;
            }
            else
                lo = m;
        }
        return lo;
    }
};
// @lc code=end
