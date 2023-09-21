public static int diagonalDifference(int[][] arr) {
    int len = arr.length; // Get the size of the matrix from the array parameter
    int sum1 = 0, sum2 = 0;

    // Calculate the sum of diagonal elements
    for (int i = 0; i < len; i++) {
        sum1 += arr[i][i];
        sum2 += arr[i][len - i - 1];
    }

    int dif = Math.abs(sum1 - sum2);
    return dif;
}
