package main
 
import "fmt"
 
func main(){
    
    fmt.Print("Input number- ")
    var number int
    fmt.Scanln(&number)
    

    if(number%2!=0){
        fmt.Println(number,"is odd number")
    }else{
        fmt.Println(number,"is even number")
    }
}