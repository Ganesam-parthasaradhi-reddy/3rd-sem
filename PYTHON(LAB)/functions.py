 import numpy as np
 arr1 = np.array([1, 2, 3, 4])
 arr2 = np.array([2, 2, 3, 5])
 print("G reater: ", np.greater(arr1, arr2))
 print("Greater_equal: ", np.greater_equal(arr1, arr2))
 print("Less: ", np.less(arr1, arr2))
 print("Less_equal: ", np.less_equal(arr1, arr2))
 print("Equal: ", np.equal(arr1, arr2))
 print("Allclose (with tolerance): ", np.allclose(arr1, arr2))