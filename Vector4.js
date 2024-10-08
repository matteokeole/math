import {Vector} from "./index.js";

export class Vector4 extends Vector {
	/**
	 * @param {IArguments} args
	 */
	static #construct(args) {
		if (args[0] instanceof Vector4) {
			return args[0];
		}

		const array = new Float32Array(4);

		array.set(args);

		return array;
	}

	/**
	 * @overload
	 * @param {...Number} elements
	 * 
	 * @overload
	 * @param {Vector4} vector
	 */
	constructor() {
		super(Vector4.#construct(arguments));
	}

	/**
	 * @param {Vector4} vector
	 */
	add(vector) {
		this[0] += vector[0];
		this[1] += vector[1];
		this[2] += vector[2];
		this[3] += vector[3];

		return this;
	}

	addScalar(scalar) {
		this[0] += scalar;
		this[1] += scalar;
		this[2] += scalar;
		this[3] += scalar;

		return this;
	}

	/**
	 * @param {Vector4} vector
	 */
	divide(vector) {
		if (vector[0] === 0 || vector[1] === 0 || vector[2] === 0 || vector[3] === 0) {
			throw new RangeError("Division by zero");
		}

		this[0] /= vector[0];
		this[1] /= vector[1];
		this[2] /= vector[2];
		this[3] /= vector[3];

		return this;
	}

	/**
	 * @param {Vector4} vector
	 */
	dot(vector) {
		return this[0] * vector[0] + this[1] * vector[1] + this[2] * vector[2] + this[3] * vector[3];
	}

	/**
	 * @param {Vector4} vector
	 */
	lerp(vector, multiplier) {
		this[0] += multiplier * (vector[0] - this[0]);
		this[1] += multiplier * (vector[1] - this[1]);
		this[2] += multiplier * (vector[2] - this[2]);
		this[3] += multiplier * (vector[3] - this[3]);

		return this;
	}

	/**
	 * @param {Vector4} vector
	 */
	multiply(vector) {
		this[0] *= vector[0];
		this[1] *= vector[1];
		this[2] *= vector[2];
		this[3] *= vector[3];

		return this;
	}

	multiplyScalar(scalar) {
		this[0] *= scalar;
		this[1] *= scalar;
		this[2] *= scalar;
		this[3] *= scalar;

		return this;
	}

	/**
	 * @param {Vector4} vector
	 */
	subtract(vector) {
		this[0] -= vector[0];
		this[1] -= vector[1];
		this[2] -= vector[2];
		this[3] -= vector[3];

		return this;
	}

	toString() {
		return `${this[0].toFixed(2)} ${this[1].toFixed(2)} ${this[2].toFixed(2)} ${this[3].toFixed(2)}`;
	}
}