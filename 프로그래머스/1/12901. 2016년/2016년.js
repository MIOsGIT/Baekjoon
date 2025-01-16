function solution(a, b) {
    var answer = '';
    let day = ['MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN'];
    let bb = Math.floor(b%7);
    
    if(a==1) answer = day[bb+3];
    if(a==2) answer = day[bb+6];
    if(a==3) answer = day[bb];
    if(a==4) answer = day[bb+3];
    if(a==5) answer = day[bb+5];
    if(a==6) answer = day[bb+1];
    if(a==7) answer = day[bb+3];
    if(a==8) answer = day[bb+6];
    if(a==9) answer = day[bb+2];
    if(a==10) answer = day[bb+4];
    if(a==11) answer = day[bb];
    if(a==12) answer = day[bb+2];
    
    return answer;
}