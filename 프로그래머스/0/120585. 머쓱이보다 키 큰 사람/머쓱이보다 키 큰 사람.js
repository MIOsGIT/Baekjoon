function solution(array, height) {
    var answer = 0;
    for (let k in array){
        if(array[k]>height) answer++;
    }
    return answer;
}