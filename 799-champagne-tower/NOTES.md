public double champagneTower(int poured, int query_row, int query_glass) {
double[] cups = new double[query_row + 1];
cups[0] = poured;
for (int i = 0; i < query_row; i++) {
for (int j = i; j >= 0; j--) {
double overflow = Math.max (0, cups[j] - 1);
if (j + 1 <= query_row)
cups[j + 1] += overflow / 2;
cups[j] = overflow / 2;
}
}
return cups[query_glass] >= 1 ? 1 : cups[query_glass];
}