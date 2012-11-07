classdef MultiplicationNode < FactorNode
    %MULTIPLICATIONNODE multiplication-by-matrix-node
    %   Detailed explanation goes here
    
    properties
    end
    
    methods
        function this = MultiplicationNode()
            this = this@FactorNode('MultiplicationNode');            
        end

        function setMatrix(this, matrix)
            mexfactorgraph('setMatrix', this.type_name, this.cpp_handle, matrix);
        end
    end
    
end

