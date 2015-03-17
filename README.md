## Nornenjs Android NDK Project

### Project Structure

```
src/ (source for the application)
lib/ (source for the application library *.cpp *.hpp)
include/ (interface for the library *.h)
tests/ (main.cpp for quick tests) -use cpp unit for this part
```

### Add Boost Library

`g++ main.cpp -o main -lboost_regex`

-lboost_regex | others ...

#### -Idir

```
여기서 dir은 디렉토리 이름이고 -I와 디렉토리 이름을 붙여 써야 한다.
그럼 include한 헤더 파일을 그 디렉토리에서도 찾아 주게 된다.
당연히 옵션을 여러 번 다른 디렉토리 이름으로 사용할 수도 있어서 헤더 파일을 찾을 디렉토리를 여러 개로 지정할 수 있다. 
```

#### -ldir

```
특 정 이름의 library를 포함하여 linking을 수행하라는 뜻이다. 
예를 들어 -lmyarchive라고 하면 libmyarchive.a(또는 libmyarchive.so)라는 library파일과 같이 linking을 수행하는 것이다. 
library 파일 이름은 기본적으로 lib로 시작하니깐 그것을 빼고 지정하도록 되어 있다.
library에 대해서 또 하나의 옵션을 알아야 할 필요가 있다. 
다름 아닌 “어느 디렉토리에서 library를 찾는가”이다. 
모든 library가 /lib와 /usr/lib에 있으라는 보장이 없다. 
그 디렉토리를 정하는 방법은 두 가지 인데 LD_LIBRARY_PATH라고 하는 이름의 환경 변수를 셋팅하는 방법이 있고 또 한 가지는 gcc의 옵션으로 넘겨 주는 방법이 있다. 
```

#### -Ldir

```
library 파일을 찾는 디렉토리에 “dir”이란 디렉토리를 추가하라는 옵션이다.
예를 들어 -L/usr/local/mylib 라고 하면 /usr/local/mylib라는 디렉토리에서 library 파일을 찾을 수 있게 된다.
```

### Include rapidjson library

`g++ -I../lib/rapidjson/include main.cpp -o main.exe -lboost_regex`


### Include Websocketpp library

`g++ -I../lib/rapidjson/include -I../lib/websocketpp/src main.cpp -o main.exe -lboost_regex -lboost_system`

add : `-lboost_system`

### Include Boost library 1.48 

`g++ -I../lib/rapidjson/include -I../lib/websocketpp/src -I/home/pi/Downloads/boost_1_48_0 socket_io_client.hpp -o socket.o`

Not user local install library