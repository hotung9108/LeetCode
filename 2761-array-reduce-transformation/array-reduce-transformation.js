/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let sum = init;
    for(let i = 0; i < nums.length; i++){
        // sum += nums[i];
        sum = fn(sum, nums[i]);
    }
    return sum;
};