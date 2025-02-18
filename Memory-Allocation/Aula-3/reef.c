void reef_vector(int **v) {
  free(*v);
  *v = nullptr;
}
