# private_errors

print_error.c 의 아래 부분에 원하는 오류 메세지를 추가하고, e_private_errors.h 에 오류번호 매크로를 지정. 이후 print_error(오류번호) 호출로 사용 가능하다.

## 사용된 함수

write  (unistd.h)

free  (stdlib.h) // print_error_malloced 사용 시
