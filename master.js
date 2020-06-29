const program = [
	"0000000100000011",	//0x0
	"0000010110000100",	//0x1
	"0100000000011011",	//0x2
	"0000100011101101",	//0x3
	"0001000011101101",	//0x4
	"0000110011000001",	//0x5
	"0101010011000001",	//0x6
	"0001101111000101",	//0x7
	"0001111111000101",	//0x8
	"0100010000010101",	//0x9
	"0010000011001010",	//0xA
	"0010010011101111",	//0xB
	"0110100101000110",	//0xC
	"0110110000000101",	//0xD
	"0011000110100100",	//0xE
	"0011010010001101",	//0xF
	"0011100110001111",	//0x10
	"0111110110001111",	//0x11
	"0111000010101111",	//0x12

	"1000000000011001",	//0x13
	"1000000000011010",	//0x14
	"1000000000011011",	//0x15
	"1000000000011100",	//0x16
	"1000000000011101",	//0x17
	"1000000000011110",	//0x18
	"1000000000010100",	//0x19
	"1000000000010101",	//0x1A
	"1000000000010110",	//0x1B
	"1000000000010111",	//0x1C
	"1000000000011000",	//0x1D
	"0111000010101111",	//0x1E
	"1000000000010010"	//0x1F
];
const resultado = [
	"01011", //0x0
	"01000", //0x1
	"10011", //0x2
	"01101", //0x3
	"00111", //0x4
	"00010", //0x5
	"00011", //0x6
	"00100", //0x7
	"11101", //0x8
	"01000", //0x9
	"00010", //0xA
	"01000", //0xB
	"01110", //0xC
	"00000", //0xD
	"01001", //0xE
	"01110", //0xF
	"00000", //0x10
	"00011", //0x11
	"01100" //0x12
];
const instrc = [
	"suma",
	"resta",
	"transferencia A",
	"incremento A",
	"transferencia B",
	"incremento B",
	"decremento A",
	"decremento B",
	"AND",
	"NAND",
	"OR",
	"NOR",
	"XOR",
	"XNOR",
	"BUFFER A",
	"NOT A"
		];
const unit = ["aritmética","lógica"];
const regB = ["B","ACM"];
const dir = ["ALU","PC"];
function genTr(table,alu_pc,unit_sel,regmux,op_sel,A,B,i){

		tr =  document.createElement("tr");
		td =  document.createElement("td");
		td.innerHTML= "0x"+i.toString(16).toUpperCase()+"";
		tr.appendChild(td);
		td =  document.createElement("td");
		td.innerHTML= dir[alu_pc];
		tr.appendChild(td);
		if(alu_pc==0){
			td =  document.createElement("td");
			td.innerHTML= regB[regmux];
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= unit[unit_sel];
			tr.appendChild(td);
			td =  document.createElement("td");
			if(unit_sel==0) td.innerHTML= instrc[op_sel];
			else td.innerHTML= instrc[op_sel+8];
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= B;
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= A;
			tr.appendChild(td);
			td =  document.createElement("td");
			
			if(resultado[i]) td.innerHTML= resultado[i];
			else td.innerHTML = "-";
			tr.appendChild(td);	
		}else {
			td =  document.createElement("td");
			td.innerHTML= "-";
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= "-";
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= "-";
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= "-";
			tr.appendChild(td);
			td =  document.createElement("td");
			if(A<0){
				A*=-1;
				A+=16;
			}
			td.innerHTML= A.toString(16).toUpperCase();
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= "0x"+A.toString(16).toUpperCase();+"";
			tr.appendChild(td);
		}

		table.appendChild(tr);

}
function initTable(table) {
		
		table.id ="decoded";
		table.className="decode_table";
			tr =  document.createElement("tr");
			tr.className="tbl_head";
			td =  document.createElement("td");
			td.innerHTML= "registro";
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= "alu/pc";
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= "operando";
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= "unidad";
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= "operación";
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= "B";
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= "A";
			tr.appendChild(td);
			td =  document.createElement("td");
			td.innerHTML= "resultado";
			tr.appendChild(td);
			table.appendChild(tr);
}
function decode(){
	src =  document.getElementsByName("bits");
	if(src.length>0){

		if(!document.getElementById("decoded")){
			table = document.createElement("table");
			initTable(table);
			document.body.appendChild(table);
		}else{
			console.log("EXIST")
			
			document.body.removeChild(table);
			table=document.createElement("table");
			initTable(table);
			document.body.appendChild(table);
		}
		for(i=0;i<src.length;i++){
			if(src[i].value.length==16){
				alu_pc = parseInt(src[i].value[0],2);
				regmux = parseInt(src[i].value[1],2);
				unit_sel = parseInt(src[i].value[2],2);
				op_sel = parseInt(src[i].value.slice(3,6),2);
				S_B = parseInt(src[i].value[6],2);
				B = parseInt(src[i].value.slice(7,11),2);
				S_A = parseInt(src[i].value[11],2);			
				A = parseInt(src[i].value.slice(12,16),2);
				if(S_A==1) A*=-1;
				if(S_B==1) B*=-1;

				genTr(table,alu_pc,unit_sel,regmux,op_sel,A,B,i);
			}else {
				alert("Error en 0x"+i+":La instrucción debe tener longitud 16");
				document.body.removeChild(table);
				break;
			}

		}
	}
}
function add(){
	input =  document.createElement("input");
	input.type="text";
	input.maxLength = 16;
	input.size = 16;
	input.name="bits";
	label_text = document.getElementsByName("bits").length;

	label = document.createElement("label");
	label.innerHTML="0x"+label_text.toString(16).toUpperCase()+"";
	input_box = document.getElementById("input_box");
	input_box.appendChild(label);
	input_box.appendChild(input);
}

function del(){
	src = document.getElementsByName("bits");
	last = src.length-1;
	box = document.getElementById("input_box");
	label = document.getElementsByTagName("label");

	box.removeChild(src[last]);
	box.removeChild(label[label.length-1]);
}

function load(){
	src_length = document.getElementsByName("bits").length;
	
	if(src_length>0){
		count = program.length-1;
		for(i=0;i<count;i++){
			add();
			current =  document.getElementsByName("bits")[i];
			current.value = program[i];
		}
		current =  document.getElementsByName("bits")[i];
		current.value = program[i];
	}
	else{
		count = program.length;
		for(i=0;i<count;i++){
			add();
			current =  document.getElementsByName("bits")[i];
			current.value = program[i];
		}
	}
}
function download(){
	src =  document.getElementsByName("bits");
	export_box = document.createElement("div");
	export_box.id ="export_box";
	title = document.createElement("h3");
	textarea = document.createElement("textarea");
	textarea.innerHTML="constant rom: reg_grid := (\n";
	for(i=(src.length-1);i>=0;i--){
		textarea.innerHTML+="\""+src[i].value+"\",\n";
	}
	textarea.innerHTML+=");";
	close = document.createElement("button");
	close.addEventListener("click", 
		function(){document.body.removeChild(document.getElementById("export_box"))});
	close.innerHTML="close";
	title.innerHTML="VHDL";
	export_box.appendChild(title);
	export_box.appendChild(textarea);
	export_box.appendChild(close);
	document.body.appendChild(export_box);
}

function showInstr(){
	table = document.getElementById("instr_table");
	button = table.getElementsByTagName("button")[0];

	if(button.innerHTML=="Show"){
		display ="block"		;
		button.innerHTML = "Hide";
	}else {
		display ="none"		;
		button.innerHTML = "Show";	
	}
	table.getElementsByTagName("table")[0].style.display = display;


}