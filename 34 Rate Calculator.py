print("s텔레콤 34요금제 계산기")
basic_rate = 37400  # 기본 요금 37400원
basic_voice = 7200  # 기본 음성 시간 120분
basic_message = 200  # 기본 문자 200건
basic_data = 800  # 기본 데이터 800mb
sound_temp = 0  # sound_temp = 기본 음성 시간 - 사용한 음성시간 or 음성 초과 요금 계산
message_temp = 0  # message_temp = 기본 문자 건수 - 사용한 문자 건수 or 문자 초과 요금 계산
data_temp = 0  # data_temp = 기본 데이터 - 사용한 데이터 or 데이터 초과 요금 계산
sum = 0  # 월 이용요금 계산 값 보관하는 변수

print("음성 통화 시간(초)를 입력해주세요.")
sound = int(input())  # 사용한 음성 통화시간 입력

print("문자 건 수를 입력해주세요.")
message = int(input())  # 사용한 문자 건 수 입력

print("데이터 사용량(MB)를 입력해주세요.")
data = int(input())  # 사용한 데이터 사용량 입력

if sound >= basic_voice:  # 기본 음성 시간과 사용한 음성 시간 비교
    sound_temp = sound - basic_voice  # 음성 임시 변수 = 기본 음성 시간 - 사용한 음성

if sound_temp >= 1:  # 음성 임시 변수와 1의 크기 비교
    sound_temp = sound_temp * 1.98  # 음성 임시 변수가 클 경우 임시 변수 * 음성 초과 요금
    sum = sum + sound_temp  # 위에서 연산한 값을 sum 이라는 변수에 값 저장

if message >= basic_message:  # 기본 메세지 사용량과 사용한 메세지량 비교
    message_temp = message - basic_message  # 메세지 임시 변수 = 기본 메세지 사용량 - 사용한 메세지 양

if message_temp >= 1:  # 메세지 임시 변수와 1의 크기 비교
    message_temp = message_temp * 22  # 메세지 임시 변수가 클 경우 임시 변수 * 메세지 초과 요금
    sum = sum + message_temp  # 위에서 연산한 값을 sum 이라는 변수에 값 저장

if data >= basic_data:  # 기본 데이터 양과 사용한 데이터 양 비교
    data_temp = data - basic_data  # 데이터 임시 변수 = 기본 데이터 양 - 사용한 데이터 양

if data_temp >= 1:  # 데이터 임시 변수와 1의 크기 비교
    data_temp = data_temp * 55  # 데이터 임시 변수가 클 경우 임시 변수 * 데이터 초과 요금
    sum = sum + data_temp # 위에서 연산한 값을 sum 이라는 변수에 값 저장

sum = sum + basic_rate  # 여기서는 if 에서 계산한 sum 이랑 기본 값을 더한다.

print("납부 해야 할 요금은 %d원 입니다." % sum)  # 출력
