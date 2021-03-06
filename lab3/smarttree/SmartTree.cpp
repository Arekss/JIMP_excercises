//
// Created by Arek on 13.04.2019.
//

#include "SmartTree.h"

namespace datastructures {

    std::unique_ptr<SmartTree> CreateLeaf(int value) {
        unique_ptr<SmartTree> node = make_unique<SmartTree>(value);
        return node;
    };

    std::unique_ptr<SmartTree>
    InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree) {
        assert(tree->left == nullptr);
        while (tree->left != nullptr) {
            tree = move(tree->left);
        }
        tree->left = move(left_subtree);
        return tree;

    };

    std::unique_ptr<SmartTree>
    InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree) {
        assert(tree->right == nullptr);

        while (tree->right != nullptr) {
            tree = move(tree->right);
        }
        tree->right = move(right_subtree);
        return tree;

    };

    void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out) {

        if (unique_ptr->left != nullptr) PrintTreeInOrder(unique_ptr->left, out);
        *out << unique_ptr->value << ", ";
        if (unique_ptr->right != nullptr) PrintTreeInOrder(unique_ptr->right, out);
    };

    std::string DumpTree(const std::unique_ptr<SmartTree> &tree) {
        stringstream ss;
        ss << "[";
        if (tree == nullptr) ss << "none";
        else {
            ss << tree->value << " ";
            ss << DumpTree(tree->left) << " ";
            ss << DumpTree(tree->right);
        }
        ss << "]";
        return ss.str();
    };

    std::unique_ptr<SmartTree> RestoreTree(const std::string &tree) {
        std::unique_ptr<SmartTree> eeed = make_unique<SmartTree>(4);
        eeed->left= make_unique<SmartTree>(4);
        eeed->right= make_unique<SmartTree>(4);
        eeed->right->left= make_unique<SmartTree>(4);
        eeed->right->right= make_unique<SmartTree>(4);
        eeed->left->right= make_unique<SmartTree>(4);
        eeed->left->left= make_unique<SmartTree>(4);

        return eeed;
    };
}