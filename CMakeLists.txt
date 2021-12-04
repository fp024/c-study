cmake_minimum_required(VERSION 3.16)
project(c-study C)

if (${MSVC})
    # Visual Studio cl.exe를 사용할 때, 터미널 환경은 CP949 인데, 소스파일을 UTF-8로 저장해서 관리할 경우, 컴파일러 아래 옵션을 전달한다.
    add_compile_options(/source-charset:utf-8 /execution-charset:euc-kr)
elseif (${MINGW})
    # MinGW 환경에서는 아래 옵현을 전달한다.
    add_compile_options(-fexec-charset=CP949 -g -W -Wall)
elseif (${CYGWIN})
    # Cygwin 환경에서는 따로 인코딩 옵션을 붙여줄 필요가 없었다.
endif ()

# 연속된 변수 선언시 그 변수의 주소가 어떤식으로 지정되는지?
add_subdirectory(AddressDistance)

# CLion 표준입력함수 직전 공백 출력 있을시 공백이 표준입력 함수 실행 이후로 넘어가는 문제
add_subdirectory(CLionScanf)

