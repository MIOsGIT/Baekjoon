function solution(numbers) {
    var answer = 0;
    for (let k in numbers){
        answer += numbers[k];
    }
    return answer/numbers.length;
}