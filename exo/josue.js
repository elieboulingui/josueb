window.onload=function(){
   let heure =0;
   let minute=0;
   let  segond=0;
   let tier =0;
 let nowheure = document.querySelector("#heure");
 let nowminute = document.querySelector("#minute");
 let nowsegond = document.querySelector("#segond");
 let nowtier = document.querySelector("#tier");
 const btn = document.querySelector("#start")
 const btn2 = document.querySelector("#Ppause")
 console.log(nowheure,nowminute,nowsegond,btn,nowtier);
 let interval;
 const start = ()=>{
tier++;
if(tier<=9){
    nowtier.innerHTML = "0"+tier
}if(tier>9){
    nowtier.innerHTML = tier
}if(tier>99){
    segond++;
    nowsegond.innerHTML = "0"+segond;
    tier= 0;
}
   if(segond<=9){
    nowsegond.innerHTML= "0"+ segond;

   }
   if(segond>9){
    nowsegond.innerHTML = segond
   }
   if(segond>60){
    minute++;
    nowminute.innerHTML = "0"+ minute;
    segond =0;
    
   }
   if(minute<=9){
    nowminute.innerHTML = "0"+minute;
   }
   if(minute>9){
 nowminute.innerHTML = minute;
   }
   if(minute>59){
    heure++
    nowheure.innerHTML= "0"+heure;
    nowminute.innerHTML = minute;
    minute = 0;

    if(heure<=9){
        nowheure.innerHTML = "0"+heure;
    }else{
        nowheure.innerHTML = heure;
    }
   }
 }
 btn.onclick =()=>{
    clearInterval (interval)
    interval = setInterval(start,10)
 }
  
}