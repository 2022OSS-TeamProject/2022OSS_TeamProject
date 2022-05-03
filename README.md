<img src="https://user-images.githubusercontent.com/100776540/166138140-6fe3e7d2-0edd-4c90-b576-eeee4247f20c.jpg" width="300" height="100"> ***현대 사회를 위한 다방형 출입 관리 시스템, `In&Out`입니다.***

2022OSS_TeamProject(출퇴근 관리 시스템) 
=============


<p align="center"><img src="https://user-images.githubusercontent.com/100776540/165881371-f8677639-04e4-4144-b7fe-ec31fd1f9719.jpg" width="300" height="250">

## miniproject 주제
  
- 출퇴근 관리 시스템

## miniproject에 대한 소개

- 현대사회에 학교, 학원, 일터, 매장, 공원 등 주기적으로 사람들이 모이는 다양한 공간들은 다양해지고 발전하고 있습니다. 이 중에는 안정상, 보안상, 재원상 등의 특별한 이유로 출입 인원들을 관리하고 알아둘 필요가 있는 곳도 있죠. 이에 저희 mini project는 직장에서 출근 퇴근과 같이 주기적으로 특정 사람들이 오고 나가는 일들을 관리하는 기능을 담았습니다. 저희 miniproject는 체계적으로 출퇴근을 관리하는 시스템을 구축해 정보들을 저장하고 불로오는 것도 가능합니다. 또한, 원한다면 특정 인물이나 특정 직책 또는 특정 출석 범위에 해당하는 사람들만 따로 확인할 수도 있죠.
- 출퇴근 관리 시스템을 통해 직원들의 이름, 직책, 출퇴근 시간 등을 볼 수 있고 검색 기능을 통해 특정 인물, 직책의 출퇴근 시간만 검색할 수 있습니다.

![buildings-1842205_1280](https://user-images.githubusercontent.com/100521987/166142603-20fdc8ac-0f3f-491d-abb9-92450b8ea9ce.jpg)

## mini project 가 가지고 있는 대략적인 기능 설명


- 기본적으로 저희 miniproject는 4가지의 기본 기능 함수와 8가지의 사용자가 선택할 수 있는 기능 함수들이 있습니다. 4가지의 기본 기능 함수는 어떤 기능들이 있고 어떻게 사용하는지를 표출하는 기능, 최신화된 직원들 리스트를 출력전 검열하는 기능, 수정이나 삭제 시 해당 정보의 값을 특정하는 기능, 그리고 저장되어있는 데이터 값을 불러오는 기능입니다. 8가지의 사용자 선택 기능은 직원을 추가하는 기능, 직원을 삭제하는 기능, 직원들의 내용을 출력하는 기능, 직원 내용 수정하는 기능, 입력된 직원 데이터를 저장하는 기능, 특정 이름을 입력하여 해당 이름의 직원을 찾는 기능, 특정 직급을 입력하여 해당 직급의 직원들을 출력하는 기능, 그리고 정상 또는 지각한 직원들을 나눠 출력하는 기능입니다. 
____
<img width="234" alt="selectWorker()" src="https://user-images.githubusercontent.com/100776540/166403384-c9fca79e-1af4-4b0e-a175-3b726cc4dcd0.png">

### 페이지 상세 설명

   1. 프로그램 실행 후 사용자에게 어떤 기능을 사용할 건지 알려줍니다.
   2. 번호에 따라 다양한 기능을 고를 수 있으며 다른 번호나 문자를 누르면 무시합니다.
   3. 0번을 누르면 프로그램이 종료됩니다.

<img width="246" alt="CreateWorker()" src="https://user-images.githubusercontent.com/100776540/166403244-6618008a-407a-444b-a344-773c47558d13.png">

### 페이지 상세 설명

   1. 출퇴근 관리 시스템에 직원을 추가합니다.
   2. 이름, 직책, 출입 시, 출입 분, 퇴근 시, 퇴근 분을 입력받습니다.
   3. 출퇴근 시간으로 총 근무 시간을 알아서 계산합니다.

<img width="724" alt="ReadWorker()" src="https://user-images.githubusercontent.com/100776540/166403257-e4d73123-c0f8-4898-b8b8-de398c802661.png">

### 페이지 상세 설명

   1. 현재 추가된 직원들의 목록을 보여줍니다.
   2. 만약 추가된 직원이 없다면 아무것도 표출되지 않습니다.

<img width="726" alt="UpdateWorker()" src="https://user-images.githubusercontent.com/100776540/166403259-f19c4cd7-a27d-4aea-a115-f97a7713007d.png">

### 페이지 상세 설명

   1. 현재 추가된 직원 중 특정 직원의 정보를 변경합니다.
   2. 직원의 번호를 선택하게 하여 해당 직원을 특정합니다.
   3. 변경하고자 하는 직원의 새 이름, 직책, 출입 시, 출입 분, 퇴근 시, 퇴근 분을 입력받습니다.

<img width="728" alt="DeleteWorker()" src="https://user-images.githubusercontent.com/100776540/166403251-5599df05-c00f-4aff-8db4-afd32e632841.png">

### 페이지 상세 설명

   1. 현재 추가되어 있는 특정 직원의 내용을 삭제합니다.
   2. 직원의 번호를 선택하게 하여 해당 직원을 특정합니다.
   3. 삭제된 직원은 직원 조회에서 나타나지 않게 됩니다.

## 개발환경 및 언어

* 개발환경

  - Code sharing: Github
  - Messaging: Kakaotalk
* 언어
  - C language : Linux, VS Code
  - Markdown : Linux, Github
  
## 팀소개 및 팀원이 맡은 역할

- 조영관 Youngkwan


  * 역할 : CRUD 및 selectChoice 함수 기능 구현, 깃헙 관리
  * 깃헙 id: Youngkwan-Cho
- 최준혁 JunHyeok
  * 역할 : dataSave, dataLoad, searchName, searchAttend, searchPosition 기능 구현
  * 깃헙 id: 21900764

  
<img src="https://user-images.githubusercontent.com/100776540/165881366-fef96b67-57c7-4799-81b8-5aa60e7fca18.jpg" width="300" height="300" align="right">
