void div_mod(int a, int b, int* div, int* mod) {
	*div = a / b;
	*mod = a % b;
}
//포인터를 사용안하면 값이 변경이 안됨 단순 지역변수가 되어버림