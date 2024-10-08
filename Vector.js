import {Matrix} from "./index.js";

/**
 * @abstract
 */
export class Vector extends Float32Array {
	/**
	 * @abstract
	 * @param {Vector} vector
	 * @returns {this}
	 */
	add(vector) {
		throw new Error("Not implemented");
	}

	/**
	 * @abstract
	 * @param {Number} scalar
	 * @returns {this}
	 */
	addScalar(scalar) {
		throw new Error("Not implemented");
	}

	/**
	 * @abstract
	 * @param {Vector} vector
	 * @returns {this}
	 * @throws {RangeError}
	 */
	divide(vector) {
		throw new Error("Not implemented");
	}

	/**
	 * @param {Number} scalar
	 * @returns {this}
	 * @throws {RangeError}
	 */
	divideScalar(scalar) {
		if (scalar === 0) {
			throw RangeError("Division by zero");
		}

		return this.multiplyScalar(1 / scalar);
	}

	/**
	 * @abstract
	 * @param {Vector} vector
	 * @returns {Number}
	 */
	dot(vector) {
		throw new Error("Not implemented");
	}

	/**
	 * @abstract
	 * @param {Vector} vector
	 * @param {Number} multiplier
	 * @returns {this}
	 */
	lerp(vector, multiplier) {
		throw new Error("Not implemented");
	}

	/**
	 * @returns {Number}
	 */
	magnitude() {
		return Math.sqrt(this.dot(this));
	}

	/**
	 * @abstract
	 * @param {Vector} vector
	 * @returns {this}
	 */
	multiply(vector) {
		throw new Error("Not implemented");
	}

	/**
	 * @abstract
	 * @param {Matrix} matrix
	 * @returns {this}
	 */
	multiplyMatrix(matrix) {
		throw new Error("Not implemented");
	}

	/**
	 * @abstract
	 * @param {Number} scalar
	 * @returns {this}
	 */
	multiplyScalar(scalar) {
		throw new Error("Not implemented");
	}

	/**
	 * @returns {this}
	 */
	negate() {
		return this.multiplyScalar(-1);
	}

	/**
	 * @returns {this}
	 */
	normalize() {
		if (this.magnitude() === 0) {
			return this;
		}

		return this.divideScalar(this.magnitude());
	}

	/**
	 * @abstract
	 * @param {Vector} vector
	 * @returns {this}
	 */
	subtract(vector) {
		throw new Error("Not implemented");
	}

	/**
	 * @param {Number} scalar
	 * @returns {this}
	 */
	subtractScalar(scalar) {
		return this.addScalar(-scalar);
	}

	/**
	 * @returns {String}
	 */
	toString() {
		throw new Error("Not implemented");
	}
}