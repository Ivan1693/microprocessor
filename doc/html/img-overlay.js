window.onload = function() {
  init();
};
function init() {
	var zoom = document.createElement("div");
	zoom.className ="zoom";
	zoom.id="zoom_trigger";
	zoom.setAttribute("style","display:none;")
	document.body.appendChild(zoom);
	
	var imgs = document.getElementsByClassName("img-over");
	for(i=0;i<imgs.length;i++){

		if(imgs[i].parentElement.nodeName!="TD"){
			imgs[i].addEventListener("click",function(){ make_overlay(this); });
			imgs[i].addEventListener("mouseover",function(){ zoom_t(this); });
			imgs[i].addEventListener("mouseout", function(){destroy_zoom(zoom)});

		}



	}
}

function zoom_t(image){
	zoom = document.getElementById("zoom_trigger");
	rect = getOffset(image);
	zoom.setAttribute("style","top:"+(rect.top+(image.height/2))+"px;left:"+(rect.left+(image.width/2))+"px;display:block;");
	zoom.addEventListener("click",function(){ make_overlay(image);});
}
function destroy_zoom(zoom){
	zoom.setAttribute("style","display:none");

}
function getOffset(el) {
  const rect = el.getBoundingClientRect();
  return {
    left: rect.left + window.scrollX,
    top: rect.top + window.scrollY
  };
}

function make_overlay(image) {
	image.id = image.alt;

	over = document.createElement("div");
	over.className = "overlay";
	
	box = document.createElement("div");
	
	abox = document.createElement("span");
	a=document.createElement("a");
	img = document.createElement("img");
	img.src=image.src;

	a.href="#"+image.id+"";
	a.innerHTML="x";
	a.addEventListener("click",function(){ destroy(this.parentNode.parentNode); })
	
	abox.appendChild(a);
	box.appendChild(img);
	over.appendChild(box);
	over.appendChild(abox);
	document.body.appendChild(over);

}

function destroy(overlay){
	document.body.removeChild(overlay);
}
