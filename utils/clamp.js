/**
 * @param {Number} n
 * @param {Number} a Lower bound
 * @param {Number} b Upper bound
 */
export function clamp(n, a, b) {
	return min(max(n, a), b);
}

/**
 * @param {Number} a Start (t = 0)
 * @param {Number} b End (t = 1)
 * @param {Number} t Interpolator
 */
export function lerp(a, b, t) {
	return a + (b - a) * t;
}

/**
 * @param {Number} a
 * @param {Number} b
 */
export function max(a, b) {
	return a > b ? a : b;
}

/**
 * @param {Number} a
 * @param {Number} b
 */
export function min(a, b) {
	return a < b ? a : b;
}