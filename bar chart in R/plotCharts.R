df<-read.table("C:/Users/Mihaela/Desktop/slike/forBars.txt",header=FALSE, sep="\t")
matrix<-data.matrix(df)
colnames(matrix)<-NULL

for(i in 1:4) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 10, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 10, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 10, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 10, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}

for(i in 5:8) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 20, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 20, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 20, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 20, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}

for(i in 9:12) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 30, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 30, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 30, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 30, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}

for(i in 13:16) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 40, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 40, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 40, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 40, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}

for(i in 17:20) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 50, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,80))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 50, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 50, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 50, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}

for(i in 21:24) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 60, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 60, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 60, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 60, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}

for(i in 25:28) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 70, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 70, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 70, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 70, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}

for(i in 29:32) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 80, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 80, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 80, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 80, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}

for(i in 33:36) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 90, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 90, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 90, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 90, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}

for(i in 37:40) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 100, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 100, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 100, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 100, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}

for(i in 41:44) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 250, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 250, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 250, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,80))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 250, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}

for(i in 45:48) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 500, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,100))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 500, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 500, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 500, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}

for(i in 49:52) {
	if(i%%4==1){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 1000, k = 5",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,100))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==2){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 1000, k = 10",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,100))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==3){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 1000, k = 20",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,max(matrix[i,])+10))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}

	if(i%%4==0){
		filename=paste(i,"png",sep=".")
		png(filename)
		par(xpd=TRUE) 
		z<-barplot(matrix[i,],main="n = 1000, k = 50",col=c("red","lightblue","blue"),ylab="%", cex.axis=0.8, ylim=c(0,80))
		w<-matrix[i,]
		text(z,w+2,labels=as.character(w))
		dev.off()
	}
}
